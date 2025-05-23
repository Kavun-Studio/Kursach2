#pragma once
#include <string>
#include <msclr/marshal_cppstd.h>
#include <fstream>
#include "fun.h"

namespace Krsv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;

	student a[10];
	int n;

	/// <summary>
	/// Сводка для adminUI
	/// </summary>
	public ref class adminUI : public System::Windows::Forms::Form
	{
	public:
		adminUI(void)
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
		~adminUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(849, 270);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Фамилия";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Имя";
			this->Column2->MinimumWidth = 8;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Возраст";
			this->Column3->MinimumWidth = 8;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 150;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 288);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(191, 68);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Открыть";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &adminUI::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(331, 291);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(191, 68);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Сохранить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &adminUI::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(670, 288);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(191, 68);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &adminUI::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(1115, 15);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(237, 35);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(1115, 73);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(237, 35);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(1115, 127);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(237, 35);
			this->textBox3->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(967, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 29);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Фамилия";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1027, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 29);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Имя";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(983, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 29);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Возраст";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1138, 198);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(191, 47);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Добавить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &adminUI::button4_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(27, 77);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(237, 35);
			this->textBox4->TabIndex = 12;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(270, 74);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(191, 38);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Найти";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &adminUI::button5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(22, 39);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(229, 29);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Введите фамилию";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Имя", L"Возраст" });
			this->comboBox1->Location = System::Drawing::Point(53, 76);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(237, 37);
			this->comboBox1->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(48, 44);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(193, 29);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Выберите поле";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(53, 136);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(191, 38);
			this->button6->TabIndex = 17;
			this->button6->Text = L"По возрастанию";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &adminUI::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(270, 136);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(191, 38);
			this->button7->TabIndex = 18;
			this->button7->Text = L"По убыванию";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &adminUI::button7_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(885, 301);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(467, 138);
			this->groupBox2->TabIndex = 20;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Поиск";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->comboBox1);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Location = System::Drawing::Point(885, 455);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(467, 180);
			this->groupBox3->TabIndex = 21;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Сортировка";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column4,
					this->Column5, this->Column6
			});
			this->dataGridView2->Location = System::Drawing::Point(12, 365);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->RowTemplate->Height = 28;
			this->dataGridView2->Size = System::Drawing::Size(849, 270);
			this->dataGridView2->TabIndex = 22;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column4";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Column5";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Column6";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 150;
			// 
			// adminUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1364, 644);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"adminUI";
			this->Text = L"adminUI";
			this->Activated += gcnew System::EventHandler(this, &adminUI::adminUI_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void showst(student* a, int n)
	{
		dataGridView1->Rows->Clear();
		for (int i = 0; i < n; i++)
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = marshal_as<String^>(a[i].fam);
			dataGridView1->Rows[i]->Cells[1]->Value = marshal_as<String^>(a[i].im);
			dataGridView1->Rows[i]->Cells[2]->Value = System::Convert::ToString(a[i].age);
		}
	}
	private: System::Void adminUI_Activated(System::Object^ sender, System::EventArgs^ e)
	{
		this->Column1->HeaderText = "Фамилия";
		this->Column2->HeaderText = "Имя";
		this->Column3->HeaderText = "Возраст";
		this->Column4->HeaderText = "Фамилия";
		this->Column5->HeaderText = "Имя";
		this->Column6->HeaderText = "Возраст";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		savest(a, n);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ifstream f1("FileName.txt");
		n = 0;
		while (!f1.eof())
		{
			f1 >> a[n].fam;
			f1 >> a[n].im;
			f1 >> a[n].age;
			n++;
		}
		n--;
		f1.close();
		showst(a, n);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridView1->Rows->Clear();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "" && textBox2->Text == "")
		{
			MessageBox::Show("Не заполнены поля Фамилия, Имя!", "Повторите ввод", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (textBox3->Text == "")
		{
			MessageBox::Show("Не заполнены поле Возраст", "Повторите ввод", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else
		{
			marshal_context^ context = gcnew marshal_context();
			a[n].fam = context->marshal_as < string >(textBox1->Text->ToString());
			a[n].im = context->marshal_as < string >(textBox2->Text->ToString());
			a[n].age = Convert::ToInt32(textBox3->Text);
			n++;
			showst(a, n);
			textBox1->Text == "";
			textBox2->Text == "";
			textBox3->Text == "";
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox4->Text == "")
		{
			MessageBox::Show("Введите фамилию для поиска!", "Повторите ввод",
				MessageBoxButtons::OK, MessageBoxIcon::Error); return;
		}
		else
		{
			dataGridView2->Rows->Clear();
			int k = 0;
			for (int i = 0; i < n; i++)
			{
				if (marshal_as< string >(textBox4->Text->ToString()) == a[i].fam)
				{
					dataGridView2->Rows->Add();
					dataGridView2->Rows[k]->Cells[0]->Value = marshal_as<String^>(a[i].fam);
					dataGridView2->Rows[k]->Cells[1]->Value = marshal_as<String^>(a[i].im);
					dataGridView2->Rows[k]->Cells[2]->Value = System::Convert::ToString(a[i].age);
					k++;
				}
			}
			if (k == 0)
			{
				MessageBox::Show("Ничего не найдено!", "Поиск", MessageBoxButtons::OK,
					MessageBoxIcon::Error); return;
			}
		}
	}


	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if(comboBox1->SelectedIndex == -1)
		{
			MessageBox::Show("Выберите поле для сортировки!", "Сортировка",
				MessageBoxButtons::OK, MessageBoxIcon::Error); return;
		}
		if (comboBox1->SelectedIndex == 0) sort11(a, n);
		//if (comboBox1->SelectedIndex == 1) sort12(a, n);
		showst(a, n);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		/*if (comboBox1->SelectedIndex == -1)
		{
			MessageBox::Show("Выберите поле для сортировки!", "Сортировка",
				MessageBoxButtons::OK, MessageBoxIcon::Error); return;
		}
		if (comboBox1->SelectedIndex == 0) sort21(a, n);
		if (comboBox1->SelectedIndex == 1) sort22(a, n);
		showst(a, n);*/
	}
};
}
