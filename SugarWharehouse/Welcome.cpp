#include "Welcome.h"
#include "Header.h"
#include "User.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]


void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SugarWharehouse::Sugar Welcome_form;
	Application::Run(% Welcome_form);

}

System::Void SugarWharehouse::Sugar::textBox_login_Click(System::Object^ sender, System::EventArgs^ e)
{
		textBox_login->Text = " ";
		textBox_login->ForeColor = System::Drawing::SystemColors::WindowText;
	return System::Void();
}

System::Void SugarWharehouse::Sugar::textBox_password_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox_password->Text = " ";
	textBox_password->ForeColor = System::Drawing::SystemColors::WindowText;
	return System::Void();
}

System::Void SugarWharehouse::Sugar::button_login_Click(System::Object^ sender, System::EventArgs^ e)
{

	{
		std::string log, pass;
		if (getRole(Convert_S_to_s(textBox_login->Text->ToString(), log), Convert_S_to_s(textBox_password->Text->ToString(), pass)) != 0) {
			User^ form = gcnew User();//создаем форму
			this->Hide();//закрываем эту
			form->Show();//открываем созданную
		}
		return System::Void();
	}
}

System::Void SugarWharehouse::Sugar::textBox_reglogin_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox_reglogin->Text = " ";
	textBox_reglogin->ForeColor = System::Drawing::SystemColors::WindowText;
	return System::Void();
}

System::Void SugarWharehouse::Sugar::textBox_regPassword_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox_regPassword->Text = " ";
	textBox_regPassword->ForeColor = System::Drawing::SystemColors::WindowText;
	return System::Void();
}

System::Void SugarWharehouse::Sugar::textBox_regName_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox_regName->Text = " ";
	textBox_regName->ForeColor = System::Drawing::SystemColors::WindowText;
	return System::Void();
}

System::Void SugarWharehouse::Sugar::textBox_surename_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox_surename->Text = " ";
	textBox_surename->ForeColor = System::Drawing::SystemColors::WindowText;
	return System::Void();
}

System::Void SugarWharehouse::Sugar::button_signup_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::string log, pass, name, surname;
	userRegister(Convert_S_to_s(textBox_reglogin->Text->ToString(), log),
		Convert_S_to_s(textBox_regPassword->Text->ToString(), pass),
		Convert_S_to_s(textBox_regName->Text->ToString(), name),
		Convert_S_to_s(textBox_surename->Text->ToString(), surname));
	User^ form = gcnew User();//создаем форму
	this->Hide();//закрываем эту
	form->Show();//открываем созданную
	return System::Void();
}
