#pragma once
#include <string>

class User {
private:
	int id;
    std::string email;
    std::string password;

public:
	User(int id, const std::string& email, const std::string& password)
		: id(id), email(email), password(password) {
	}
	std::string getEmail() const { return email; }
	std::string getPassword() const { return password; }
	int getId() const { return id; }

	void setEmail(const std::string& value) { email = value; }
	void setPassword(const std::string& value) { password = value; }

};
