#pragma once

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
			this->lTransferManual->BackColor = System::Drawing::Color::Wheat;
			this->lTransferManual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.5F, System::Drawing::FontStyle::Bold));
			this->lTransferManual->Location = System::Drawing::Point(115, 0);
			this->lTransferManual->Name = L"lTransferManual";
			this->lTransferManual->Size = System::Drawing::Size(668, 70);
			this->lTransferManual->TabIndex = 0;
			this->lTransferManual->Text = L"Transfer Manual";
			this->lTransferManual->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lTransferManual->Click += gcnew System::EventHandler(this, &TransferService::label1_Click);
			// 
			// lRecipientName
			// 
			this->lRecipientName->AutoSize = true;
			this->lRecipientName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->lRecipientName->Location = System::Drawing::Point(72, 87);
			this->lRecipientName->Name = L"lRecipientName";
			this->lRecipientName->Size = System::Drawing::Size(163, 25);
			this->lRecipientName->TabIndex = 2;
			this->lRecipientName->Text = L"Recipient Name";
			// 
			// tbRecipientName
			// 
			this->tbRecipientName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbRecipientName->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbRecipientName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->tbRecipientName->Location = System::Drawing::Point(77, 116);
			this->tbRecipientName->Margin = System::Windows::Forms::Padding(4);
			this->tbRecipientName->Name = L"tbRecipientName";
			this->tbRecipientName->Size = System::Drawing::Size(461, 26);
			this->tbRecipientName->TabIndex = 3;
			// 
			// tbIBAN
			// 
			this->tbIBAN->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbIBAN->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbIBAN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->tbIBAN->Location = System::Drawing::Point(77, 175);
			this->tbIBAN->Margin = System::Windows::Forms::Padding(4);
			this->tbIBAN->Name = L"tbIBAN";
			this->tbIBAN->Size = System::Drawing::Size(461, 26);
			this->tbIBAN->TabIndex = 5;
			// 
			// lIBAN
			// 
			this->lIBAN->AutoSize = true;
			this->lIBAN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->lIBAN->Location = System::Drawing::Point(72, 146);
			this->lIBAN->Name = L"lIBAN";
			this->lIBAN->Size = System::Drawing::Size(223, 25);
			this->lIBAN->TabIndex = 4;
			this->lIBAN->Text = L"IBAN/account number";
			// 
			// tbAmount
			// 
			this->tbAmount->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbAmount->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->tbAmount->Location = System::Drawing::Point(77, 234);
			this->tbAmount->Margin = System::Windows::Forms::Padding(4);
			this->tbAmount->Name = L"tbAmount";
			this->tbAmount->Size = System::Drawing::Size(461, 26);
			this->tbAmount->TabIndex = 7;
			// 
			// lAmount
			// 
			this->lAmount->AutoSize = true;
			this->lAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->lAmount->Location = System::Drawing::Point(72, 205);
			this->lAmount->Name = L"lAmount";
			this->lAmount->Size = System::Drawing::Size(86, 25);
			this->lAmount->TabIndex = 6;
			this->lAmount->Text = L"Amount";
			// 
			// tbPaymentNote
			// 
			this->tbPaymentNote->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbPaymentNote->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbPaymentNote->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->tbPaymentNote->Location = System::Drawing::Point(77, 293);
			this->tbPaymentNote->Margin = System::Windows::Forms::Padding(4);
			this->tbPaymentNote->Name = L"tbPaymentNote";
			this->tbPaymentNote->Size = System::Drawing::Size(461, 26);
			this->tbPaymentNote->TabIndex = 9;
			// 
			// lPaymentNote
			// 
			this->lPaymentNote->AutoSize = true;
			this->lPaymentNote->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->lPaymentNote->Location = System::Drawing::Point(72, 264);
			this->lPaymentNote->Name = L"lPaymentNote";
			this->lPaymentNote->Size = System::Drawing::Size(147, 25);
			this->lPaymentNote->TabIndex = 8;
			this->lPaymentNote->Text = L"Payment Note";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Wheat;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(121, 71);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// lExecutionDate
			// 
			this->lExecutionDate->AutoSize = true;
			this->lExecutionDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->lExecutionDate->Location = System::Drawing::Point(72, 323);
			this->lExecutionDate->Name = L"lExecutionDate";
			this->lExecutionDate->Size = System::Drawing::Size(158, 25);
			this->lExecutionDate->TabIndex = 11;
			this->lExecutionDate->Text = L"Execution Date";
			// 
			// mcTransfer
			// 
			this->mcTransfer->Location = System::Drawing::Point(242, 323);
			this->mcTransfer->Name = L"mcTransfer";
			this->mcTransfer->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumSeaGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(80, 410);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 46);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Sign";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// lbTransfer_Design
			// 
			this->lbTransfer_Design->BackColor = System::Drawing::Color::Wheat;
			this->lbTransfer_Design->Location = System::Drawing::Point(-4, 65);
			this->lbTransfer_Design->Name = L"lbTransfer_Design";
			this->lbTransfer_Design->Size = System::Drawing::Size(70, 495);
			this->lbTransfer_Design->TabIndex = 14;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Wheat;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(17, 146);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(30, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Wheat;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(17, 87);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(30, 30);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Wheat;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(17, 205);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(30, 30);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 17;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Wheat;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(17, 264);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(30, 30);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 18;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Wheat;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(17, 323);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(30, 30);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 19;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Wheat;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(17, 418);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(30, 30);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 20;
			this->pictureBox7->TabStop = false;
			// 
			// TransferService
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->ClientSize = System::Drawing::Size(782, 553);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->lbTransfer_Design);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->mcTransfer);
			this->Controls->Add(this->lExecutionDate);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->tbPaymentNote);
			this->Controls->Add(this->lPaymentNote);
			this->Controls->Add(this->tbAmount);
			this->Controls->Add(this->lAmount);
			this->Controls->Add(this->tbIBAN);
			this->Controls->Add(this->lIBAN);
			this->Controls->Add(this->tbRecipientName);
			this->Controls->Add(this->lRecipientName);
			this->Controls->Add(this->lTransferManual);
			this->Name = L"TransferService";
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
	};
}
