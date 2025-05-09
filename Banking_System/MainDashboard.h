#pragma once
#include "Account.h"
#include "TransferService.h"
#include "TransactionHistory.h"


namespace BankingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainDashboard
	/// </summary>
	public ref class MainDashboard : public System::Windows::Forms::Form
	{
	public:
		MainDashboard(void)
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
		~MainDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ l_Welcome_back;
	protected:

	private: System::Windows::Forms::Button^ btnAccount;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ btnLogOut;
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
			this->l_Welcome_back = (gcnew System::Windows::Forms::Label());
			this->btnAccount = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btnLogOut = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// l_Welcome_back
			// 
			this->l_Welcome_back->BackColor = System::Drawing::Color::Wheat;
			this->l_Welcome_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->l_Welcome_back->Location = System::Drawing::Point(0, 0);
			this->l_Welcome_back->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->l_Welcome_back->Name = L"l_Welcome_back";
			this->l_Welcome_back->Size = System::Drawing::Size(514, 57);
			this->l_Welcome_back->TabIndex = 0;
			this->l_Welcome_back->Text = L"       Welcome back";
			this->l_Welcome_back->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btnAccount
			// 
			this->btnAccount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btnAccount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->btnAccount->ForeColor = System::Drawing::SystemColors::Control;
			this->btnAccount->Location = System::Drawing::Point(31, 110);
			this->btnAccount->Margin = System::Windows::Forms::Padding(2);
			this->btnAccount->Name = L"btnAccount";
			this->btnAccount->Size = System::Drawing::Size(89, 46);
			this->btnAccount->TabIndex = 1;
			this->btnAccount->Text = L"Account";
			this->btnAccount->UseVisualStyleBackColor = false;
			this->btnAccount->Click += gcnew System::EventHandler(this, &MainDashboard::btnAccount_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(31, 212);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 46);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Transfer Service";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainDashboard::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(31, 318);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(89, 46);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Transaction History";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainDashboard::button3_Click);
			// 
			// btnLogOut
			// 
			this->btnLogOut->BackColor = System::Drawing::Color::Salmon;
			this->btnLogOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->btnLogOut->Location = System::Drawing::Point(413, 394);
			this->btnLogOut->Margin = System::Windows::Forms::Padding(2);
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->Size = System::Drawing::Size(89, 46);
			this->btnLogOut->TabIndex = 5;
			this->btnLogOut->Text = L"Log Out";
			this->btnLogOut->UseVisualStyleBackColor = false;
			this->btnLogOut->Click += gcnew System::EventHandler(this, &MainDashboard::btnLogOut_Click);
			// 
			// MainDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->ClientSize = System::Drawing::Size(512, 449);
			this->Controls->Add(this->btnLogOut);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnAccount);
			this->Controls->Add(this->l_Welcome_back);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MainDashboard";
			this->Text = L"MainDashboard";
			this->Load += gcnew System::EventHandler(this, &MainDashboard::MainDashboard_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAccount_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide(); // hide the current form

		Account^ account = gcnew Account();
		account->ShowDialog(); // show the new form

		this->Close(); // close the current form
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide(); // hide the current form
	TransferService^ transferService = gcnew TransferService();
	transferService->ShowDialog(); // show the new form

	this->Close(); // close the current form
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide(); // hide the current form

	TransactionHistory^ transactionHistory = gcnew TransactionHistory();
	transactionHistory->ShowDialog(); // show the new form

	this->Close(); // close the current form
}
private: System::Void MainDashboard_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnLogOut_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
