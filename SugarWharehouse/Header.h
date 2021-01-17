#pragma once

//����������� ���������
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace System;
using namespace System::Windows::Forms;

struct Storage {
    std::string product, mod, quant;
    //Storage(const std::string& _p, const std::string& _m, const std::string& _q) : product(_p), mod(_m), quant(_q) {};//�������� ������������
};
struct Orders {
    std::string login, product, mod, quant, status; /*mod - ���� ����������*/
    Orders(const std::string& _l, const std::string& _p, const std::string& _m, const std::string& _q, const std::string& _s
    ) : login(_l), product(_p), mod(_m), quant(_q), status(_s) {};//�������� ������������
};

//��������� �������

void userRegister(std::string log, std::string pass, std::string name, std::string surname);
int getRole(std::string log, std::string pass);
int getNumbOfLines(std::string filename);

//conventers
std::string& Convert_S_to_s(String^ s, std::string& os);
String^ Convert_s_to_S(std::string text);


