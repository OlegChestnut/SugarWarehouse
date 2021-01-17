#pragma once

namespace SugarWharehouse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
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
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ добавлениеПользователяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ добавлениеПользователяToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ просмотрСкладаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ добавлениеНаименованийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сделатьЗаказНаСкладToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->добавлениеПользователяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавлениеПользователяToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->просмотрСкладаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавлениеНаименованийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сделатьЗаказНаСкладToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->выходToolStripMenuItem,
					this->добавлениеПользователяToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(437, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// добавлениеПользователяToolStripMenuItem
			// 
			this->добавлениеПользователяToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->добавлениеПользователяToolStripMenuItem1,
					this->просмотрСкладаToolStripMenuItem, this->добавлениеНаименованийToolStripMenuItem, this->сделатьЗаказНаСкладToolStripMenuItem
			});
			this->добавлениеПользователяToolStripMenuItem->Name = L"добавлениеПользователяToolStripMenuItem";
			this->добавлениеПользователяToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->добавлениеПользователяToolStripMenuItem->Text = L"Действия";
			this->добавлениеПользователяToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::добавлениеПользователяToolStripMenuItem_Click);
			// 
			// добавлениеПользователяToolStripMenuItem1
			// 
			this->добавлениеПользователяToolStripMenuItem1->Name = L"добавлениеПользователяToolStripMenuItem1";
			this->добавлениеПользователяToolStripMenuItem1->Size = System::Drawing::Size(226, 22);
			this->добавлениеПользователяToolStripMenuItem1->Text = L"Добавление пользователя";
			// 
			// просмотрСкладаToolStripMenuItem
			// 
			this->просмотрСкладаToolStripMenuItem->Name = L"просмотрСкладаToolStripMenuItem";
			this->просмотрСкладаToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->просмотрСкладаToolStripMenuItem->Text = L"Просмотр склада";
			// 
			// добавлениеНаименованийToolStripMenuItem
			// 
			this->добавлениеНаименованийToolStripMenuItem->Name = L"добавлениеНаименованийToolStripMenuItem";
			this->добавлениеНаименованийToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->добавлениеНаименованийToolStripMenuItem->Text = L"Добавление наименований";
			// 
			// сделатьЗаказНаСкладToolStripMenuItem
			// 
			this->сделатьЗаказНаСкладToolStripMenuItem->Name = L"сделатьЗаказНаСкладToolStripMenuItem";
			this->сделатьЗаказНаСкладToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->сделатьЗаказНаСкладToolStripMenuItem->Text = L"Сделать заказ на склад";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(437, 353);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Admin";
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Admin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void добавлениеПользователяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
