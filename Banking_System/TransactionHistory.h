#pragma once
#include <sqlite3.h>

#include "AccountsClass.h"
#include "Session.h"
namespace BankingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TransactionHistory
	/// </summary>
	public ref class TransactionHistory : public System::Windows::Forms::Form
	{
	public:
		TransactionHistory(void)
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
		~TransactionHistory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lTransferHistory;
	private: System::Windows::Forms::DateTimePicker^ dtTransferHistory;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::ColumnHeader^ Sender_ID;
	private: System::Windows::Forms::ColumnHeader^ Recipient_name;
	private: System::Windows::Forms::ColumnHeader^ Recipient_iban;
	private: System::Windows::Forms::ColumnHeader^ Amount;
	private: System::Windows::Forms::ColumnHeader^ Note;
	private: System::Windows::Forms::ColumnHeader^ Execution_Date;
	private: System::Windows::Forms::ColumnHeader^ Time_stamp;


	protected:


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
			this->lTransferHistory = (gcnew System::Windows::Forms::Label());
			this->dtTransferHistory = (gcnew System::Windows::Forms::DateTimePicker());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Sender_ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->Recipient_name = (gcnew System::Windows::Forms::ColumnHeader());
			this->Recipient_iban = (gcnew System::Windows::Forms::ColumnHeader());
			this->Amount = (gcnew System::Windows::Forms::ColumnHeader());
			this->Note = (gcnew System::Windows::Forms::ColumnHeader());
			this->Execution_Date = (gcnew System::Windows::Forms::ColumnHeader());
			this->Time_stamp = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lTransferHistory
			// 
			this->lTransferHistory->BackColor = System::Drawing::Color::Wheat;
			this->lTransferHistory->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Bold));
			this->lTransferHistory->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lTransferHistory->Location = System::Drawing::Point(0, 0);
			this->lTransferHistory->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lTransferHistory->Name = L"lTransferHistory";
			this->lTransferHistory->Size = System::Drawing::Size(740, 56);
			this->lTransferHistory->TabIndex = 0;
			this->lTransferHistory->Text = L"   Transfer History";
			this->lTransferHistory->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lTransferHistory->Click += gcnew System::EventHandler(this, &TransactionHistory::lTransferHistory_Click);
			// 
			// dtTransferHistory
			// 
			this->dtTransferHistory->CalendarMonthBackground = System::Drawing::SystemColors::Menu;
			this->dtTransferHistory->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F));
			this->dtTransferHistory->Location = System::Drawing::Point(9, 57);
			this->dtTransferHistory->Margin = System::Windows::Forms::Padding(2);
			this->dtTransferHistory->Name = L"dtTransferHistory";
			this->dtTransferHistory->Size = System::Drawing::Size(188, 21);
			this->dtTransferHistory->TabIndex = 1;
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->Sender_ID, this->Recipient_name,
					this->Recipient_iban, this->Amount, this->Note, this->Execution_Date, this->Time_stamp
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(9, 80);
			this->listView1->Margin = System::Windows::Forms::Padding(2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(718, 379);
			this->listView1->TabIndex = 2;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &TransactionHistory::listView1_SelectedIndexChanged);
			// 
			// Sender_ID
			// 
			this->Sender_ID->Text = L"Sender_Account_ID";
			this->Sender_ID->Width = 100;
			// 
			// Recipient_name
			// 
			this->Recipient_name->Text = L"Recipient Name";
			this->Recipient_name->Width = 90;
			// 
			// Recipient_iban
			// 
			this->Recipient_iban->Text = L"Recipient IBAN";
			this->Recipient_iban->Width = 80;
			// 
			// Amount
			// 
			this->Amount->Text = L"Amount";
			// 
			// Note
			// 
			this->Note->Text = L"Note";
			this->Note->Width = 50;
			// 
			// Execution_Date
			// 
			this->Execution_Date->Text = L"Execution Date";
			this->Execution_Date->Width = 100;
			// 
			// Time_stamp
			// 
			this->Time_stamp->Text = L"Time Stamp";
			this->Time_stamp->Width = 80;
			// 
			// btnCancel
			// 
			this->btnCancel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnCancel->BackColor = System::Drawing::Color::Salmon;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->btnCancel->Location = System::Drawing::Point(621, 466);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(105, 57);
			this->btnCancel->TabIndex = 13;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &TransactionHistory::btnCancel_Click);
			// 
			// TransactionHistory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->ClientSize = System::Drawing::Size(736, 533);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->dtTransferHistory);
			this->Controls->Add(this->lTransferHistory);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"TransactionHistory";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TransactionHistory";
			this->Load += gcnew System::EventHandler(this, &TransactionHistory::TransactionHistory_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void lTransferHistory_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void TransactionHistory_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			int currentUserId = Session::LoggedInUser->getId();

			sqlite3* db;
			int rc = sqlite3_open("Files/ebanking.db", &db);
			if (rc != SQLITE_OK) {
				MessageBox::Show("Cannot open database.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			sqlite3_exec(db, "PRAGMA journal_mode=WAL;", nullptr, nullptr, nullptr);

			// Retrieve the account ID as a string and convert to integer
			std::string accountIdStr = BankingSystem::Accounts::getAccountIdByUserId(db, currentUserId);
			int accountId = std::stoi(accountIdStr); // Convert to int

			// Fetch transactions using the correct account ID
			auto transactions = BankingSystem::Accounts::getTransactionsByAccountId(db, accountId);

			sqlite3_close(db); // Close the database connection

			// Configure ListView columns
			this->listView1->Columns->Clear();
			this->listView1->View = View::Details; // Ensure Detail view
			// Add columns
			this->listView1->Columns->Add("Recipient Name", 150, HorizontalAlignment::Left);
			this->listView1->Columns->Add("Recipient IBAN", 200, HorizontalAlignment::Left);
			this->listView1->Columns->Add("Amount", 100, HorizontalAlignment::Right);
			this->listView1->Columns->Add("Note", 200, HorizontalAlignment::Left);
			this->listView1->Columns->Add("Execution Date", 120, HorizontalAlignment::Left);
			this->listView1->Columns->Add("Timestamp", 150, HorizontalAlignment::Left);

			// Populate ListView items
			for (const auto& t : transactions) {
				ListViewItem^ item = gcnew ListViewItem(gcnew System::String(t.recipientName.c_str()));
				item->SubItems->Add(gcnew System::String(t.recipientIban.c_str()));
				item->SubItems->Add(System::String::Format("{0:F2}", t.amount)); // Correct formatting
				item->SubItems->Add(gcnew System::String(t.note.c_str()));
				item->SubItems->Add(gcnew System::String(t.executionDate.c_str()));
				item->SubItems->Add(gcnew System::String(t.timestamp.c_str()));

				this->listView1->Items->Add(item);
			}
		}
		catch (const std::exception& ex) {
			MessageBox::Show(gcnew System::String(ex.what()), "Error Loading Transactions", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
