﻿#pragma once
#include "MainDashboard.h"
#include "Account.h"
#include "UsersClass.h"
#include "Session.h"


#include <msclr/marshal_cppstd.h> // to convert String^ in std::String


namespace BankingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the contructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lTitle;
	protected:

	private: System::Windows::Forms::Label^ lEmail;

	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::Label^ lPassword;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnOk;
	private: System::Windows::Forms::PictureBox^ pctbLogo_Start;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->lTitle = (gcnew System::Windows::Forms::Label());
			this->lEmail = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->lPassword = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->pctbLogo_Start = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctbLogo_Start))->BeginInit();
			this->SuspendLayout();
			// 
			// lTitle
			// 
			this->lTitle->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->lTitle->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lTitle->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lTitle->Location = System::Drawing::Point(225, 41);
			this->lTitle->Name = L"lTitle";
			this->lTitle->Size = System::Drawing::Size(150, 53);
			this->lTitle->TabIndex = 0;
			this->lTitle->Text = L"Login";
			this->lTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lEmail
			// 
			this->lEmail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->lEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lEmail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lEmail->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lEmail->Location = System::Drawing::Point(35, 176);
			this->lEmail->Name = L"lEmail";
			this->lEmail->Size = System::Drawing::Size(94, 37);
			this->lEmail->TabIndex = 1;
			this->lEmail->Text = L"Email";
			this->lEmail->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lEmail->Click += gcnew System::EventHandler(this, &LoginForm::label2_Click);
			// 
			// tbEmail
			// 
			this->tbEmail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbEmail->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbEmail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->tbEmail->Location = System::Drawing::Point(163, 180);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(347, 25);
			this->tbEmail->TabIndex = 2;
			this->tbEmail->TextChanged += gcnew System::EventHandler(this, &LoginForm::tbEmail_TextChanged);
			// 
			// lPassword
			// 
			this->lPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->lPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lPassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lPassword->Location = System::Drawing::Point(35, 240);
			this->lPassword->Name = L"lPassword";
			this->lPassword->Size = System::Drawing::Size(94, 37);
			this->lPassword->TabIndex = 3;
			this->lPassword->Text = L"Password";
			this->lPassword->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lPassword->Click += gcnew System::EventHandler(this, &LoginForm::label2_Click_1);
			// 
			// tbPassword
			// 
			this->tbPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbPassword->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->tbPassword->Location = System::Drawing::Point(163, 245);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(347, 25);
			this->tbPassword->TabIndex = 4;
			// 
			// btnCancel
			// 
			this->btnCancel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnCancel->BackColor = System::Drawing::Color::Salmon;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->btnCancel->Location = System::Drawing::Point(372, 390);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(105, 57);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnCancel_Click);
			// 
			// btnOk
			// 
			this->btnOk->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnOk->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btnOk->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOk->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->btnOk->Location = System::Drawing::Point(111, 390);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(105, 57);
			this->btnOk->TabIndex = 7;
			this->btnOk->Text = L"OK";
			this->btnOk->UseVisualStyleBackColor = false;
			this->btnOk->Click += gcnew System::EventHandler(this, &LoginForm::btnOk_Click);
			// 
			// pctbLogo_Start
			// 
			this->pctbLogo_Start->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->pctbLogo_Start->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pctbLogo_Start->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pctbLogo_Start.Image")));
			this->pctbLogo_Start->Location = System::Drawing::Point(232, 98);
			this->pctbLogo_Start->Name = L"pctbLogo_Start";
			this->pctbLogo_Start->Size = System::Drawing::Size(135, 65);
			this->pctbLogo_Start->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pctbLogo_Start->TabIndex = 8;
			this->pctbLogo_Start->TabStop = false;
			this->pctbLogo_Start->WaitOnLoad = true;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->ClientSize = System::Drawing::Size(586, 498);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->lPassword);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->lEmail);
			this->Controls->Add(this->lTitle);
			this->Controls->Add(this->pctbLogo_Start);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctbLogo_Start))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbEmail_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {
		// Validate email and password fields
		std::string email = msclr::interop::marshal_as<std::string>(tbEmail->Text);
		std::string password = msclr::interop::marshal_as<std::string>(tbPassword->Text);

		if (email.empty() || password.empty()) {
			MessageBox::Show("Please fill in all fields.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		sqlite3* DB;
		sqlite3_stmt* stmt;
		int rc;
		int userID = -1; // Variable to store the retrieved user ID

		std::string dbPath = "Files/ebanking.db";
		rc = sqlite3_open(dbPath.c_str(), &DB);
		sqlite3_exec(DB, "PRAGMA journal_mode=WAL;", nullptr, nullptr, nullptr);

		// Modified SQL query to select the user's ID
		std::string sql = "SELECT id FROM Users WHERE email=@email AND password=@password";
		rc = sqlite3_prepare_v2(DB, sql.c_str(), -1, &stmt, nullptr);

		// Check if the statement was prepared successfully
		if (rc != SQLITE_OK) {
			MessageBox::Show("Failed to execute query.", "Query Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			sqlite3_close(DB);
			return;
		}

		// Bind parameters using numbered placeholders (1 and 2)
		sqlite3_bind_text(stmt, 1, email.c_str(), -1, SQLITE_TRANSIENT);
		sqlite3_bind_text(stmt, 2, password.c_str(), -1, SQLITE_TRANSIENT);

		rc = sqlite3_step(stmt);

		if (rc == SQLITE_ROW) {
			// Retrieve the user ID from the first column
			userID = sqlite3_column_int(stmt, 0);

			// Check if a valid ID was retrieved
			if (userID > 0) {
				// Create User with ID, email, and password
				Session::LoggedInUser = new User(userID, email, password);

				MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

				this->Hide();
				MainDashboard^ dashboard = gcnew MainDashboard();
				dashboard->ShowDialog();
				this->Close(); 
			}
			else {
				MessageBox::Show("Invalid email or password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("Invalid email or password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		sqlite3_finalize(stmt); 
		sqlite3_close(DB);
	}


private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide(); // hide the current form

}

};
}