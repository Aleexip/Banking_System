	#pragma once

#include <string>

class Card {
private:
	int id;
	int account_id;
	std::string card_number;
	std::string expiration_date;
	std::string cvc;

public:
	Card(int id, int account_id, const std::string& card_number, const std::string& expiration_date, const std::string& cvc)
		: id(id), account_id(account_id), card_number(card_number), expiration_date(expiration_date), cvc(cvc) {
	}

	int getId() const { return id; }
	int getAccountId() const { return account_id; }
	std::string getCardNumber() const { return card_number; }
	std::string getExpirationDate() const { return expiration_date; }
	std::string getCVC() const { return cvc; }

	void setId(int value) { id = value; }
	void setAccountId(int value) { account_id = value; }
	void setCardNumber(const std::string& value) { card_number = value; }
	void setExpirationDate(const std::string& value) { expiration_date = value; }
	void setCVC(const std::string& value) { cvc = value; }
};