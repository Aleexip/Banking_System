#pragma once
#include "Register.h"
#include "LoginForm.h"

namespace BankingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StartPage
	/// </summary>
	public ref class StartPage : public System::Windows::Forms::Form
	{
	public:
		StartPage(void)
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
		~StartPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lWelcomeB;
	private: System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::Button^ btnLog_in;
	protected:



	private: System::Windows::Forms::PictureBox^ pctbLogo_Start;

	protected:

	protected:

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StartPage::typeid));
			this->lWelcomeB = (gcnew System::Windows::Forms::Label());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->btnLog_in = (gcnew System::Windows::Forms::Button());
			this->pctbLogo_Start = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctbLogo_Start))->BeginInit();
			this->SuspendLayout();
			// 
			// lWelcomeB
			// 
			this->lWelcomeB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lWelcomeB->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->lWelcomeB->Location = System::Drawing::Point(169, 166);
			this->lWelcomeB->Name = L"lWelcomeB";
			this->lWelcomeB->Size = System::Drawing::Size(150, 81);
			this->lWelcomeB->TabIndex = 0;
			this->lWelcomeB->Text = L"WELCOME BACK!";
			this->lWelcomeB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lWelcomeB->Click += gcnew System::EventHandler(this, &StartPage::label1_Click);
			// 
			// btnRegister
			// 
			this->btnRegister->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegister->ForeColor = System::Drawing::Color::Black;
			this->btnRegister->Location = System::Drawing::Point(60, 325);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(98, 49);
			this->btnRegister->TabIndex = 1;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = false;
			this->btnRegister->Click += gcnew System::EventHandler(this, &StartPage::btnR_Click);
			// 
			// btnLog_in
			// 
			this->btnLog_in->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(78)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->btnLog_in->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLog_in->ForeColor = System::Drawing::Color::Black;
			this->btnLog_in->Location = System::Drawing::Point(308, 325);
			this->btnLog_in->Name = L"btnLog_in";
			this->btnLog_in->Size = System::Drawing::Size(98, 49);
			this->btnLog_in->TabIndex = 2;
			this->btnLog_in->Text = L"Login";
			this->btnLog_in->UseVisualStyleBackColor = false;
			this->btnLog_in->Click += gcnew System::EventHandler(this, &StartPage::btnLog_in_Click);
			// 
			// pctbLogo_Start
			// 
			this->pctbLogo_Start->BackColor = System::Drawing::Color::BlanchedAlmond;
			this->pctbLogo_Start->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pctbLogo_Start->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pctbLogo_Start.Image")));
			this->pctbLogo_Start->Location = System::Drawing::Point(169, 81);
			this->pctbLogo_Start->Name = L"pctbLogo_Start";
			this->pctbLogo_Start->Size = System::Drawing::Size(151, 82);
			this->pctbLogo_Start->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pctbLogo_Start->TabIndex = 3;
			this->pctbLogo_Start->TabStop = false;
			// 
			// StartPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->ClientSize = System::Drawing::Size(474, 490);
			this->Controls->Add(this->pctbLogo_Start);
			this->Controls->Add(this->btnLog_in);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->lWelcomeB);
			this->Name = L"StartPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StartPage";
			this->Load += gcnew System::EventHandler(this, &StartPage::StartPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pctbLogo_Start))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnR_Click(System::Object^ sender, System::EventArgs^ e) {
		//open register form
		this->Hide(); // hide the current form

		// Ensure Register is recognized
		Register^ registerForm = gcnew Register();
		registerForm->ShowDialog(); // open dashboard as dialog

		Application::Exit(); // close the application when the dashboard is closed
	}
	private: System::Void StartPage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnLog_in_Click(System::Object^ sender, System::EventArgs^ e) {

	//open register form
	this->Hide(); // hide the current form

	// Ensure Register is recognized
	LoginForm^ loginForm = gcnew LoginForm();
	loginForm->ShowDialog(); // open dashboard as dialog

	this->Show();
	
}
};
}
