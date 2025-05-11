#pragma once

#include <msclr/marshal_cppstd.h> // to convert String^ in std::String
#include <sqlite3.h>
#include "LoginForm.h"

namespace BankingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lRegister;
	protected:



	private: System::Windows::Forms::Label^ lEmail;
	private: System::Windows::Forms::Label^ lParola;
	private: System::Windows::Forms::Label^ lDataNasterii;
	protected:







	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::TextBox^ tbParola;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker_DataNasterii;





	private: System::Windows::Forms::Button^ btnOk;
	private: System::Windows::Forms::Button^ btnCancel;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lRegister = (gcnew System::Windows::Forms::Label());
			this->lEmail = (gcnew System::Windows::Forms::Label());
			this->lParola = (gcnew System::Windows::Forms::Label());
			this->lDataNasterii = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbParola = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker_DataNasterii = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lRegister
			// 
			this->lRegister->AutoSize = true;
			this->lRegister->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lRegister->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lRegister->Location = System::Drawing::Point(169, 41);
			this->lRegister->Name = L"lRegister";
			this->lRegister->Size = System::Drawing::Size(200, 75);
			this->lRegister->TabIndex = 0;
			this->lRegister->Text = L"Register";
			this->lRegister->Click += gcnew System::EventHandler(this, &Register::lRegister_Click);
			// 
			// lNume
			// 
			this->lNume->AutoSize = true;
			this->lNume->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->lNume->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lNume->Location = System::Drawing::Point(60, 150);
			this->lNume->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lNume->Name = L"lNume";
			this->lNume->Size = System::Drawing::Size(69, 28);
			this->lNume->TabIndex = 1;
			this->lNume->Text = L"Nume";
			// 
			// lPrenume
			// 
			this->lPrenume->AutoSize = true;
			this->lPrenume->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->lPrenume->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lPrenume->Location = System::Drawing::Point(60, 200);
			this->lPrenume->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lPrenume->Name = L"lPrenume";
			this->lPrenume->Size = System::Drawing::Size(96, 28);
			this->lPrenume->TabIndex = 2;
			this->lPrenume->Text = L"Prenume";
			// 
			// lEmail
			// 
			this->lEmail->AutoSize = true;
			this->lEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->lEmail->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lEmail->Location = System::Drawing::Point(45, 203);
			this->lEmail->Name = L"lEmail";
			this->lEmail->Size = System::Drawing::Size(53, 21);
			this->lEmail->TabIndex = 3;
			this->lEmail->Text = L"Email";
			// 
			// lParola
			// 
			this->lParola->AutoSize = true;
			this->lParola->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->lParola->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lParola->Location = System::Drawing::Point(45, 244);
			this->lParola->Name = L"lParola";
			this->lParola->Size = System::Drawing::Size(59, 21);
			this->lParola->TabIndex = 4;
			this->lParola->Text = L"Parola";
			this->lParola->Click += gcnew System::EventHandler(this, &Register::l_Parola_Click);
			// 
			// lDataNasterii
			// 
			this->lDataNasterii->AutoSize = true;
			this->lDataNasterii->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->lDataNasterii->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->lDataNasterii->Location = System::Drawing::Point(45, 325);
			this->lDataNasterii->Name = L"lDataNasterii";
			this->lDataNasterii->Size = System::Drawing::Size(107, 21);
			this->lDataNasterii->TabIndex = 5;
			this->lDataNasterii->Text = L"Data nasterii";
			// 
			// tbNume
			// 
			this->tbNume->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbNume->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbNume->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbNume->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->tbNume->Location = System::Drawing::Point(155, 150);
			this->tbNume->Margin = System::Windows::Forms::Padding(4);
			this->tbNume->Name = L"tbNume";
			this->tbNume->Size = System::Drawing::Size(387, 30);
			this->tbNume->TabIndex = 6;
			// 
			// tbPrenume
			// 
			this->tbPrenume->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbPrenume->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbPrenume->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbPrenume->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->tbPrenume->Location = System::Drawing::Point(155, 200);
			this->tbPrenume->Margin = System::Windows::Forms::Padding(4);
			this->tbPrenume->Name = L"tbPrenume";
			this->tbPrenume->Size = System::Drawing::Size(387, 30);
			this->tbPrenume->TabIndex = 7;
			// 
			// tbEmail
			// 
			this->tbEmail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbEmail->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbEmail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->tbEmail->Location = System::Drawing::Point(116, 203);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(291, 25);
			this->tbEmail->TabIndex = 8;
			// 
			// tbParola
			// 
			this->tbParola->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbParola->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbParola->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbParola->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->tbParola->Location = System::Drawing::Point(116, 244);
			this->tbParola->Name = L"tbParola";
			this->tbParola->Size = System::Drawing::Size(387, 30);
			this->tbParola->TabIndex = 9;
			// 
			// dateTimePicker_DataNasterii
			// 
			this->dateTimePicker_DataNasterii->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F));
			this->dateTimePicker_DataNasterii->Location = System::Drawing::Point(224, 405);
			this->dateTimePicker_DataNasterii->Margin = System::Windows::Forms::Padding(4);
			this->dateTimePicker_DataNasterii->MaxDate = System::DateTime(2007, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker_DataNasterii->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker_DataNasterii->Name = L"dateTimePicker_DataNasterii";
			this->dateTimePicker_DataNasterii->Size = System::Drawing::Size(200, 21);
			this->dateTimePicker_DataNasterii->TabIndex = 10;
			this->dateTimePicker_DataNasterii->Value = System::DateTime(2025, 5, 11, 0, 0, 0, 0);
			this->dateTimePicker_DataNasterii->ValueChanged += gcnew System::EventHandler(this, &Register::dateTimePicker_DataNasterii_ValueChanged);
			// 
			// btnOk
			// 
			this->btnOk->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnOk->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btnOk->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOk->ForeColor = System::Drawing::Color::Black;
			this->btnOk->Location = System::Drawing::Point(46, 384);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(105, 57);
			this->btnOk->TabIndex = 11;
			this->btnOk->Text = L"OK";
			this->btnOk->UseVisualStyleBackColor = false;
			this->btnOk->Click += gcnew System::EventHandler(this, &Register::btnOk_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnCancel->BackColor = System::Drawing::Color::Salmon;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::Black;
			this->btnCancel->Location = System::Drawing::Point(302, 384);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(105, 57);
			this->btnCancel->TabIndex = 12;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->ClientSize = System::Drawing::Size(474, 490);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->dateTimePicker_DataNasterii);
			this->Controls->Add(this->tbParola);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->lDataNasterii);
			this->Controls->Add(this->lParola);
			this->Controls->Add(this->lEmail);
			this->Controls->Add(this->lRegister);
			this->Name = L"Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			this->Load += gcnew System::EventHandler(this, &Register::Register_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void l_Parola_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
