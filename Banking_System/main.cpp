#include "LoginForm.h"
#include "MainDashboard.h"
#include "TransferService.h"
#include "Account.h"
#include "TransactionHistory.h"
#include "DatabaseManager.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array <String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BankingSystem::LoginForm loginForm;
	loginForm.ShowDialog();

	return 0;
}