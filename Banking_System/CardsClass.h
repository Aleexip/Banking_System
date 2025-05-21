#pragma once
#include <string>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <iomanip>
#include <msclr/marshal_cppstd.h>

    class Card {
    private:
        int id;
        int account_id;
        std::string card_number;
        std::string expiration_date;
        std::string cvc;

    public:
        Card(int account_id)
            : account_id(account_id) {
            generateCardDetails();
        }

        int getId() const { return id; }
        int getAccountId() const { return account_id; }
        std::string getCardNumber() const { return card_number; }
        std::string getExpirationDate() const { return expiration_date; }
        std::string getCVC() const { return cvc; }

        void setId(int value) { id = value; }

        // Generate all card data
        void generateCardDetails() {
            card_number = generateCardNumber();
            expiration_date = generateExpirationDate();
            cvc = generateCVC();
        }

    private:
        std::string generateCardNumber() {
            std::string card = "4"; // Visa prefix
            for (int i = 0; i < 15; ++i) {
                card += std::to_string(rand() % 10);
            }
            return card;
        }

        std::string generateExpirationDate() {
            std::time_t t = std::time(nullptr);
            std::tm* now = std::localtime(&t);
            int month = (rand() % 12) + 1;
            int year = (now->tm_year + 1900 + (rand() % 3 + 3)) % 100;

            std::ostringstream oss;
            oss << std::setw(2) << std::setfill('0') << month << "/";
            oss << std::setw(2) << std::setfill('0') << year;

            return oss.str();
        }

        std::string generateCVC() {
            std::ostringstream oss;
            for (int i = 0; i < 3; ++i) {
                oss << rand() % 10;
            }
            return oss.str();
        }
    };
