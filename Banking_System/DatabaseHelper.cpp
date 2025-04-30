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
    std::string sql = "CREATE TABLE IF NOT EXISTS ACCOUNTS("
                      "ID INTEGER PRIMARY KEY AUTOINCREMENT, "
                      "NAME TEXT NOT NULL, "
                      "ACCOUNT_NUMBER TEXT NOT NULL UNIQUE, "
                      "BALANCE REAL NOT NULL);";

    int exit = sqlite3_open(s, &DB);
	char* errorMessage; // variable to hold error message
	exit = sqlite3_exec(DB, sql.c_str(), nullptr, 0, &errorMessage); // execute SQL statement

    if (exit != SQLITE_OK) { 
		sqlite3_free(errorMessage); // free error message
    }

	sqlite3_close(DB); // close database connection
    return exit;
}