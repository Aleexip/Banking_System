#pragma once
#include "TransactionHistory.h"
#include "AccountsClass.h"
#include "Session.h"
#include "CardsClass.h"

namespace BankingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Account
	/// </summary>
	public ref class Account : public System::Windows::Forms::Form
	{
	public:
		Account(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Account()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lSpentThisMonth;
	private: System::Windows::Forms::TextBox^ tbSpentThisMonth;





	private: System::Windows::Forms::Label^ lAccountProducts;
	private: System::Windows::Forms::Label^ lAccount_Design;
	private: System::Windows::Forms::Label^ lCurrentAccount;

	private: System::Windows::Forms::TextBox^ tbCurrentAccount;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lIBANAccount;
	private: System::Windows::Forms::TextBox^ tbIBANAccount;
	private: System::Windows::Forms::TextBox^ tbCardNumber;
	private: System::Windows::Forms::Label^ lCardNumber;
	private: System::Windows::Forms::TextBox^ tbExpirationDate;
	private: System::Windows::Forms::Label^ lExpirationDate;
	private: System::Windows::Forms::TextBox^ tbCVC;
	private: System::Windows::Forms::Label^ lCVC;
	private: System::Windows::Forms::Label^ label3;



	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btn_card_creation;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lSpentThisMonth = (gcnew System::Windows::Forms::Label());
			this->tbSpentThisMonth = (gcnew System::Windows::Forms::TextBox());
			this->lAccountProducts = (gcnew System::Windows::Forms::Label());
			this->lAccount_Design = (gcnew System::Windows::Forms::Label());
			this->lCurrentAccount = (gcnew System::Windows::Forms::Label());
			this->tbCurrentAccount = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lIBANAccount = (gcnew System::Windows::Forms::Label());
			this->tbIBANAccount = (gcnew System::Windows::Forms::TextBox());
			this->tbCardNumber = (gcnew System::Windows::Forms::TextBox());
			this->lCardNumber = (gcnew System::Windows::Forms::Label());
			this->tbExpirationDate = (gcnew System::Windows::Forms::TextBox());
			this->lExpirationDate = (gcnew System::Windows::Forms::Label());
			this->tbCVC = (gcnew System::Windows::Forms::TextBox());
			this->lCVC = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btn_card_creation = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(9, 7);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Overview";
			// 
			// lSpentThisMonth
			// 
			this->lSpentThisMonth->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->lSpentThisMonth->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lSpentThisMonth->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->lSpentThisMonth->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lSpentThisMonth->Location = System::Drawing::Point(9, 41);
			this->lSpentThisMonth->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lSpentThisMonth->Name = L"lSpentThisMonth";
			this->lSpentThisMonth->Size = System::Drawing::Size(143, 49);
			this->lSpentThisMonth->TabIndex = 2;
			this->lSpentThisMonth->Text = L"Spent this month";
			// 
			// tbSpentThisMonth
			// 
			this->tbSpentThisMonth->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbSpentThisMonth->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbSpentThisMonth->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbSpentThisMonth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->tbSpentThisMonth->Location = System::Drawing::Point(37, 65);
			this->tbSpentThisMonth->Name = L"tbSpentThisMonth";
			this->tbSpentThisMonth->Size = System::Drawing::Size(76, 23);
			this->tbSpentThisMonth->TabIndex = 6;
			// 
			// lAccountProducts
			// 
			this->lAccountProducts->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold));
			this->lAccountProducts->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lAccountProducts->Location = System::Drawing::Point(10, 114);
			this->lAccountProducts->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lAccountProducts->Name = L"lAccountProducts";
			this->lAccountProducts->Size = System::Drawing::Size(120, 12);
			this->lAccountProducts->TabIndex = 9;
			this->lAccountProducts->Text = L"Your products";
			// 
			// lAccount_Design
			// 
			this->lAccount_Design->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->lAccount_Design->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lAccount_Design->Location = System::Drawing::Point(9, 134);
			this->lAccount_Design->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lAccount_Design->Name = L"lAccount_Design";
			this->lAccount_Design->Size = System::Drawing::Size(269, 110);
			this->lAccount_Design->TabIndex = 10;
			// 
			// lCurrentAccount
			// 
			this->lCurrentAccount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->lCurrentAccount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->lCurrentAccount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lCurrentAccount->Location = System::Drawing::Point(13, 141);
			this->lCurrentAccount->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lCurrentAccount->Name = L"lCurrentAccount";
			this->lCurrentAccount->Size = System::Drawing::Size(134, 20);
			this->lCurrentAccount->TabIndex = 11;
			this->lCurrentAccount->Text = L"Current Account";
			// 
			// tbCurrentAccount
			// 
			this->tbCurrentAccount->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbCurrentAccount->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbCurrentAccount->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbCurrentAccount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->tbCurrentAccount->Location = System::Drawing::Point(13, 167);
			this->tbCurrentAccount->Name = L"tbCurrentAccount";
			this->tbCurrentAccount->Size = System::Drawing::Size(131, 25);
			this->tbCurrentAccount->TabIndex = 12;
			this->tbCurrentAccount->TextChanged += gcnew System::EventHandler(this, &Account::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Location = System::Drawing::Point(284, 134);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(368, 110);
			this->label2->TabIndex = 14;
			// 
			// lIBANAccount
			// 
			this->lIBANAccount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->lIBANAccount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->lIBANAccount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lIBANAccount->Location = System::Drawing::Point(290, 141);
			this->lIBANAccount->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lIBANAccount->Name = L"lIBANAccount";
			this->lIBANAccount->Size = System::Drawing::Size(134, 20);
			this->lIBANAccount->TabIndex = 15;
			this->lIBANAccount->Text = L"Account IBAN";
			// 
			// tbIBANAccount
			// 
			this->tbIBANAccount->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbIBANAccount->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbIBANAccount->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbIBANAccount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->tbIBANAccount->Location = System::Drawing::Point(290, 161);
			this->tbIBANAccount->Name = L"tbIBANAccount";
			this->tbIBANAccount->Size = System::Drawing::Size(215, 25);
			this->tbIBANAccount->TabIndex = 16;
			this->tbIBANAccount->TextChanged += gcnew System::EventHandler(this, &Account::tbIBANAccount_TextChanged);
			// 
			// tbCardNumber
			// 
			this->tbCardNumber->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbCardNumber->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbCardNumber->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbCardNumber->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->tbCardNumber->Location = System::Drawing::Point(290, 211);
			this->tbCardNumber->Name = L"tbCardNumber";
			this->tbCardNumber->Size = System::Drawing::Size(148, 25);
			this->tbCardNumber->TabIndex = 18;
			// 
			// lCardNumber
			// 
			this->lCardNumber->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->lCardNumber->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->lCardNumber->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lCardNumber->Location = System::Drawing::Point(289, 192);
			this->lCardNumber->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lCardNumber->Name = L"lCardNumber";
			this->lCardNumber->Size = System::Drawing::Size(134, 20);
			this->lCardNumber->TabIndex = 17;
			this->lCardNumber->Text = L"Card Number";
			// 
			// tbExpirationDate
			// 
			this->tbExpirationDate->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbExpirationDate->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbExpirationDate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbExpirationDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->tbExpirationDate->Location = System::Drawing::Point(454, 211);
			this->tbExpirationDate->Name = L"tbExpirationDate";
			this->tbExpirationDate->Size = System::Drawing::Size(60, 25);
			this->tbExpirationDate->TabIndex = 20;
			// 
			// lExpirationDate
			// 
			this->lExpirationDate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->lExpirationDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->lExpirationDate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lExpirationDate->Location = System::Drawing::Point(452, 192);
			this->lExpirationDate->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lExpirationDate->Name = L"lExpirationDate";
			this->lExpirationDate->Size = System::Drawing::Size(134, 20);
			this->lExpirationDate->TabIndex = 19;
			this->lExpirationDate->Text = L"Expiration Date";
			// 
			// tbCVC
			// 
			this->tbCVC->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbCVC->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbCVC->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbCVC->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->tbCVC->Location = System::Drawing::Point(577, 211);
			this->tbCVC->Name = L"tbCVC";
			this->tbCVC->Size = System::Drawing::Size(32, 25);
			this->tbCVC->TabIndex = 22;
			// 
			// lCVC
			// 
			this->lCVC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->lCVC->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->lCVC->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lCVC->Location = System::Drawing::Point(574, 192);
			this->lCVC->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lCVC->Name = L"lCVC";
			this->lCVC->Size = System::Drawing::Size(42, 20);
			this->lCVC->TabIndex = 21;
			this->lCVC->Text = L"CVC";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Location = System::Drawing::Point(9, 251);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(269, 80);
			this->label3->TabIndex = 23;
			// 
			// btnCancel
			// 
			this->btnCancel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnCancel->BackColor = System::Drawing::Color::Salmon;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->btnCancel->Location = System::Drawing::Point(594, 385);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(105, 57);
			this->btnCancel->TabIndex = 27;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Account::btnCancel_Click);
			// 
			// btn_card_creation
			// 
			this->btn_card_creation->BackColor = System::Drawing::Color::Green;
			this->btn_card_creation->Location = System::Drawing::Point(49, 267);
			this->btn_card_creation->Name = L"btn_card_creation";
			this->btn_card_creation->Size = System::Drawing::Size(170, 47);
			this->btn_card_creation->TabIndex = 28;
			this->btn_card_creation->Text = L"Create card";
			this->btn_card_creation->UseVisualStyleBackColor = false;
			this->btn_card_creation->Click += gcnew System::EventHandler(this, &Account::btn_card_creation_Click);
			// 
			// Account
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->ClientSize = System::Drawing::Size(711, 454);
			this->Controls->Add(this->btn_card_creation);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbCVC);
			this->Controls->Add(this->lCVC);
			this->Controls->Add(this->tbExpirationDate);
			this->Controls->Add(this->lExpirationDate);
			this->Controls->Add(this->tbCardNumber);
			this->Controls->Add(this->lCardNumber);
			this->Controls->Add(this->tbIBANAccount);
			this->Controls->Add(this->lIBANAccount);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbCurrentAccount);
			this->Controls->Add(this->lCurrentAccount);
			this->Controls->Add(this->lAccount_Design);
			this->Controls->Add(this->lAccountProducts);
			this->Controls->Add(this->tbSpentThisMonth);
			this->Controls->Add(this->lSpentThisMonth);
			this->Controls->Add(this->label1);
			this->Name = L"Account";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Account";
			this->Load += gcnew System::EventHandler(this, &Account::Account_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Account_Load(System::Object^ sender, System::EventArgs^ e) {
		sqlite3* db;
		int rc = sqlite3_open("Files/ebanking.db", &db);
		sqlite3_exec(db, "PRAGMA journal_mode=WAL;", nullptr, nullptr, nullptr);
		if (rc != SQLITE_OK) {
			MessageBox::Show("Cannot open DB", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try {
			int userId = Session::LoggedInUser->getId();

			if (userId <= 0) {
				MessageBox::Show("User ID is invalid or not set.", "Session Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			std::string iban = BankingSystem::Accounts::getIbanByUserId(db, userId);
			tbIBANAccount->Text = gcnew System::String(iban.c_str());

			double balance = BankingSystem::Accounts::getBalanceByUserId(db, userId);
			tbCurrentAccount->Text = balance.ToString("F2");;
		}
		catch (const std::exception& ex) {
			MessageBox::Show(gcnew System::String(ex.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		sqlite3_close(db);
}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnTransactionH_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide(); // hide the current form

		// Open the TransactionHistory form
		BankingSystem::TransactionHistory^ transactionHistoryForm = gcnew BankingSystem::TransactionHistory();
		transactionHistoryForm->ShowDialog();
		
		this->Close();// Close the current form
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
}
private: System::Void tbIBANAccount_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void btn_card_creation_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int userId = Session::LoggedInUser->getId();

		// Open DB
		sqlite3* db;
		int rc = sqlite3_open("Files/ebanking.db", &db);
		sqlite3_exec(db, "PRAGMA journal_mode=WAL;", nullptr, nullptr, nullptr);
		if (rc != SQLITE_OK) {
			MessageBox::Show("Cannot open database.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		//Get account_id of the user
		sqlite3_stmt* stmt;
		int accountId = -1;

		std::string sql = "SELECT ID FROM ACCOUNTS WHERE USER_ID = ?";
		rc = sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr);
		if (rc == SQLITE_OK) {
			sqlite3_bind_int(stmt, 1, userId);
			if (sqlite3_step(stmt) == SQLITE_ROW) {
				accountId = sqlite3_column_int(stmt, 0);
			}
		}
		sqlite3_finalize(stmt);

		if (accountId == -1) {
			sqlite3_close(db);
			MessageBox::Show("You must first create an account!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		//Generate card using C++ class
		Card newCard(accountId);  // Generates card_number, exp_date, cvc

		//Insert into CARDS table
		const char* insertSQL = "INSERT INTO CARDS (ACCOUNT_ID, CARD_NUMBER, EXPIRATION_DATE, CVC) VALUES (?, ?, ?, ?)";
		rc = sqlite3_prepare_v2(db, insertSQL, -1, &stmt, nullptr);
		if (rc != SQLITE_OK) {
			MessageBox::Show("Failed to prepare card insert statement.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			sqlite3_close(db);
			return; 
		}

		sqlite3_bind_int(stmt, 1, newCard.getAccountId());
		sqlite3_bind_text(stmt, 2, newCard.getCardNumber().c_str(), -1, SQLITE_TRANSIENT);
		sqlite3_bind_text(stmt, 3, newCard.getExpirationDate().c_str(), -1, SQLITE_TRANSIENT);
		sqlite3_bind_text(stmt, 4, newCard.getCVC().c_str(), -1, SQLITE_TRANSIENT);

		bool success = (sqlite3_step(stmt) == SQLITE_DONE);
		sqlite3_finalize(stmt);
		sqlite3_close(db);

		if (success) {
			MessageBox::Show("Card created successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			
			// Set the labels with the generated card data
			tbCardNumber->Text = gcnew System::String(newCard.getCardNumber().c_str());
			tbExpirationDate->Text = gcnew System::String(newCard.getExpirationDate().c_str());
			tbCVC->Text = gcnew System::String(newCard.getCVC().c_str());

		}
		else {
			MessageBox::Show("Failed to create card.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	catch (const std::exception& ex) {
		MessageBox::Show(gcnew System::String(ex.what()), "Exception", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
