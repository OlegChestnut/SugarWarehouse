#pragma once

namespace SugarWharehouse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->�����ToolStripMenuItem,
					this->����������������������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(437, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����������������������ToolStripMenuItem
			// 
			this->����������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->����������������������ToolStripMenuItem1,
					this->��������������ToolStripMenuItem, this->����������������������ToolStripMenuItem, this->�������������������ToolStripMenuItem
			});
			this->����������������������ToolStripMenuItem->Name = L"����������������������ToolStripMenuItem";
			this->����������������������ToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->����������������������ToolStripMenuItem->Text = L"��������";
			this->����������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Admin::����������������������ToolStripMenuItem_Click);
			// 
			// ����������������������ToolStripMenuItem1
			// 
			this->����������������������ToolStripMenuItem1->Name = L"����������������������ToolStripMenuItem1";
			this->����������������������ToolStripMenuItem1->Size = System::Drawing::Size(226, 22);
			this->����������������������ToolStripMenuItem1->Text = L"���������� ������������";
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->��������������ToolStripMenuItem->Text = L"�������� ������";
			// 
			// ����������������������ToolStripMenuItem
			// 
			this->����������������������ToolStripMenuItem->Name = L"����������������������ToolStripMenuItem";
			this->����������������������ToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->����������������������ToolStripMenuItem->Text = L"���������� ������������";
			// 
			// �������������������ToolStripMenuItem
			// 
			this->�������������������ToolStripMenuItem->Name = L"�������������������ToolStripMenuItem";
			this->�������������������ToolStripMenuItem->Size = System::Drawing::Size(226, 22);
			this->�������������������ToolStripMenuItem->Text = L"������� ����� �� �����";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
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
	private: System::Void ����������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
