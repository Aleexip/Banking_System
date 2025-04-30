#include "LoginForm.h"

#include <string>
#include <iostream>

//for database
#include "DatabaseHelper.h"
#include <filesystem>      // for directory creation     
#include <sqlite3.h>

using namespace System;
using namespace System::Windows::Forms;


int main(array <String^>^ args)
{
	std::filesystem::create_directory("Files"); //create directory "Files" if it does not exist
	std::string dbPath = "Files/ebanking.db"; // database path

	//function calls to create database and tables
    createDB(dbPath.c_str()); 
    createTable(dbPath.c_str());


	//Graphical User Interface
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    BankingSystem::LoginForm loginForm;
    loginForm.ShowDialog();
 
    return 0;
}
