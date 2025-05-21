#pragma once
#include "AccountsClass.h"
#include "Session.h"
#include <chrono>
#include <ctime>


namespace BankingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TransferService
	/// </summary>
	public ref class TransferService : public System::Windows::Forms::Form
	{
	public:
		TransferService(void)
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
		~TransferService()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lTransferManual;
	private: System::Windows::Forms::Label^ lRecipientName;
	private: System::Windows::Forms::TextBox^ tbRecipientName;
	private: System::Windows::Forms::TextBox^ tbIBAN;

	private: System::Windows::Forms::Label^ lIBAN;
	private: System::Windows::Forms::TextBox^ tbAmount;
	private: System::Windows::Forms::Label^ lAmount;
	private: System::Windows::Forms::TextBox^ tbPaymentNote;
	private: System::Windows::Forms::Label^ lPaymentNote;

	private: System::Windows::Forms::Label^ lExecutionDate;
	private: System::Windows::Forms::MonthCalendar^ mcTransfer;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lbTransfer_Design;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Button^ btnCancel;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TransferService::typeid));
			this->lTransferManual = (gcnew System::Windows::Forms::Label());
			this->lRecipientName = (gcnew System::Windows::Forms::Label());
			this->tbRecipientName = (gcnew System::Windows::Forms::TextBox());
			this->tbIBAN = (gcnew System::Windows::Forms::TextBox());
			this->lIBAN = (gcnew System::Windows::Forms::Label());
			this->tbAmount = (gcnew System::Windows::Forms::TextBox());
			this->lAmount = (gcnew System::Windows::Forms::Label());
			this->tbPaymentNote = (gcnew System::Windows::Forms::TextBox());
			this->lPaymentNote = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lExecutionDate = (gcnew System::Windows::Forms::Label());
			this->mcTransfer = (gcnew System::Windows::Forms::MonthCalendar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lbTransfer_Design = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// lTransferManual
			// 
			this->lTransferManual->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->lTransferManual->Font = (gcnew System::Drawing::Font(L"Segoe UI", 17.5F, System::Drawing::FontStyle::Bold));
			this->lTransferManual->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lTransferManual->Location = System::Drawing::Point(86, 0);
			this->lTransferManual->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lTransferManual->Name = L"lTransferManual";
			this->lTransferManual->Size = System::Drawing::Size(500, 57);
			this->lTransferManual->TabIndex = 0;
			this->lTransferManual->Text = L" Transfer Manual";
			this->lTransferManual->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lTransferManual->Click += gcnew System::EventHandler(this, &TransferService::label1_Click);
			// 
			// lRecipientName
			// 
			this->lRecipientName->AutoSize = true;
			this->lRecipientName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->lRecipientName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lRecipientName->Location = System::Drawing::Point(54, 73);
			this->lRecipientName->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lRecipientName->Name = L"lRecipientName";
			this->lRecipientName->Size = System::Drawing::Size(132, 21);
			this->lRecipientName->TabIndex = 2;
			this->lRecipientName->Text = L"Recipient Name";
			// 
			// tbRecipientName
			// 
			this->tbRecipientName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbRecipientName->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbRecipientName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbRecipientName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->tbRecipientName->Location = System::Drawing::Point(58, 98);
			this->tbRecipientName->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->tbRecipientName->Name = L"tbRecipientName";
			this->tbRecipientName->Size = System::Drawing::Size(346, 25);
			this->tbRecipientName->TabIndex = 3;
			// 
			// tbIBAN
			// 
			this->tbIBAN->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbIBAN->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbIBAN->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbIBAN->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->tbIBAN->Location = System::Drawing::Point(58, 146);
			this->tbIBAN->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->tbIBAN->Name = L"tbIBAN";
			this->tbIBAN->Size = System::Drawing::Size(346, 25);
			this->tbIBAN->TabIndex = 5;
			// 
			// lIBAN
			// 
			this->lIBAN->AutoSize = true;
			this->lIBAN->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->lIBAN->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lIBAN->Location = System::Drawing::Point(54, 126);
			this->lIBAN->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lIBAN->Name = L"lIBAN";
			this->lIBAN->Size = System::Drawing::Size(181, 21);
			this->lIBAN->TabIndex = 4;
			this->lIBAN->Text = L"IBAN/account number";
			this->lIBAN->Click += gcnew System::EventHandler(this, &TransferService::lIBAN_Click);
			// 
			// tbAmount
			// 
			this->tbAmount->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbAmount->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbAmount->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->tbAmount->Location = System::Drawing::Point(58, 195);
			this->tbAmount->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->tbAmount->Name = L"tbAmount";
			this->tbAmount->Size = System::Drawing::Size(346, 25);
			this->tbAmount->TabIndex = 7;
			// 
			// lAmount
			// 
			this->lAmount->AutoSize = true;
			this->lAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->lAmount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lAmount->Location = System::Drawing::Point(54, 175);
			this->lAmount->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lAmount->Name = L"lAmount";
			this->lAmount->Size = System::Drawing::Size(72, 21);
			this->lAmount->TabIndex = 6;
			this->lAmount->Text = L"Amount";
			// 
			// tbPaymentNote
			// 
			this->tbPaymentNote->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbPaymentNote->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbPaymentNote->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbPaymentNote->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->tbPaymentNote->Location = System::Drawing::Point(58, 244);
			this->tbPaymentNote->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->tbPaymentNote->Name = L"tbPaymentNote";
			this->tbPaymentNote->Size = System::Drawing::Size(346, 25);
			this->tbPaymentNote->TabIndex = 9;
			// 
			// lPaymentNote
			// 
			this->lPaymentNote->AutoSize = true;
			this->lPaymentNote->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->lPaymentNote->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lPaymentNote->Location = System::Drawing::Point(54, 223);
			this->lPaymentNote->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lPaymentNote->Name = L"lPaymentNote";
			this->lPaymentNote->Size = System::Drawing::Size(120, 21);
			this->lPaymentNote->TabIndex = 8;
			this->lPaymentNote->Text = L"Payment Note";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(91, 57);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// lExecutionDate
			// 
			this->lExecutionDate->AutoSize = true;
			this->lExecutionDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->lExecutionDate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lExecutionDate->Location = System::Drawing::Point(54, 272);
			this->lExecutionDate->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lExecutionDate->Name = L"lExecutionDate";
			this->lExecutionDate->Size = System::Drawing::Size(126, 21);
			this->lExecutionDate->TabIndex = 11;
			this->lExecutionDate->Text = L"Execution Date";
			// 
			// mcTransfer
			// 
			this->mcTransfer->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F));
			this->mcTransfer->Location = System::Drawing::Point(182, 272);
			this->mcTransfer->Margin = System::Windows::Forms::Padding(7);
			this->mcTransfer->MinDate = System::DateTime(2025, 5, 9, 0, 0, 0, 0);
			this->mcTransfer->Name = L"mcTransfer";
			this->mcTransfer->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(60, 333);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 37);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Sign";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &TransferService::button1_Click);
			// 
			// lbTransfer_Design
			// 
			this->lbTransfer_Design->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)),
				static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->lbTransfer_Design->Location = System::Drawing::Point(-4, 53);
			this->lbTransfer_Design->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbTransfer_Design->Name = L"lbTransfer_Design";
			this->lbTransfer_Design->Size = System::Drawing::Size(52, 402);
			this->lbTransfer_Design->TabIndex = 14;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(13, 129);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(22, 24);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(13, 81);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(22, 24);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(13, 178);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(22, 24);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 17;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(13, 224);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(22, 24);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 18;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(13, 272);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(22, 24);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 19;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(13, 340);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(22, 24);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 20;
			this->pictureBox7->TabStop = false;
			// 
			// btnCancel
			// 
			this->btnCancel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnCancel->BackColor = System::Drawing::Color::Salmon;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::Black;
			this->btnCancel->Location = System::Drawing::Point(469, 367);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(104, 57);
			this->btnCancel->TabIndex = 21;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &TransferService::btnCancel_Click);
			// 
			// TransferService
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->ClientSize = System::Drawing::Size(586, 449);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->mcTransfer);
			this->Controls->Add(this->lExecutionDate);
			this->Controls->Add(this->tbPaymentNote);
			this->Controls->Add(this->lPaymentNote);
			this->Controls->Add(this->tbAmount);
			this->Controls->Add(this->lAmount);
			this->Controls->Add(this->tbIBAN);
			this->Controls->Add(this->lIBAN);
			this->Controls->Add(this->tbRecipientName);
			this->Controls->Add(this->lRecipientName);
			this->Controls->Add(this->lTransferManual);
			this->Controls->Add(this->lbTransfer_Design);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"TransferService";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TransferService";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lIBAN_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		int senderUserId = Session::LoggedInUser->getId();
		std::string recipientIban = msclr::interop::marshal_as<std::string>(tbIBAN->Text);
		double amount = std::stod(msclr::interop::marshal_as<std::string>(tbAmount->Text));
		std::string note = msclr::interop::marshal_as<std::string>(tbPaymentNote->Text);
		std::string date = msclr::interop::marshal_as<std::string>(
			mcTransfer->SelectionStart.ToString()
		);
		std::string recipientName = msclr::interop::marshal_as<std::string>(tbRecipientName->Text);
		auto now = std::chrono::system_clock::now();
		std::time_t now_time = std::chrono::system_clock::to_time_t(now);
		std::string timestamp = std::ctime(&now_time);
		timestamp.erase(std::remove(timestamp.begin(), timestamp.end(), '\n'), timestamp.end()); // remove newline



		sqlite3* db;
		if (sqlite3_open("Files/ebanking.db", &db) != SQLITE_OK) {
			MessageBox::Show("Database open failed.");
			return;
		}
		sqlite3_exec(db, "PRAGMA journal_mode=WAL;", nullptr, nullptr, nullptr);

		// Get sender account ID & balance
		std::string senderAccountId = BankingSystem::Accounts::getAccountIdByUserId(db, senderUserId);
		double senderBalance = BankingSystem::Accounts::getBalanceByAccountId(db, senderAccountId);

		// Get recipient account ID
		std::string recipientAccountId = BankingSystem::Accounts::getAccountIdByIban(db, recipientIban);
		if (recipientAccountId.empty()) {
			MessageBox::Show("Recipient account not found.");
			sqlite3_close(db);
			return;
		}

		// Check if sender has enough balance
		if (senderBalance < amount) {
			MessageBox::Show("Insufficient funds.");
			sqlite3_close(db);
			return;
		}

		// Update sender balance
		BankingSystem::Accounts::updateBalance(db, senderAccountId, senderBalance - amount);

		// Update recipient balance
		double recipientBalance = BankingSystem::Accounts::getBalanceByAccountId(db, recipientAccountId);
		BankingSystem::Accounts::updateBalance(db, recipientAccountId, recipientBalance + amount);

		// Insert transaction
		BankingSystem::Accounts::insertTransaction(
			db,
			senderAccountId,
			recipientName,
			recipientIban,
			amount,
			note,
			date,       // executionDate
			timestamp
		);


		sqlite3_close(db);

		MessageBox::Show("Transfer completed successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (const std::exception& ex) {
		MessageBox::Show(gcnew System::String(ex.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
