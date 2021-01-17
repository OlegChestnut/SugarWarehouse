#include"Header.h" 

void userRegister(std::string log, std::string pass, std::string name, std::string surname){
	std::fstream Freg("Files\\register.txt", std::ios_base::app);
	std::string role = "user ";
	Freg << log << pass<< role << name << surname << std::endl;
	Freg.close();
}

int getRole(std::string log, std::string pass) {
	std::fstream Freg("Files\\register.txt");
	if (Freg) {
		std::string temp_log, temp_pass, temp_role;
		for (int i = 0; !Freg.eof(); i++) {
			std::getline(Freg, temp_log, ' ');
			std::getline(Freg, temp_pass, ' ');
			std::getline(Freg, temp_role, ' ');
			//MessageBox::Show(Convert_s_to_S(temp_log)+".","<3");
			//MessageBox::Show(Convert_s_to_S(temp_pass) + ".", "<3");
			//MessageBox::Show(Convert_s_to_S(temp_role) + ".", "<3");
			if ((log == temp_log + " ") && (pass == temp_pass + " ")) {
				if (temp_role == "1") {// admin: 1
					MessageBox::Show("Welcome admin!", "<3");
					Freg.close();
					return 1;
				}
				if (temp_role == "2") {// worker: 2
					MessageBox::Show("Welcome worker!", "<3");
					Freg.close();
					return 2;
				}
				if (temp_role == "3") {// user: 3
					MessageBox::Show("Welcome user!", "<3");
					Freg.close();
					return 3;
				}
			}
		}
		MessageBox::Show("not such peson", "!");
		Freg.close();
		return 0;
	}
	else {
		MessageBox::Show("error, file not open", "!");
		Freg.close();
		return 4;
	}
}
int getNumbOfLines(std::string filename)
{
	std::fstream File("Files\\" + filename, std::ios_base::in);
	int counter = 0;
	for (int i = 0; !File.eof(); i++) {
		std::string temp;
		getline(File, temp);
		counter++;
	}
	return counter;
}
std::string& Convert_S_to_s(String^ s, std::string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	return os;
}
String^ Convert_s_to_S(std::string text)
{
	String^ s = gcnew String(text.c_str()); // конвертируем
	return s;
}
/*#include<iostream>
#include<fstream>
using namespace std;
fstream fReglist;
int main() {
	string temp_log, temp_pass, temp, temp_reg;
	int choose;
	cin >> choose;
	switch (choose) {
	case 1: {
		cin >> temp_log >> temp_pass;
		fReglist.open("reglist.txt", ios_base::app);
		fReglist << temp_log << ' ' << temp_pass << endl;
		fReglist.close();
		break;
	}
	case 2: {
		cin >> temp_pass >> temp_log;
		temp_reg = temp_pass + ' ' + temp_log;
		cout << temp_reg << endl;
		for (int i = 0; !fReglist.eof(); i++) {
			getline(fReglist, temp, '\n');
			cout << temp << endl;
			if (temp == temp_reg) {
				cout << "You're welcome!.!" << endl;
				break;
			}
		}
		break;
	}
	default: {
		cout << "YOU SHALL NOT PASS";
		break;
	}
	}
	return 0;
}*/
