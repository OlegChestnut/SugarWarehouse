#include "User.h"
#include "Header.h"

int numOfCol=5;
std::string login = "admin";
std::vector <Orders> Lines;
Storage *structStorage = new Storage[getNumbOfLines("storage.txt")];
void SugarWharehouse::User::ShowOrderList()
{
    for (int i = 0; i < Lines.size(); i++) {
        listBox_orders->Items->Add(Convert_s_to_S(Lines[i].login + " "+ Lines[i].product + " " + Lines[i].quant + " " + Lines[i].mod +" "+ Lines[i].status));
    }
}

void SugarWharehouse::User::ShowStorageList()
{
    for (int i = 0; i < getNumbOfLines("storage.txt"); i++) {
        //MessageBox::Show(i.ToString(), "!");
        //MessageBox::Show(Convert_s_to_S(structStorage[i].product), "!");
        listBox_makeOrder->Items->Add(Convert_s_to_S(structStorage[i].product+" "+ structStorage[i].quant + " " + structStorage[i].mod));
    }
}

System::Void SugarWharehouse::User::User_Load(System::Object^ sender, System::EventArgs^ e)
{
    std::fstream Forders("Files\\order.txt", std::ios_base::in);
    std::fstream Fstorage("Files\\storage.txt", std::ios_base::in);
    for (int i = 0; i < getNumbOfLines("order.txt"); i++) {
        std::string tempLogin, tempProduct, tempMoD, tempQuant, tempStatus;
        std::getline(Forders, tempLogin, '|');
        //MessageBox::Show(Convert_s_to_S(tempLogin),"!");
        std::getline(Forders, tempProduct, '|');
        std::getline(Forders, tempMoD, '|');
        std::getline(Forders, tempQuant, '|');
        std::getline(Forders, tempStatus);
        if (i == 0) {
            Lines.push_back(Orders("YourLogin", "Product", "MoD", "Quant", "Status:"));
        }
        if (tempLogin == login) {
            Lines.push_back(Orders(tempLogin, tempProduct, tempMoD, tempQuant, tempStatus));
        }
    }
    
    for (int i = 0; i < getNumbOfLines("storage.txt"); i++) {
        std::getline(Fstorage, structStorage[i].product, '|');
        //MessageBox::Show(Convert_s_to_S(structStorage[i].product),"!");
        std::getline(Fstorage, structStorage[i].quant, '|');
        std::getline(Fstorage, structStorage[i].mod);
    }
    Forders.close();
    Fstorage.close();
    ShowOrderList();
    ShowStorageList();
    return System::Void();
}

System::Void SugarWharehouse::User::button_received_Click(System::Object^ sender, System::EventArgs^ e)
{
    for (int i = 1; i < listBox_orders->Items->Count; i++) {
        if (listBox_orders->GetSelected(i)) {
                Lines[i].status = "received";
                Lines.push_back(Orders(Lines[i].login, Lines[i].product, Lines[i].mod, Lines[i].quant, Lines[i].status));
                Lines.erase(Lines.begin() + i);
                listBox_orders->Items->Clear();
                ShowOrderList();
        }
    }
    
}

System::Void SugarWharehouse::User::button_cancel_Click(System::Object^ sender, System::EventArgs^ e)
{

    for (int i = 1; i < listBox_orders->Items->Count; i++) {
        if (listBox_orders->GetSelected(i)) {
            std::string temp;
            Convert_S_to_s(listBox_orders->GetItemText(i), temp);
            Lines[i].status = "canceld";
            Lines.push_back(Orders(Lines[i].login, Lines[i].product, Lines[i].mod, Lines[i].quant, Lines[i].status));
            Lines.erase(Lines.begin() + i);
            listBox_orders->Items->Clear();
            ShowOrderList();
            break;
        }
    }
}
