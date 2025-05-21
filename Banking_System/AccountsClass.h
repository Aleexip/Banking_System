#pragma once
#include <string>
#include <sqlite3.h>
#include <msclr/marshal_cppstd.h>
#include <cstdlib>
#include <stdexcept>
#include <cstdint>
#include <iostream>

#include <vector> // for Transactions
#include <tuple> // for Transactions

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

        struct TransactionRecord {
            std::string recipientName;
            std::string recipientIban;
            double amount;
            std::string note;
            std::string executionDate;
            std::string timestamp;
		}; // struct for transaction record

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
		// Static method to get balance by user ID
        static double getBalanceByUserId(sqlite3* db, int userId) {
            sqlite3_stmt* stmt;
            double balance = 0.0;

            const char* sql = "SELECT BALANCE FROM ACCOUNTS WHERE USER_ID = ? LIMIT 1";
            int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
            if (rc != SQLITE_OK) {
                throw std::runtime_error(sqlite3_errmsg(db));
            }

            sqlite3_bind_int(stmt, 1, userId);

            if (sqlite3_step(stmt) == SQLITE_ROW) {
                balance = sqlite3_column_double(stmt, 0);
            }

            sqlite3_finalize(stmt);
            return balance;
        }
		// Static method to get balance by user account ID
        static double getBalanceByAccountId(sqlite3* db, std::string recipientAccountId) {
            sqlite3_stmt* stmt;
            double balance = 0.0;

            const char* sql = "SELECT BALANCE FROM ACCOUNTS WHERE ID = ? LIMIT 1";
            int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
            if (rc != SQLITE_OK) {
                throw std::runtime_error(sqlite3_errmsg(db));
            }

            sqlite3_bind_text(stmt, 1, recipientAccountId.c_str(), -1, SQLITE_STATIC);

            if (sqlite3_step(stmt) == SQLITE_ROW) {
                balance = sqlite3_column_double(stmt, 0);
            }

            sqlite3_finalize(stmt);
            return balance;
        }


		// Static method to verify that user has an IBAN account
        static bool userHasAccount(sqlite3* db, int userId) {
            sqlite3_stmt* stmt;
            const char* sql = "SELECT 1 FROM ACCOUNTS WHERE USER_ID = ? LIMIT 1;";

            int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
            if (rc != SQLITE_OK) {
                throw std::runtime_error(sqlite3_errmsg(db));
            }

            sqlite3_bind_int(stmt, 1, userId);

            rc = sqlite3_step(stmt);
            bool exists = (rc == SQLITE_ROW);

            sqlite3_finalize(stmt);
            return exists;
        }
        // Static method to get account ID by IBAN
        static std::string getAccountIdByIban(sqlite3* db, const std::string& iban) {
            sqlite3_stmt* stmt;
            std::string accountId;

            const char* sql = "SELECT ID FROM ACCOUNTS WHERE ACCOUNT_NUMBER = ? LIMIT 1";
            int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
            if (rc != SQLITE_OK) {
                throw std::runtime_error(sqlite3_errmsg(db));
            }

            sqlite3_bind_text(stmt, 1, iban.c_str(), -1, SQLITE_STATIC);

            if (sqlite3_step(stmt) == SQLITE_ROW) {
                const unsigned char* text = sqlite3_column_text(stmt, 0);
                if (text) {
                    accountId = reinterpret_cast<const char*>(text);
                }
            }

            sqlite3_finalize(stmt);
            return accountId;  // returns empty string if not found
        }
		// Static method to get Iban ID by user ID
        static std::string getAccountIdByUserId(sqlite3* db, int userId) {
            sqlite3_stmt* stmt;
            std::string accountId;

            const char* sql = "SELECT ID FROM ACCOUNTS WHERE USER_ID = ? LIMIT 1";
            int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
            if (rc != SQLITE_OK) {
                throw std::runtime_error(sqlite3_errmsg(db));
            }

            sqlite3_bind_int(stmt, 1, userId);

            if (sqlite3_step(stmt) == SQLITE_ROW) {
                const unsigned char* text = sqlite3_column_text(stmt, 0);
                if (text) {
                    accountId = reinterpret_cast<const char*>(text);
                }
            }

            sqlite3_finalize(stmt);
            return accountId;
        }


		// Static method to get account ID by user ID
        static bool updateBalance(sqlite3* db, std::string accountId, double newBalance) {
            sqlite3_stmt* stmt;
            const char* sql = "UPDATE ACCOUNTS SET BALANCE = ? WHERE ID = ?";

            int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
            if (rc != SQLITE_OK) {
                throw std::runtime_error(sqlite3_errmsg(db));
            }

            sqlite3_bind_double(stmt, 1, newBalance);
            sqlite3_bind_text(stmt, 2, accountId.c_str(), -1, SQLITE_TRANSIENT);

            rc = sqlite3_step(stmt);
            sqlite3_finalize(stmt);

            return rc == SQLITE_DONE;
        }

		// Static method to insert a transaction
        static bool insertTransaction(
            sqlite3* db,
            const std::string& senderAccountId,
            const std::string& recipientName,
            const std::string& recipientIban,
            double amount,
            const std::string& note,
            const std::string& executionDate,
            const std::string& timestamp
        ) {
            sqlite3_stmt* stmt;
            const char* sql = "INSERT INTO TRANSFERS (SENDER_ACCOUNT_ID, RECIPIENT_NAME, RECIPIENT_IBAN, AMOUNT, NOTE, EXECUTION_DATE, TIMESTAMP) VALUES (?, ?, ?, ?, ?, ?, ?)";

            int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
            if (rc != SQLITE_OK) {
                throw std::runtime_error(sqlite3_errmsg(db));
            }

            sqlite3_bind_text(stmt, 1, senderAccountId.c_str(), -1, SQLITE_TRANSIENT);
            sqlite3_bind_text(stmt, 2, recipientName.c_str(), -1, SQLITE_TRANSIENT);
            sqlite3_bind_text(stmt, 3, recipientIban.c_str(), -1, SQLITE_TRANSIENT);
            sqlite3_bind_double(stmt, 4, amount);
            sqlite3_bind_text(stmt, 5, note.c_str(), -1, SQLITE_TRANSIENT);
            sqlite3_bind_text(stmt, 6, executionDate.c_str(), -1, SQLITE_TRANSIENT);
            sqlite3_bind_text(stmt, 7, timestamp.c_str(), -1, SQLITE_TRANSIENT);

            rc = sqlite3_step(stmt);
            sqlite3_finalize(stmt);

            return rc == SQLITE_DONE;
        }

		// This method retrieves all transactions for a given account ID
        static std::vector<TransactionRecord> getTransactionsByAccountId(sqlite3* db, int accountId) {
            sqlite3_stmt* stmt;
            std::vector<TransactionRecord> transactions;

            const char* sql = "SELECT RECIPIENT_NAME, RECIPIENT_IBAN, AMOUNT, NOTE, EXECUTION_DATE, TIMESTAMP "
                "FROM TRANSFERS WHERE SENDER_ACCOUNT_ID = ? ORDER BY TIMESTAMP DESC";

            int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
            if (rc != SQLITE_OK) {
                throw std::runtime_error(sqlite3_errmsg(db));
            }

            sqlite3_bind_int(stmt, 1, accountId);  // Bind the integer accountId parameter

            while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
                const unsigned char* recipientName = sqlite3_column_text(stmt, 0);
                const unsigned char* recipientIban = sqlite3_column_text(stmt, 1);
                double amount = sqlite3_column_double(stmt, 2);
                const unsigned char* note = sqlite3_column_text(stmt, 3);
                const unsigned char* executionDate = sqlite3_column_text(stmt, 4);
                const unsigned char* timestamp = sqlite3_column_text(stmt, 5);

                transactions.push_back({
                    recipientName ? reinterpret_cast<const char*>(recipientName) : "",
                    recipientIban ? reinterpret_cast<const char*>(recipientIban) : "",
                    amount,
                    note ? reinterpret_cast<const char*>(note) : "",
                    executionDate ? reinterpret_cast<const char*>(executionDate) : "",
                    timestamp ? reinterpret_cast<const char*>(timestamp) : ""
                    });
            }

            if (rc != SQLITE_DONE) {
                sqlite3_finalize(stmt);
                throw std::runtime_error(sqlite3_errmsg(db));
            }

            sqlite3_finalize(stmt);
            return transactions;
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
