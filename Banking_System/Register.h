#pragma once

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
	private: System::Windows::Forms::Label^ l_Register;
	protected:
	private: System::Windows::Forms::Label^ l_Nume;
	private: System::Windows::Forms::Label^ l_Prenume;
	private: System::Windows::Forms::Label^ l_Email;
	private: System::Windows::Forms::Label^ l_Parola;
	private: System::Windows::Forms::Label^ l_Data_n;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
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
			this->l_Register = (gcnew System::Windows::Forms::Label());
			this->l_Nume = (gcnew System::Windows::Forms::Label());
			this->l_Prenume = (gcnew System::Windows::Forms::Label());
			this->l_Email = (gcnew System::Windows::Forms::Label());
			this->l_Parola = (gcnew System::Windows::Forms::Label());
			this->l_Data_n = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// l_Register
			// 
			this->l_Register->AutoSize = true;
			this->l_Register->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_Register->Location = System::Drawing::Point(160, 52);
			this->l_Register->Name = L"l_Register";
			this->l_Register->Size = System::Drawing::Size(155, 47);
			this->l_Register->TabIndex = 0;
			this->l_Register->Text = L"Register";
			// 
			// l_Nume
			// 
			this->l_Nume->AutoSize = true;
			this->l_Nume->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_Nume->Location = System::Drawing::Point(46, 150);
			this->l_Nume->Name = L"l_Nume";
			this->l_Nume->Size = System::Drawing::Size(53, 21);
			this->l_Nume->TabIndex = 1;
			this->l_Nume->Text = L"Nume";
			// 
			// l_Prenume
			// 
			this->l_Prenume->AutoSize = true;
			this->l_Prenume->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_Prenume->Location = System::Drawing::Point(46, 185);
			this->l_Prenume->Name = L"l_Prenume";
			this->l_Prenume->Size = System::Drawing::Size(73, 21);
			this->l_Prenume->TabIndex = 2;
			this->l_Prenume->Text = L"Prenume";
			// 
			// l_Email
			// 
			this->l_Email->AutoSize = true;
			this->l_Email->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_Email->Location = System::Drawing::Point(46, 220);
			this->l_Email->Name = L"l_Email";
			this->l_Email->Size = System::Drawing::Size(48, 21);
			this->l_Email->TabIndex = 3;
			this->l_Email->Text = L"Email";
			// 
			// l_Parola
			// 
			this->l_Parola->AutoSize = true;
			this->l_Parola->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_Parola->Location = System::Drawing::Point(46, 250);
			this->l_Parola->Name = L"l_Parola";
			this->l_Parola->Size = System::Drawing::Size(53, 21);
			this->l_Parola->TabIndex = 4;
			this->l_Parola->Text = L"Parola";
			this->l_Parola->Click += gcnew System::EventHandler(this, &Register::l_Parola_Click);
			// 
			// l_Data_n
			// 
			this->l_Data_n->AutoSize = true;
			this->l_Data_n->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->l_Data_n->Location = System::Drawing::Point(46, 324);
			this->l_Data_n->Name = L"l_Data_n";
			this->l_Data_n->Size = System::Drawing::Size(97, 21);
			this->l_Data_n->TabIndex = 5;
			this->l_Data_n->Text = L"Data nasterii";
			// 
			// tbEmail
			// 
			this->tbEmail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbEmail->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tbEmail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbEmail->Location = System::Drawing::Point(121, 151);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(291, 20);
			this->tbEmail->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(121, 186);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(291, 20);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(121, 221);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(291, 20);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Location = System::Drawing::Point(121, 250);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(291, 20);
			this->textBox3->TabIndex = 9;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(168, 325);
			this->dateTimePicker1->MaxDate = System::DateTime(2007, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 10;
			this->dateTimePicker1->Value = System::DateTime(2007, 1, 1, 0, 0, 0, 0);
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
			this->btnOk->Location = System::Drawing::Point(50, 369);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(105, 57);
			this->btnOk->TabIndex = 11;
			this->btnOk->Text = L"OK";
			this->btnOk->UseVisualStyleBackColor = false;
			// 
			// btnCancel
			// 
			this->btnCancel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnCancel->BackColor = System::Drawing::Color::Chocolate;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->btnCancel->Location = System::Drawing::Point(307, 369);
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
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->l_Data_n);
			this->Controls->Add(this->l_Parola);
			this->Controls->Add(this->l_Email);
			this->Controls->Add(this->l_Prenume);
			this->Controls->Add(this->l_Nume);
			this->Controls->Add(this->l_Register);
			this->Name = L"Register";
			this->Text = L"Register";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void l_Parola_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
