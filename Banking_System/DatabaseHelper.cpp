#include "DatabaseHelper.h"
#include <sqlite3.h>
#include <iostream>
#include <filesystem>


//creates a database if it does not exist
int createDB(const char* s) {
    sqlite3* DB;
    int exit = sqlite3_open(s, &DB);

    sqlite3_close(DB);
    return 0;
}

//creates a table if it does not exist
int createTable(const char* s) {
    sqlite3* DB;

	// sql definition
    std::string sql = R"(
        CREATE TABLE IF NOT EXISTS USERS(
            ID INTEGER PRIMARY KEY AUTOINCREMENT,
            EMAIL TEXT NOT NULL UNIQUE,
            PASSWORD TEXT NOT NULL
        );

        CREATE TABLE IF NOT EXISTS ACCOUNTS(
            ID INTEGER PRIMARY KEY AUTOINCREMENT,
            USER_ID INTEGER NOT NULL,
            NAME TEXT NOT NULL,
            ACCOUNT_NUMBER TEXT NOT NULL UNIQUE,
            BALANCE REAL NOT NULL DEFAULT 0,
            FOREIGN KEY (USER_ID) REFERENCES USERS(ID)
        );

        CREATE TABLE IF NOT EXISTS CARDS(
            ID INTEGER PRIMARY KEY AUTOINCREMENT,
            ACCOUNT_ID INTEGER NOT NULL,
            CARD_NUMBER TEXT NOT NULL UNIQUE,
            EXPIRATION_DATE TEXT NOT NULL,
            CVC TEXT NOT NULL,
            FOREIGN KEY (ACCOUNT_ID) REFERENCES ACCOUNTS(ID)
        );

        CREATE TABLE IF NOT EXISTS TRANSFERS(
            ID INTEGER PRIMARY KEY AUTOINCREMENT,
            SENDER_ACCOUNT_ID INTEGER NOT NULL,
            RECIPIENT_NAME TEXT NOT NULL,
            RECIPIENT_IBAN TEXT NOT NULL,
            AMOUNT REAL NOT NULL,
            NOTE TEXT,
            EXECUTION_DATE DATE NOT NULL,
            TIMESTAMP DATETIME DEFAULT CURRENT_TIMESTAMP,
            FOREIGN KEY (SENDER_ACCOUNT_ID) REFERENCES ACCOUNTS(ID)
        );
    )";

    int exit = sqlite3_open(s, &DB);
	char* errorMessage; // variable to hold error message
	exit = sqlite3_exec(DB, sql.c_str(), nullptr, 0, &errorMessage); // execute SQL statement

    if (exit != SQLITE_OK) { 
		sqlite3_free(errorMessage); // free error message
    }


	sqlite3_close(DB); // close database connection
    return exit;
}

//inserts a user into the database
int insertUser(const char* s) {
    sqlite3* DB;
    std::string sql = "INSERT INTO USERS (EMAIL, PASSWORD) VALUES ('robert@gmail.com', 'parola123');";

    int exit = sqlite3_open(s, &DB);
    char* errorMessage;
    exit = sqlite3_exec(DB, sql.c_str(), nullptr, 0, &errorMessage);

    if (exit != SQLITE_OK) {
        std::cerr << "Eroare la inserare user: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
    }

    sqlite3_close(DB);
    return exit;
}