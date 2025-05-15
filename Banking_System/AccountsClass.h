#pragma once
#include <string>
#include <sqlite3.h>
#include <msclr/marshal_cppstd.h>
#include <cstdlib>
#include <stdexcept>
#include <cstdint>
#include <iostream>
namespace BankingSystem {

    class Accounts {
    private:
        int64_t id;
        int user_id;
        std::string account_number; // IBAN
        double balance;

    public:
        // Constructor for creating new accounts
        Accounts(int user_id, const std::string& account_number, double balance)
            : user_id(user_id), account_number(account_number), balance(balance) {
        }



        // Getters
        int64_t getId() const { return id; }
        int getUserId() const { return user_id; }
        std::string getAccountNumber() const { return account_number; }
        double getBalance() const { return balance; }

        // Setters
        void setId(int value) { id = value; }
        void setBalance(double value) { balance = value; }

        // Database operations
        bool saveToDatabase(sqlite3* db) {
            sqlite3_stmt* stmt;

			// Check if the account number already exists
            const char* sql = "INSERT INTO ACCOUNTS (USER_ID, ACCOUNT_NUMBER, BALANCE) VALUES (?, ?, ?);";
            int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
            if (rc != SQLITE_OK) {
                throw std::runtime_error(sqlite3_errmsg(db));
            }
			// Bind parameters
            sqlite3_bind_int(stmt, 1, user_id);
            sqlite3_bind_text(stmt, 2, account_number.c_str(), -1, SQLITE_TRANSIENT);
            sqlite3_bind_double(stmt, 3, balance);

            rc = sqlite3_step(stmt);
            bool success = (rc == SQLITE_DONE);
			//  Check if the insertion was successful
            if (success) {
                id = sqlite3_last_insert_rowid(db);
            }
            else {
                std::cerr << "SQLite error (saveToDatabase): " << sqlite3_errmsg(db) << std::endl;
            }

            sqlite3_finalize(stmt);
            return success;
        }

		// Method to generate a unique IBAN and insert it into the database
        bool generateAndInsertIban(sqlite3* db) {
            sqlite3_stmt* stmt;
            int attempts = 0;
            const int maxAttempts = 10;
			// Generate a unique IBAN
            do {
                account_number = generateIban();
                attempts++;
                if (attempts > maxAttempts) {
                    throw std::runtime_error("Failed to generate a unique IBAN after 10 attempts.");
                }
            } while (ibanExistsInDatabase(db, account_number));

			// Insert the new IBAN into the database
            const char* sql = "INSERT INTO ACCOUNTS (USER_ID, ACCOUNT_NUMBER, BALANCE) VALUES (?, ?, ?);";
            int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
            if (rc != SQLITE_OK) {
                throw std::runtime_error(sqlite3_errmsg(db));
            }

            sqlite3_bind_int(stmt, 1, user_id);
            sqlite3_bind_text(stmt, 2, account_number.c_str(), -1, SQLITE_TRANSIENT);
            sqlite3_bind_double(stmt, 3, balance);

            rc = sqlite3_step(stmt);
            bool success = (rc == SQLITE_DONE);

            if (!success) {
                std::cerr << "SQLite error: " << sqlite3_errmsg(db) << std::endl;
            }

            sqlite3_finalize(stmt);
            return success;
        }
		// Check if IBAN exists in the database
        bool ibanExistsInDatabase(sqlite3* db, const std::string& iban) {
            sqlite3_stmt* stmt;
            const char* sql = "SELECT 1 FROM ACCOUNTS WHERE ACCOUNT_NUMBER = ? LIMIT 1";

            if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) != SQLITE_OK) {
                throw std::runtime_error(sqlite3_errmsg(db));
            }

            sqlite3_bind_text(stmt, 1, iban.c_str(), -1, SQLITE_TRANSIENT);

            int rc = sqlite3_step(stmt);
            bool exists = (rc == SQLITE_ROW);  // Found a row → exists

            sqlite3_finalize(stmt);
            return exists;
        }


        // Static method to generate IBAN
        static std::string generateIban() {
            const std::string country_code = "RO";  
            const std::string bank_code = "0101";  
            const std::string account_number = generateRandomNumbers(16);  // Generate a random 16-digit number

           
            return country_code + "00" + bank_code + account_number;
        }

	// Static method to get IBAN by user ID
        static std::string getIbanByUserId(sqlite3* db, int userId) {
            sqlite3_stmt* stmt;
            std::string iban = "";

            const char* sql = "SELECT ACCOUNT_NUMBER FROM ACCOUNTS WHERE USER_ID = ? LIMIT 1";
            int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
            if (rc != SQLITE_OK) {
                throw std::runtime_error(sqlite3_errmsg(db));
            }

            sqlite3_bind_int(stmt, 1, userId);

            if (sqlite3_step(stmt) == SQLITE_ROW) {
                const unsigned char* text = sqlite3_column_text(stmt, 0);
                if (text) {
                    iban = reinterpret_cast<const char*>(text);
                }
            }

            sqlite3_finalize(stmt);
            return iban;
        }


    private:
        static std::string generateRandomNumbers(int length) {
            static const char digits[] = "0123456789";
            std::string result;

            for (int i = 0; i < length; ++i) {
                result += digits[rand() % (sizeof(digits) - 1)];
            }
            return result;
        }


    };

} // namespace BankingSystem
