#pragma once

namespace SugarWharehouse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для User
	/// </summary>
	public ref class User : public System::Windows::Forms::Form
	{
	public:
		User(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~User()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip_user;
	protected:

	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ назадToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;

	private: System::Windows::Forms::Label^ label_yourOrderText;



	private: System::Windows::Forms::ListBox^ listBox_orders;
	private: System::Windows::Forms::ListBox^ listBox_makeOrder;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_cancel;
	private: System::Windows::Forms::Button^ button_received;








	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip_user = (gcnew System::Windows::Forms::MenuStrip());
			this->назадToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label_yourOrderText = (gcnew System::Windows::Forms::Label());
			this->listBox_orders = (gcnew System::Windows::Forms::ListBox());
			this->listBox_makeOrder = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_cancel = (gcnew System::Windows::Forms::Button());
			this->button_received = (gcnew System::Windows::Forms::Button());
			this->menuStrip_user->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip_user
			// 
			this->menuStrip_user->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->назадToolStripMenuItem,
					this->оПрограммеToolStripMenuItem
			});
			this->menuStrip_user->Location = System::Drawing::Point(0, 0);
			this->menuStrip_user->Name = L"menuStrip_user";
			this->menuStrip_user->Size = System::Drawing::Size(475, 24);
			this->menuStrip_user->TabIndex = 1;
			this->menuStrip_user->Text = L"menuStrip1";
			// 
			// назадToolStripMenuItem
			// 
			this->назадToolStripMenuItem->Name = L"назадToolStripMenuItem";
			this->назадToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->назадToolStripMenuItem->Text = L"Back";
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->оПрограммеToolStripMenuItem->Text = L"About";
			// 
			// label_yourOrderText
			// 
			this->label_yourOrderText->AutoSize = true;
			this->label_yourOrderText->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_yourOrderText->Location = System::Drawing::Point(12, 46);
			this->label_yourOrderText->Name = L"label_yourOrderText";
			this->label_yourOrderText->Size = System::Drawing::Size(110, 26);
			this->label_yourOrderText->TabIndex = 4;
			this->label_yourOrderText->Text = L"Your orders";
			this->label_yourOrderText->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// listBox_orders
			// 
			this->listBox_orders->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox_orders->FormattingEnabled = true;
			this->listBox_orders->ItemHeight = 20;
			this->listBox_orders->Location = System::Drawing::Point(12, 75);
			this->listBox_orders->Name = L"listBox_orders";
			this->listBox_orders->Size = System::Drawing::Size(451, 104);
			this->listBox_orders->TabIndex = 9;
			// 
			// listBox_makeOrder
			// 
			this->listBox_makeOrder->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox_makeOrder->FormattingEnabled = true;
			this->listBox_makeOrder->ItemHeight = 20;
			this->listBox_makeOrder->Location = System::Drawing::Point(12, 270);
			this->listBox_makeOrder->Name = L"listBox_makeOrder";
			this->listBox_makeOrder->Size = System::Drawing::Size(451, 104);
			this->listBox_makeOrder->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 241);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 26);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Make Order";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button_cancel
			// 
			this->button_cancel->Location = System::Drawing::Point(353, 185);
			this->button_cancel->Name = L"button_cancel";
			this->button_cancel->Size = System::Drawing::Size(110, 44);
			this->button_cancel->TabIndex = 12;
			this->button_cancel->Text = L"Cancle";
			this->button_cancel->UseVisualStyleBackColor = true;
			this->button_cancel->Click += gcnew System::EventHandler(this, &User::button_cancel_Click);
			// 
			// button_received
			// 
			this->button_received->Location = System::Drawing::Point(12, 185);
			this->button_received->Name = L"button_received";
			this->button_received->Size = System::Drawing::Size(110, 44);
			this->button_received->TabIndex = 13;
			this->button_received->Text = L"Received";
			this->button_received->UseVisualStyleBackColor = true;
			this->button_received->Click += gcnew System::EventHandler(this, &User::button_received_Click);
			// 
			// User
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(475, 396);
			this->Controls->Add(this->button_received);
			this->Controls->Add(this->button_cancel);
			this->Controls->Add(this->listBox_makeOrder);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox_orders);
			this->Controls->Add(this->label_yourOrderText);
			this->Controls->Add(this->menuStrip_user);
			this->MainMenuStrip = this->menuStrip_user;
			this->Name = L"User";
			this->Text = L"User";
			this->Load += gcnew System::EventHandler(this, &User::User_Load);
			this->menuStrip_user->ResumeLayout(false);
			this->menuStrip_user->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void ShowOrderList();
	private: void ShowStorageList();
	private: System::Void User_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_received_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button_cancel_Click(System::Object^ sender, System::EventArgs^ e);
};
}
