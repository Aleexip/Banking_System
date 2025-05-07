#pragma once

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
			this->SuspendLayout();
			// 
			// lTransferHistory
			// 
			this->lTransferHistory->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->lTransferHistory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold));
			this->lTransferHistory->Location = System::Drawing::Point(0, 0);
			this->lTransferHistory->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lTransferHistory->Name = L"lTransferHistory";
			this->lTransferHistory->Size = System::Drawing::Size(740, 54);
			this->lTransferHistory->TabIndex = 0;
			this->lTransferHistory->Text = L"   Transfer History";
			this->lTransferHistory->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lTransferHistory->Click += gcnew System::EventHandler(this, &TransactionHistory::lTransferHistory_Click);
			// 
			// dtTransferHistory
			// 
			this->dtTransferHistory->CalendarMonthBackground = System::Drawing::SystemColors::Menu;
			this->dtTransferHistory->Location = System::Drawing::Point(9, 57);
			this->dtTransferHistory->Margin = System::Windows::Forms::Padding(2);
			this->dtTransferHistory->Name = L"dtTransferHistory";
			this->dtTransferHistory->Size = System::Drawing::Size(188, 20);
			this->dtTransferHistory->TabIndex = 1;
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::SteelBlue;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(9, 80);
			this->listView1->Margin = System::Windows::Forms::Padding(2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(720, 442);
			this->listView1->TabIndex = 2;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// TransactionHistory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->ClientSize = System::Drawing::Size(736, 531);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->dtTransferHistory);
			this->Controls->Add(this->lTransferHistory);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"TransactionHistory";
			this->Text = L"TransactionHistory";
			this->Load += gcnew System::EventHandler(this, &TransactionHistory::TransactionHistory_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void lTransferHistory_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TransactionHistory_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
