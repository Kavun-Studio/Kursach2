/*
{*****************************}
{ Модуль Auth1.h    }
{ гр. П23                     }
{ Разработчик: Самусёнок А.С    }
{ Модифицирован: 13 июня 2025 }
{-----------------------------}
{ Модуль окна авторизации     }
{*****************************}
*/

#pragma once
#include "adminUI.h"
#include "operatorUI.h"
#include "fun.h"

namespace Krsv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Auth
	/// </summary>
	public ref class Auth : public System::Windows::Forms::Form
	{
	public:
		Auth(void)
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
		~Auth()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Auth::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(40, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(300, 44);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(40, 178);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(300, 44);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(40, 327);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(300, 100);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Войти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Auth::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(136, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 43);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Логин";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(125, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 43);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Пароль";
			// 
			// Auth
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(378, 444);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Auth";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Авторизация";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ login = textBox1->Text;
		String^ password = textBox2->Text;

		std::string loginStr = msclr::interop::marshal_as<std::string>(login);
		std::string passwordStr = msclr::interop::marshal_as<std::string>(password);

		std::ifstream file("users.txt");
		if (!file.is_open()) {
			MessageBox::Show("Не удалось открыть файл users.txt!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		std::string adminLogin, adminPassword, operatorLogin, operatorPassword;
		std::string line;
		int lineCount = 0;

		while (std::getline(file, line)) {
			size_t pos = line.find(":");
			if (pos != std::string::npos) {
				if (lineCount == 0) {
					adminLogin = line.substr(0, pos);
					adminPassword = line.substr(pos + 1);
				}
				else if (lineCount == 1) {
					operatorLogin = line.substr(0, pos);
					operatorPassword = line.substr(pos + 1);
				}
				lineCount++;
			}
		}
		file.close();

		if (lineCount < 2) {
			MessageBox::Show("Недостаточно данных в файле users.txt! Требуется минимум 2 строки (админ и оператор).", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (loginStr == adminLogin && passwordStr == adminPassword) {
			adminUI^ f = gcnew adminUI;
			this->Hide();
			f->Show();
		}
		else if (loginStr == operatorLogin && passwordStr == operatorPassword) {
			operatorUI^ f = gcnew operatorUI;
			this->Hide();
			f->Show();
		}
		else {
			MessageBox::Show("Неверный логин или пароль!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
