#pragma once

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
			this->lTitle = (gcnew System::Windows::Forms::Label());
			this->lEmail = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->lPassword = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lTitle
			// 
			this->lTitle->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lTitle->BackColor = System::Drawing::Color::WhiteSmoke;
			this->lTitle->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lTitle->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lTitle->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lTitle->Location = System::Drawing::Point(224, 76);
			this->lTitle->Name = L"lTitle";
			this->lTitle->Size = System::Drawing::Size(153, 54);
			this->lTitle->TabIndex = 0;
			this->lTitle->Text = L"Login";
			this->lTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lEmail
			// 
			this->lEmail->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lEmail->BackColor = System::Drawing::Color::WhiteSmoke;
			this->lEmail->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lEmail->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lEmail->Location = System::Drawing::Point(40, 181);
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
			this->tbEmail->Location = System::Drawing::Point(171, 191);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(347, 20);
			this->tbEmail->TabIndex = 2;
			this->tbEmail->TextChanged += gcnew System::EventHandler(this, &LoginForm::tbEmail_TextChanged);
			// 
			// lPassword
			// 
			this->lPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lPassword->BackColor = System::Drawing::Color::WhiteSmoke;
			this->lPassword->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lPassword->Location = System::Drawing::Point(40, 288);
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
			this->tbPassword->Location = System::Drawing::Point(171, 298);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(347, 20);
			this->tbPassword->TabIndex = 4;
			// 
			// btnCancel
			// 
			this->btnCancel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnCancel->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(363, 393);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(105, 57);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			// 
			// btnOk
			// 
			this->btnOk->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnOk->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnOk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOk->Location = System::Drawing::Point(171, 393);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(105, 57);
			this->btnOk->TabIndex = 7;
			this->btnOk->Text = L"OK";
			this->btnOk->UseVisualStyleBackColor = false;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::LightSalmon;
			this->ClientSize = System::Drawing::Size(592, 504);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->lPassword);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->lEmail);
			this->Controls->Add(this->lTitle);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
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
	};
}