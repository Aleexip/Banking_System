#include "StartPage.h"
#include "Session.h" 

#include <string>
#include <iostream>

//for database
#include "DatabaseHelper.h"
#include <filesystem>      // for directory creation     
#include <sqlite3.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace BankingSystem;

User* Session::LoggedInUser = nullptr; // Initialize the static member variable

int main(array <String^>^ args)
{
	std::filesystem::create_directory("Files"); //create directory "Files" if it does not exist
	std::string dbPath = "Files/ebanking.db"; // database path

	//function calls to create database and tables
    createDB(dbPath.c_str()); 
    createTable(dbPath.c_str());
   // insertUser(dbPath.c_str());


	//Graphical User Interface
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    
    BankingSystem::StartPage^ form = gcnew BankingSystem::StartPage();
    Application::Run(form);
    
    /*
	BankingSystem::MainDashboard^ startPage = gcnew BankingSystem::MainDashboard();
	Application::Run(startPage);*/
    return 0;
}
