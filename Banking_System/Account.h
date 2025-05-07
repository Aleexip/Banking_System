#pragma once
#include "TransactionHistory.h"

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

	private: System::Windows::Forms::Button^ btnNewTransfer;
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
	private: System::Windows::Forms::Label^ lMoneyBack;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btnTransactionH;




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
			this->btnNewTransfer = (gcnew System::Windows::Forms::Button());
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
			this->lMoneyBack = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnTransactionH = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(9, 7);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Overview";
			// 
			// lSpentThisMonth
			// 
			this->lSpentThisMonth->BackColor = System::Drawing::Color::SteelBlue;
			this->lSpentThisMonth->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lSpentThisMonth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->lSpentThisMonth->Location = System::Drawing::Point(9, 41);
			this->lSpentThisMonth->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lSpentThisMonth->Name = L"lSpentThisMonth";
			this->lSpentThisMonth->Size = System::Drawing::Size(144, 49);
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
			this->lAccountProducts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold));
			this->lAccountProducts->Location = System::Drawing::Point(10, 114);
			this->lAccountProducts->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lAccountProducts->Name = L"lAccountProducts";
			this->lAccountProducts->Size = System::Drawing::Size(120, 12);
			this->lAccountProducts->TabIndex = 9;
			this->lAccountProducts->Text = L"Your products";
			// 
			// lAccount_Design
			// 
			this->lAccount_Design->BackColor = System::Drawing::Color::SteelBlue;
			this->lAccount_Design->Location = System::Drawing::Point(9, 134);
			this->lAccount_Design->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lAccount_Design->Name = L"lAccount_Design";
			this->lAccount_Design->Size = System::Drawing::Size(270, 110);
			this->lAccount_Design->TabIndex = 10;
			// 
			// lCurrentAccount
			// 
			this->lCurrentAccount->BackColor = System::Drawing::Color::SteelBlue;
			this->lCurrentAccount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
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
			this->tbCurrentAccount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->tbCurrentAccount->Location = System::Drawing::Point(37, 167);
			this->tbCurrentAccount->Name = L"tbCurrentAccount";
			this->tbCurrentAccount->Size = System::Drawing::Size(131, 23);
			this->tbCurrentAccount->TabIndex = 12;
			this->tbCurrentAccount->TextChanged += gcnew System::EventHandler(this, &Account::textBox2_TextChanged);
			// 
			// btnNewTransfer
			// 
			this->btnNewTransfer->BackColor = System::Drawing::Color::DarkGray;
			this->btnNewTransfer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold));
			this->btnNewTransfer->Location = System::Drawing::Point(12, 211);
			this->btnNewTransfer->Margin = System::Windows::Forms::Padding(2);
			this->btnNewTransfer->Name = L"btnNewTransfer";
			this->btnNewTransfer->Size = System::Drawing::Size(264, 28);
			this->btnNewTransfer->TabIndex = 13;
			this->btnNewTransfer->Text = L"New Transfer";
			this->btnNewTransfer->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::SteelBlue;
			this->label2->Location = System::Drawing::Point(284, 134);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(369, 110);
			this->label2->TabIndex = 14;
			// 
			// lIBANAccount
			// 
			this->lIBANAccount->BackColor = System::Drawing::Color::SteelBlue;
			this->lIBANAccount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
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
			this->tbIBANAccount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->tbIBANAccount->Location = System::Drawing::Point(316, 161);
			this->tbIBANAccount->Name = L"tbIBANAccount";
			this->tbIBANAccount->Size = System::Drawing::Size(215, 23);
			this->tbIBANAccount->TabIndex = 16;
			this->tbIBANAccount->Text = L"0000-0000-0000-0000-0000-0000";
			// 
			// tbCardNumber
			// 
			this->tbCardNumber->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbCardNumber->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbCardNumber->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbCardNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->tbCardNumber->Location = System::Drawing::Point(316, 211);
			this->tbCardNumber->Name = L"tbCardNumber";
			this->tbCardNumber->Size = System::Drawing::Size(148, 23);
			this->tbCardNumber->TabIndex = 18;
			this->tbCardNumber->Text = L"0000-0000-0000-0000";
			// 
			// lCardNumber
			// 
			this->lCardNumber->BackColor = System::Drawing::Color::SteelBlue;
			this->lCardNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->lCardNumber->Location = System::Drawing::Point(290, 192);
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
			this->tbExpirationDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->tbExpirationDate->Location = System::Drawing::Point(471, 211);
			this->tbExpirationDate->Name = L"tbExpirationDate";
			this->tbExpirationDate->Size = System::Drawing::Size(60, 23);
			this->tbExpirationDate->TabIndex = 20;
			this->tbExpirationDate->Text = L"10/27";
			// 
			// lExpirationDate
			// 
			this->lExpirationDate->BackColor = System::Drawing::Color::SteelBlue;
			this->lExpirationDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->lExpirationDate->Location = System::Drawing::Point(445, 192);
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
			this->tbCVC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->tbCVC->Location = System::Drawing::Point(584, 211);
			this->tbCVC->Name = L"tbCVC";
			this->tbCVC->Size = System::Drawing::Size(32, 23);
			this->tbCVC->TabIndex = 22;
			this->tbCVC->Text = L"000";
			// 
			// lCVC
			// 
			this->lCVC->BackColor = System::Drawing::Color::SteelBlue;
			this->lCVC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->lCVC->Location = System::Drawing::Point(583, 192);
			this->lCVC->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lCVC->Name = L"lCVC";
			this->lCVC->Size = System::Drawing::Size(42, 20);
			this->lCVC->TabIndex = 21;
			this->lCVC->Text = L"CVC";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::SteelBlue;
			this->label3->Location = System::Drawing::Point(9, 251);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(270, 81);
			this->label3->TabIndex = 23;
			// 
			// lMoneyBack
			// 
			this->lMoneyBack->BackColor = System::Drawing::Color::SteelBlue;
			this->lMoneyBack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->lMoneyBack->Location = System::Drawing::Point(14, 258);
			this->lMoneyBack->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lMoneyBack->Name = L"lMoneyBack";
			this->lMoneyBack->Size = System::Drawing::Size(134, 20);
			this->lMoneyBack->TabIndex = 24;
			this->lMoneyBack->Text = L"Money Back";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->textBox1->Location = System::Drawing::Point(37, 284);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(131, 23);
			this->textBox1->TabIndex = 25;
			// 
			// btnTransactionH
			// 
			this->btnTransactionH->BackColor = System::Drawing::Color::SteelBlue;
			this->btnTransactionH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->btnTransactionH->Location = System::Drawing::Point(165, 41);
			this->btnTransactionH->Margin = System::Windows::Forms::Padding(2);
			this->btnTransactionH->Name = L"btnTransactionH";
			this->btnTransactionH->Size = System::Drawing::Size(144, 49);
			this->btnTransactionH->TabIndex = 26;
			this->btnTransactionH->Text = L"Transaction History";
			this->btnTransactionH->UseVisualStyleBackColor = false;
			this->btnTransactionH->Click += gcnew System::EventHandler(this, &Account::btnTransactionH_Click);
			// 
			// Account
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->ClientSize = System::Drawing::Size(711, 454);
			this->Controls->Add(this->btnTransactionH);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lMoneyBack);
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
			this->Controls->Add(this->btnNewTransfer);
			this->Controls->Add(this->tbCurrentAccount);
			this->Controls->Add(this->lCurrentAccount);
			this->Controls->Add(this->lAccount_Design);
			this->Controls->Add(this->lAccountProducts);
			this->Controls->Add(this->tbSpentThisMonth);
			this->Controls->Add(this->lSpentThisMonth);
			this->Controls->Add(this->label1);
			this->Name = L"Account";
			this->Text = L"Account";
			this->Load += gcnew System::EventHandler(this, &Account::Account_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Account_Load(System::Object^ sender, System::EventArgs^ e) {
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
};
}
