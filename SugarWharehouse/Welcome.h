#pragma once

namespace SugarWharehouse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// —водка дл€ Sugar
	/// </summary>
	public ref class Sugar : public System::Windows::Forms::Form
	{
	public:
		Sugar(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Sugar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox_login;
	private: System::Windows::Forms::TextBox^ textBox_password;
	private: System::Windows::Forms::TextBox^ textBox_welcomeText;
	private: System::Windows::Forms::GroupBox^ groupBox_LoginPass;
	protected:

	protected:




	private: System::Windows::Forms::Button^ button_login;
	private: System::Windows::Forms::TextBox^ textBox_signupText;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button_signup;

	private: System::Windows::Forms::TextBox^ textBox_regPassword;

	private: System::Windows::Forms::TextBox^ textBox_reglogin;
	private: System::Windows::Forms::TextBox^ textBox_regName;
	private: System::Windows::Forms::TextBox^ textBox_surename;







	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox_login = (gcnew System::Windows::Forms::TextBox());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->textBox_welcomeText = (gcnew System::Windows::Forms::TextBox());
			this->groupBox_LoginPass = (gcnew System::Windows::Forms::GroupBox());
			this->button_login = (gcnew System::Windows::Forms::Button());
			this->textBox_signupText = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_surename = (gcnew System::Windows::Forms::TextBox());
			this->textBox_regName = (gcnew System::Windows::Forms::TextBox());
			this->button_signup = (gcnew System::Windows::Forms::Button());
			this->textBox_regPassword = (gcnew System::Windows::Forms::TextBox());
			this->textBox_reglogin = (gcnew System::Windows::Forms::TextBox());
			this->groupBox_LoginPass->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox_login
			// 
			this->textBox_login->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox_login->Location = System::Drawing::Point(6, 28);
			this->textBox_login->Name = L"textBox_login";
			this->textBox_login->Size = System::Drawing::Size(271, 23);
			this->textBox_login->TabIndex = 0;
			this->textBox_login->Text = L"login";
			this->textBox_login->Click += gcnew System::EventHandler(this, &Sugar::textBox_login_Click);
			// 
			// textBox_password
			// 
			this->textBox_password->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox_password->Location = System::Drawing::Point(6, 54);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->Size = System::Drawing::Size(271, 23);
			this->textBox_password->TabIndex = 1;
			this->textBox_password->Text = L"password";
			this->textBox_password->Click += gcnew System::EventHandler(this, &Sugar::textBox_password_Click);
			// 
			// textBox_welcomeText
			// 
			this->textBox_welcomeText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_welcomeText->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_welcomeText->Enabled = false;
			this->textBox_welcomeText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_welcomeText->Location = System::Drawing::Point(106, 22);
			this->textBox_welcomeText->Multiline = true;
			this->textBox_welcomeText->Name = L"textBox_welcomeText";
			this->textBox_welcomeText->ReadOnly = true;
			this->textBox_welcomeText->ShortcutsEnabled = false;
			this->textBox_welcomeText->Size = System::Drawing::Size(100, 50);
			this->textBox_welcomeText->TabIndex = 2;
			this->textBox_welcomeText->Text = L"\r\nSIGN IN";
			this->textBox_welcomeText->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox_LoginPass
			// 
			this->groupBox_LoginPass->Controls->Add(this->button_login);
			this->groupBox_LoginPass->Controls->Add(this->textBox_password);
			this->groupBox_LoginPass->Controls->Add(this->textBox_login);
			this->groupBox_LoginPass->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox_LoginPass->Location = System::Drawing::Point(12, 95);
			this->groupBox_LoginPass->Name = L"groupBox_LoginPass";
			this->groupBox_LoginPass->Size = System::Drawing::Size(283, 176);
			this->groupBox_LoginPass->TabIndex = 3;
			this->groupBox_LoginPass->TabStop = false;
			// 
			// button_login
			// 
			this->button_login->Location = System::Drawing::Point(74, 138);
			this->button_login->Name = L"button_login";
			this->button_login->Size = System::Drawing::Size(129, 32);
			this->button_login->TabIndex = 2;
			this->button_login->Text = L"Sign in";
			this->button_login->UseVisualStyleBackColor = true;
			this->button_login->Click += gcnew System::EventHandler(this, &Sugar::button_login_Click);
			// 
			// textBox_signupText
			// 
			this->textBox_signupText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_signupText->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox_signupText->Enabled = false;
			this->textBox_signupText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_signupText->Location = System::Drawing::Point(398, 22);
			this->textBox_signupText->Multiline = true;
			this->textBox_signupText->Name = L"textBox_signupText";
			this->textBox_signupText->ReadOnly = true;
			this->textBox_signupText->ShortcutsEnabled = false;
			this->textBox_signupText->Size = System::Drawing::Size(93, 50);
			this->textBox_signupText->TabIndex = 4;
			this->textBox_signupText->Text = L"\r\nSIGN UP";
			this->textBox_signupText->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox_surename);
			this->groupBox1->Controls->Add(this->textBox_regName);
			this->groupBox1->Controls->Add(this->button_signup);
			this->groupBox1->Controls->Add(this->textBox_regPassword);
			this->groupBox1->Controls->Add(this->textBox_reglogin);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(304, 95);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(283, 176);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			// 
			// textBox_surename
			// 
			this->textBox_surename->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox_surename->Location = System::Drawing::Point(6, 109);
			this->textBox_surename->Name = L"textBox_surename";
			this->textBox_surename->Size = System::Drawing::Size(271, 23);
			this->textBox_surename->TabIndex = 4;
			this->textBox_surename->Text = L"Surname";
			this->textBox_surename->Click += gcnew System::EventHandler(this, &Sugar::textBox_surename_Click);
			// 
			// textBox_regName
			// 
			this->textBox_regName->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox_regName->Location = System::Drawing::Point(6, 80);
			this->textBox_regName->Name = L"textBox_regName";
			this->textBox_regName->Size = System::Drawing::Size(271, 23);
			this->textBox_regName->TabIndex = 3;
			this->textBox_regName->Text = L"Name";
			this->textBox_regName->Click += gcnew System::EventHandler(this, &Sugar::textBox_regName_Click);
			// 
			// button_signup
			// 
			this->button_signup->Location = System::Drawing::Point(70, 138);
			this->button_signup->Name = L"button_signup";
			this->button_signup->Size = System::Drawing::Size(128, 32);
			this->button_signup->TabIndex = 2;
			this->button_signup->Text = L"Sign up";
			this->button_signup->UseVisualStyleBackColor = true;
			this->button_signup->Click += gcnew System::EventHandler(this, &Sugar::button_signup_Click);
			// 
			// textBox_regPassword
			// 
			this->textBox_regPassword->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox_regPassword->Location = System::Drawing::Point(6, 51);
			this->textBox_regPassword->Name = L"textBox_regPassword";
			this->textBox_regPassword->Size = System::Drawing::Size(271, 23);
			this->textBox_regPassword->TabIndex = 1;
			this->textBox_regPassword->Text = L"password";
			this->textBox_regPassword->Click += gcnew System::EventHandler(this, &Sugar::textBox_regPassword_Click);
			// 
			// textBox_reglogin
			// 
			this->textBox_reglogin->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox_reglogin->Location = System::Drawing::Point(6, 22);
			this->textBox_reglogin->Name = L"textBox_reglogin";
			this->textBox_reglogin->Size = System::Drawing::Size(271, 23);
			this->textBox_reglogin->TabIndex = 0;
			this->textBox_reglogin->Text = L"login";
			this->textBox_reglogin->Click += gcnew System::EventHandler(this, &Sugar::textBox_reglogin_Click);
			// 
			// Sugar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(599, 293);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox_signupText);
			this->Controls->Add(this->groupBox_LoginPass);
			this->Controls->Add(this->textBox_welcomeText);
			this->Name = L"Sugar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Welcome";
			this->Load += gcnew System::EventHandler(this, &Sugar::Sugar_Load);
			this->groupBox_LoginPass->ResumeLayout(false);
			this->groupBox_LoginPass->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Sugar_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox_login_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox_password_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_login_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox_reglogin_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox_regPassword_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox_regName_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBox_surename_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_signup_Click(System::Object^ sender, System::EventArgs^ e);
};
}
