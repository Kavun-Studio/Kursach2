#pragma once
#include "fun.h"
#include <fstream>
#include <msclr/marshal_cppstd.h>
#include <string>

namespace Krsv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;
	using namespace msclr::interop;

	using namespace Runtime::InteropServices;

	//student a[10];
	//int n;

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
	private: System::Windows::Forms::DataGridView^ fullGrid;

	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clearToolStripMenuItem;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ addPointButton;
	private: System::Windows::Forms::TextBox^ changePointTxt;
	private: System::Windows::Forms::ComboBox^ changePointBox;
	private: System::Windows::Forms::TextBox^ cardNumTxt;
	private: System::Windows::Forms::GroupBox^ ChangeData;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ changeLevelButton;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::GroupBox^ addPassager;
	private: System::Windows::Forms::ComboBox^ addLevelBox;
	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ addCountTxt;
	private: System::Windows::Forms::TextBox^ addCardTxt;
	private: System::Windows::Forms::TextBox^ addFamTxt;
	private: System::Windows::Forms::TextBox^ addNumberTxt;
	private: LIST* L = nullptr;
	private: System::Windows::Forms::ComboBox^ sortBox;
	private: System::Windows::Forms::Button^ sortVozrButton;
	private: System::Windows::Forms::Button^ sortUbvButton;
	private: System::Windows::Forms::GroupBox^ Sort;
	private: System::Windows::Forms::GroupBox^ Search;
	private: System::Windows::Forms::DataGridView^ searchGrid;
	private: System::Windows::Forms::Button^ searchButton;
	private: System::Windows::Forms::TextBox^ searchTxt;
	private: System::Windows::Forms::ComboBox^ searchBox;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fullPhoneColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fullFamColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fullCardColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fullLevelColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fullPointColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ searchPhoneColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ searchFamColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ searchCardColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ searchLevelColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ searchPointColumn;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nameLevelColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ bonusColumn;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::TextBox^ bonusTxt;

	private: System::Windows::Forms::Button^ acceptBonusButton;
	private: System::Windows::Forms::ComboBox^ levelBox;


	private: System::ComponentModel::IContainer^ components;
	protected:
	protected:
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
			this->fullGrid = (gcnew System::Windows::Forms::DataGridView());
			this->fullPhoneColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fullFamColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fullCardColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fullLevelColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fullPointColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->addPointButton = (gcnew System::Windows::Forms::Button());
			this->changePointTxt = (gcnew System::Windows::Forms::TextBox());
			this->changePointBox = (gcnew System::Windows::Forms::ComboBox());
			this->cardNumTxt = (gcnew System::Windows::Forms::TextBox());
			this->ChangeData = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->changeLevelButton = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->addPassager = (gcnew System::Windows::Forms::GroupBox());
			this->addLevelBox = (gcnew System::Windows::Forms::ComboBox());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->addCountTxt = (gcnew System::Windows::Forms::TextBox());
			this->addCardTxt = (gcnew System::Windows::Forms::TextBox());
			this->addFamTxt = (gcnew System::Windows::Forms::TextBox());
			this->addNumberTxt = (gcnew System::Windows::Forms::TextBox());
			this->sortBox = (gcnew System::Windows::Forms::ComboBox());
			this->sortVozrButton = (gcnew System::Windows::Forms::Button());
			this->sortUbvButton = (gcnew System::Windows::Forms::Button());
			this->Sort = (gcnew System::Windows::Forms::GroupBox());
			this->Search = (gcnew System::Windows::Forms::GroupBox());
			this->searchGrid = (gcnew System::Windows::Forms::DataGridView());
			this->searchPhoneColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->searchFamColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->searchCardColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->searchLevelColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->searchPointColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->searchTxt = (gcnew System::Windows::Forms::TextBox());
			this->searchBox = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->nameLevelColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->bonusColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->levelBox = (gcnew System::Windows::Forms::ComboBox());
			this->acceptBonusButton = (gcnew System::Windows::Forms::Button());
			this->bonusTxt = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fullGrid))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->ChangeData->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->addPassager->SuspendLayout();
			this->Sort->SuspendLayout();
			this->Search->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchGrid))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// fullGrid
			// 
			this->fullGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->fullGrid->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->fullGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->fullGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->fullPhoneColumn,
					this->fullFamColumn, this->fullCardColumn, this->fullLevelColumn, this->fullPointColumn
			});
			this->fullGrid->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->fullGrid->Location = System::Drawing::Point(9, 42);
			this->fullGrid->Name = L"fullGrid";
			this->fullGrid->ReadOnly = true;
			this->fullGrid->RowHeadersWidth = 62;
			this->fullGrid->RowTemplate->Height = 28;
			this->fullGrid->Size = System::Drawing::Size(849, 395);
			this->fullGrid->TabIndex = 0;
			// 
			// fullPhoneColumn
			// 
			this->fullPhoneColumn->HeaderText = L"Телефон";
			this->fullPhoneColumn->MinimumWidth = 8;
			this->fullPhoneColumn->Name = L"fullPhoneColumn";
			this->fullPhoneColumn->ReadOnly = true;
			// 
			// fullFamColumn
			// 
			this->fullFamColumn->HeaderText = L"Фамилия И О";
			this->fullFamColumn->MinimumWidth = 8;
			this->fullFamColumn->Name = L"fullFamColumn";
			this->fullFamColumn->ReadOnly = true;
			// 
			// fullCardColumn
			// 
			this->fullCardColumn->HeaderText = L"Номер бонусной карты";
			this->fullCardColumn->MinimumWidth = 8;
			this->fullCardColumn->Name = L"fullCardColumn";
			this->fullCardColumn->ReadOnly = true;
			// 
			// fullLevelColumn
			// 
			this->fullLevelColumn->HeaderText = L"Уровень лояльности";
			this->fullLevelColumn->MinimumWidth = 8;
			this->fullLevelColumn->Name = L"fullLevelColumn";
			this->fullLevelColumn->ReadOnly = true;
			// 
			// fullPointColumn
			// 
			this->fullPointColumn->HeaderText = L"Кол-во баллов";
			this->fullPointColumn->MinimumWidth = 8;
			this->fullPointColumn->Name = L"fullPointColumn";
			this->fullPointColumn->ReadOnly = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1642, 36);
			this->menuStrip1->TabIndex = 25;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openToolStripMenuItem,
					this->saveToolStripMenuItem, this->clearToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(69, 32);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(200, 34);
			this->openToolStripMenuItem->Text = L"Открыть";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &adminUI::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(200, 34);
			this->saveToolStripMenuItem->Text = L"Сохранить";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &adminUI::saveToolStripMenuItem_Click);
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->Size = System::Drawing::Size(200, 34);
			this->clearToolStripMenuItem->Text = L"Очистить";
			this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &adminUI::clearToolStripMenuItem_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(944, 33);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 31);
			this->label5->TabIndex = 26;
			this->label5->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(546, 33);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(392, 31);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Количество баллов на карте:";
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->Location = System::Drawing::Point(337, 42);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(191, 38);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Применить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &adminUI::button1_Click);
			// 
			// addPointButton
			// 
			this->addPointButton->AutoSize = true;
			this->addPointButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addPointButton->Location = System::Drawing::Point(300, 79);
			this->addPointButton->Name = L"addPointButton";
			this->addPointButton->Size = System::Drawing::Size(144, 41);
			this->addPointButton->TabIndex = 28;
			this->addPointButton->Text = L"Начислить";
			this->addPointButton->UseVisualStyleBackColor = true;
			this->addPointButton->Click += gcnew System::EventHandler(this, &adminUI::addPointButton_Click);
			// 
			// changePointTxt
			// 
			this->changePointTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->changePointTxt->Location = System::Drawing::Point(203, 43);
			this->changePointTxt->Name = L"changePointTxt";
			this->changePointTxt->Size = System::Drawing::Size(100, 30);
			this->changePointTxt->TabIndex = 29;
			// 
			// changePointBox
			// 
			this->changePointBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->changePointBox->FormattingEnabled = true;
			this->changePointBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Добавить", L"Убавить" });
			this->changePointBox->Location = System::Drawing::Point(6, 40);
			this->changePointBox->Name = L"changePointBox";
			this->changePointBox->Size = System::Drawing::Size(191, 33);
			this->changePointBox->TabIndex = 30;
			// 
			// cardNumTxt
			// 
			this->cardNumTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cardNumTxt->Location = System::Drawing::Point(12, 44);
			this->cardNumTxt->Name = L"cardNumTxt";
			this->cardNumTxt->Size = System::Drawing::Size(297, 30);
			this->cardNumTxt->TabIndex = 31;
			// 
			// ChangeData
			// 
			this->ChangeData->AutoSize = true;
			this->ChangeData->Controls->Add(this->label5);
			this->ChangeData->Controls->Add(this->groupBox3);
			this->ChangeData->Controls->Add(this->label4);
			this->ChangeData->Controls->Add(this->groupBox2);
			this->ChangeData->Controls->Add(this->cardNumTxt);
			this->ChangeData->Controls->Add(this->button1);
			this->ChangeData->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ChangeData->Location = System::Drawing::Point(9, 676);
			this->ChangeData->Name = L"ChangeData";
			this->ChangeData->Size = System::Drawing::Size(990, 289);
			this->ChangeData->TabIndex = 32;
			this->ChangeData->TabStop = false;
			this->ChangeData->Text = L"Управление пользователем";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->changeLevelButton);
			this->groupBox3->Controls->Add(this->comboBox2);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(534, 102);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(450, 127);
			this->groupBox3->TabIndex = 33;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Изменить уровень лояльности";
			// 
			// changeLevelButton
			// 
			this->changeLevelButton->AutoSize = true;
			this->changeLevelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->changeLevelButton->Location = System::Drawing::Point(300, 79);
			this->changeLevelButton->Name = L"changeLevelButton";
			this->changeLevelButton->Size = System::Drawing::Size(144, 41);
			this->changeLevelButton->TabIndex = 28;
			this->changeLevelButton->Text = L"Изменить";
			this->changeLevelButton->UseVisualStyleBackColor = true;
			this->changeLevelButton->Click += gcnew System::EventHandler(this, &adminUI::changeLevelButton_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Bronze", L"Silver", L"Gold", L"Brilliand" });
			this->comboBox2->Location = System::Drawing::Point(6, 40);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(191, 33);
			this->comboBox2->TabIndex = 30;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->addPointButton);
			this->groupBox2->Controls->Add(this->changePointBox);
			this->groupBox2->Controls->Add(this->changePointTxt);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(12, 102);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(450, 127);
			this->groupBox2->TabIndex = 32;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Изменение баллов";
			// 
			// addPassager
			// 
			this->addPassager->AutoSize = true;
			this->addPassager->Controls->Add(this->addLevelBox);
			this->addPassager->Controls->Add(this->addButton);
			this->addPassager->Controls->Add(this->label7);
			this->addPassager->Controls->Add(this->label6);
			this->addPassager->Controls->Add(this->label3);
			this->addPassager->Controls->Add(this->label2);
			this->addPassager->Controls->Add(this->label1);
			this->addPassager->Controls->Add(this->addCountTxt);
			this->addPassager->Controls->Add(this->addCardTxt);
			this->addPassager->Controls->Add(this->addFamTxt);
			this->addPassager->Controls->Add(this->addNumberTxt);
			this->addPassager->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addPassager->Location = System::Drawing::Point(878, 42);
			this->addPassager->Name = L"addPassager";
			this->addPassager->Size = System::Drawing::Size(556, 395);
			this->addPassager->TabIndex = 33;
			this->addPassager->TabStop = false;
			this->addPassager->Text = L"Добавить пользователя";
			// 
			// addLevelBox
			// 
			this->addLevelBox->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addLevelBox->FormattingEnabled = true;
			this->addLevelBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Bronze", L"Silver", L"Gold", L"Brilliand" });
			this->addLevelBox->Location = System::Drawing::Point(320, 200);
			this->addLevelBox->Name = L"addLevelBox";
			this->addLevelBox->Size = System::Drawing::Size(220, 34);
			this->addLevelBox->TabIndex = 31;
			// 
			// addButton
			// 
			this->addButton->AutoSize = true;
			this->addButton->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addButton->Location = System::Drawing::Point(163, 321);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(220, 41);
			this->addButton->TabIndex = 29;
			this->addButton->Text = L"Добавить";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &adminUI::addButton_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(26, 239);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(252, 31);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Количество баллов";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 199);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(266, 31);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Уровень лояльности";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(110, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 31);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Номер карты";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(166, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 31);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Фамилия";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(68, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 31);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Номер телефона";
			// 
			// addCountTxt
			// 
			this->addCountTxt->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addCountTxt->Location = System::Drawing::Point(320, 240);
			this->addCountTxt->Name = L"addCountTxt";
			this->addCountTxt->Size = System::Drawing::Size(220, 34);
			this->addCountTxt->TabIndex = 4;
			// 
			// addCardTxt
			// 
			this->addCardTxt->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addCardTxt->Location = System::Drawing::Point(320, 160);
			this->addCardTxt->Name = L"addCardTxt";
			this->addCardTxt->Size = System::Drawing::Size(220, 34);
			this->addCardTxt->TabIndex = 2;
			// 
			// addFamTxt
			// 
			this->addFamTxt->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addFamTxt->Location = System::Drawing::Point(320, 120);
			this->addFamTxt->Name = L"addFamTxt";
			this->addFamTxt->Size = System::Drawing::Size(220, 34);
			this->addFamTxt->TabIndex = 1;
			// 
			// addNumberTxt
			// 
			this->addNumberTxt->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addNumberTxt->ForeColor = System::Drawing::SystemColors::MenuText;
			this->addNumberTxt->Location = System::Drawing::Point(320, 80);
			this->addNumberTxt->Name = L"addNumberTxt";
			this->addNumberTxt->Size = System::Drawing::Size(220, 34);
			this->addNumberTxt->TabIndex = 0;
			// 
			// sortBox
			// 
			this->sortBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sortBox->FormattingEnabled = true;
			this->sortBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Фамилия", L"Количество баллов" });
			this->sortBox->Location = System::Drawing::Point(6, 38);
			this->sortBox->Name = L"sortBox";
			this->sortBox->Size = System::Drawing::Size(247, 33);
			this->sortBox->TabIndex = 34;
			// 
			// sortVozrButton
			// 
			this->sortVozrButton->AutoSize = true;
			this->sortVozrButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sortVozrButton->Location = System::Drawing::Point(6, 106);
			this->sortVozrButton->Name = L"sortVozrButton";
			this->sortVozrButton->Size = System::Drawing::Size(247, 33);
			this->sortVozrButton->TabIndex = 35;
			this->sortVozrButton->Text = L"По возрастанию";
			this->sortVozrButton->UseVisualStyleBackColor = true;
			this->sortVozrButton->Click += gcnew System::EventHandler(this, &adminUI::sortVozrButton_Click);
			// 
			// sortUbvButton
			// 
			this->sortUbvButton->AutoSize = true;
			this->sortUbvButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sortUbvButton->Location = System::Drawing::Point(5, 145);
			this->sortUbvButton->Name = L"sortUbvButton";
			this->sortUbvButton->Size = System::Drawing::Size(247, 33);
			this->sortUbvButton->TabIndex = 36;
			this->sortUbvButton->Text = L"По убыванию";
			this->sortUbvButton->UseVisualStyleBackColor = true;
			this->sortUbvButton->Click += gcnew System::EventHandler(this, &adminUI::sortUbvButton_Click);
			// 
			// Sort
			// 
			this->Sort->AutoSize = true;
			this->Sort->Controls->Add(this->sortVozrButton);
			this->Sort->Controls->Add(this->sortUbvButton);
			this->Sort->Controls->Add(this->sortBox);
			this->Sort->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Sort->Location = System::Drawing::Point(9, 443);
			this->Sort->Name = L"Sort";
			this->Sort->Size = System::Drawing::Size(259, 227);
			this->Sort->TabIndex = 37;
			this->Sort->TabStop = false;
			this->Sort->Text = L"Сортировка";
			// 
			// Search
			// 
			this->Search->AutoSize = true;
			this->Search->Controls->Add(this->searchGrid);
			this->Search->Controls->Add(this->searchButton);
			this->Search->Controls->Add(this->searchTxt);
			this->Search->Controls->Add(this->searchBox);
			this->Search->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Search->Location = System::Drawing::Point(274, 443);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(1161, 227);
			this->Search->TabIndex = 39;
			this->Search->TabStop = false;
			this->Search->Text = L"Поиск";
			// 
			// searchGrid
			// 
			this->searchGrid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->searchGrid->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->searchGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->searchGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->searchPhoneColumn,
					this->searchFamColumn, this->searchCardColumn, this->searchLevelColumn, this->searchPointColumn
			});
			this->searchGrid->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->searchGrid->Location = System::Drawing::Point(259, 25);
			this->searchGrid->Name = L"searchGrid";
			this->searchGrid->ReadOnly = true;
			this->searchGrid->RowHeadersWidth = 62;
			this->searchGrid->RowTemplate->Height = 28;
			this->searchGrid->Size = System::Drawing::Size(896, 169);
			this->searchGrid->TabIndex = 40;
			// 
			// searchPhoneColumn
			// 
			this->searchPhoneColumn->FillWeight = 71.42857F;
			this->searchPhoneColumn->HeaderText = L"Телефон";
			this->searchPhoneColumn->MinimumWidth = 8;
			this->searchPhoneColumn->Name = L"searchPhoneColumn";
			this->searchPhoneColumn->ReadOnly = true;
			// 
			// searchFamColumn
			// 
			this->searchFamColumn->FillWeight = 76.51408F;
			this->searchFamColumn->HeaderText = L"Фамилия И О";
			this->searchFamColumn->MinimumWidth = 8;
			this->searchFamColumn->Name = L"searchFamColumn";
			this->searchFamColumn->ReadOnly = true;
			// 
			// searchCardColumn
			// 
			this->searchCardColumn->FillWeight = 158.2371F;
			this->searchCardColumn->HeaderText = L"Номер бонусной карты";
			this->searchCardColumn->MinimumWidth = 8;
			this->searchCardColumn->Name = L"searchCardColumn";
			this->searchCardColumn->ReadOnly = true;
			// 
			// searchLevelColumn
			// 
			this->searchLevelColumn->FillWeight = 131.1469F;
			this->searchLevelColumn->HeaderText = L"Уровень лояльности";
			this->searchLevelColumn->MinimumWidth = 8;
			this->searchLevelColumn->Name = L"searchLevelColumn";
			this->searchLevelColumn->ReadOnly = true;
			// 
			// searchPointColumn
			// 
			this->searchPointColumn->FillWeight = 62.67336F;
			this->searchPointColumn->HeaderText = L"Кол-во баллов";
			this->searchPointColumn->MinimumWidth = 8;
			this->searchPointColumn->Name = L"searchPointColumn";
			this->searchPointColumn->ReadOnly = true;
			// 
			// searchButton
			// 
			this->searchButton->AutoSize = true;
			this->searchButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->searchButton->Location = System::Drawing::Point(6, 145);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(247, 33);
			this->searchButton->TabIndex = 37;
			this->searchButton->Text = L"Поиск";
			this->searchButton->UseVisualStyleBackColor = true;
			this->searchButton->Click += gcnew System::EventHandler(this, &adminUI::searchButton_Click);
			// 
			// searchTxt
			// 
			this->searchTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->searchTxt->Location = System::Drawing::Point(6, 109);
			this->searchTxt->Name = L"searchTxt";
			this->searchTxt->Size = System::Drawing::Size(247, 30);
			this->searchTxt->TabIndex = 36;
			// 
			// searchBox
			// 
			this->searchBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->searchBox->FormattingEnabled = true;
			this->searchBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Телефон", L"Фамилия И. О.", L"Номер бонусной карты",
					L"Уровень лояльности"
			});
			this->searchBox->Location = System::Drawing::Point(6, 38);
			this->searchBox->Name = L"searchBox";
			this->searchBox->Size = System::Drawing::Size(247, 33);
			this->searchBox->TabIndex = 35;
			// 
			// groupBox1
			// 
			this->groupBox1->AutoSize = true;
			this->groupBox1->Controls->Add(this->bonusTxt);
			this->groupBox1->Controls->Add(this->acceptBonusButton);
			this->groupBox1->Controls->Add(this->levelBox);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(1005, 676);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(630, 288);
			this->groupBox1->TabIndex = 40;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Управление уровнями";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->nameLevelColumn,
					this->bonusColumn
			});
			this->dataGridView1->Location = System::Drawing::Point(204, 33);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(418, 222);
			this->dataGridView1->TabIndex = 0;
			// 
			// nameLevelColumn
			// 
			this->nameLevelColumn->HeaderText = L"Уровень";
			this->nameLevelColumn->MinimumWidth = 8;
			this->nameLevelColumn->Name = L"nameLevelColumn";
			this->nameLevelColumn->ReadOnly = true;
			// 
			// bonusColumn
			// 
			this->bonusColumn->HeaderText = L"Бонус";
			this->bonusColumn->MinimumWidth = 8;
			this->bonusColumn->Name = L"bonusColumn";
			this->bonusColumn->ReadOnly = true;
			// 
			// levelBox
			// 
			this->levelBox->FormattingEnabled = true;
			this->levelBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Bronze", L"Silver", L"Gold", L"Brilliand" });
			this->levelBox->Location = System::Drawing::Point(6, 70);
			this->levelBox->Name = L"levelBox";
			this->levelBox->Size = System::Drawing::Size(192, 34);
			this->levelBox->TabIndex = 1;
			// 
			// acceptBonusButton
			// 
			this->acceptBonusButton->Location = System::Drawing::Point(6, 182);
			this->acceptBonusButton->Name = L"acceptBonusButton";
			this->acceptBonusButton->Size = System::Drawing::Size(192, 34);
			this->acceptBonusButton->TabIndex = 3;
			this->acceptBonusButton->Text = L"Применить";
			this->acceptBonusButton->UseVisualStyleBackColor = true;
			// 
			// bonusTxt
			// 
			this->bonusTxt->Location = System::Drawing::Point(6, 127);
			this->bonusTxt->Name = L"bonusTxt";
			this->bonusTxt->Size = System::Drawing::Size(192, 34);
			this->bonusTxt->TabIndex = 4;
			// 
			// adminUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1642, 975);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Search);
			this->Controls->Add(this->Sort);
			this->Controls->Add(this->addPassager);
			this->Controls->Add(this->ChangeData);
			this->Controls->Add(this->fullGrid);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"adminUI";
			this->Text = L"adminUI";
			this->Activated += gcnew System::EventHandler(this, &adminUI::adminUI_Activated);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fullGrid))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ChangeData->ResumeLayout(false);
			this->ChangeData->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->addPassager->ResumeLayout(false);
			this->addPassager->PerformLayout();
			this->Sort->ResumeLayout(false);
			this->Sort->PerformLayout();
			this->Search->ResumeLayout(false);
			this->Search->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchGrid))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void Scan_List(LIST* L) {
		fullGrid->Rows->Clear();

		if (L == nullptr) return;

		LIST* q = L;
		int i = 0;

		while (q != nullptr) {
			fullGrid->Rows->Add();
			fullGrid->Rows[i]->Cells[0]->Value = marshal_as<String^>(q->element.phoneNumber);
			fullGrid->Rows[i]->Cells[1]->Value = marshal_as<String^>(q->element.fam);
			fullGrid->Rows[i]->Cells[2]->Value = System::Convert::ToString(q->element.cardNumber);
			fullGrid->Rows[i]->Cells[3]->Value = marshal_as<String^>(q->element.level);
			fullGrid->Rows[i]->Cells[4]->Value = System::Convert::ToString(q->element.pointCount);
			q = q->next;
			i++;
		}
	}

	private: void showst(passagers* a, int n)
	{
		fullGrid->Rows->Clear();
		for (int i = 0; i < n; i++) {
			fullGrid->Rows->Add();
			fullGrid->Rows[i]->Cells[0]->Value = marshal_as<String^>(a[i].phoneNumber);
			fullGrid->Rows[i]->Cells[1]->Value = marshal_as<String^>(a[i].fam);
			fullGrid->Rows[i]->Cells[2]->Value = System::Convert::ToString(a[i].cardNumber);
			fullGrid->Rows[i]->Cells[3]->Value = marshal_as<String^>(a[i].level);
			fullGrid->Rows[i]->Cells[4]->Value = System::Convert::ToString(a[i].pointCount);
		}
	}
	private: System::Void adminUI_Activated(System::Object^ sender, System::EventArgs^ e)
	{
		this->fullPhoneColumn->HeaderText = "Номер телефона";
		this->fullFamColumn->HeaderText = "Фамилия И. О.";
		this->fullCardColumn->HeaderText = "Номер карты";
		this->fullLevelColumn->HeaderText = "Уровень";
		this->fullPointColumn->HeaderText = "Количество баллов";
		this->searchPhoneColumn->HeaderText = "Номер телефона";
		this->searchFamColumn->HeaderText = "Фамилия И. О.";
		this->searchCardColumn->HeaderText = "Номер карты";
		this->searchLevelColumn->HeaderText = "Уровень";
		this->searchPointColumn->HeaderText = "Количество баллов";
	}
	private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (String::IsNullOrEmpty(searchTxt->Text)) {
			MessageBox::Show("Введите данные для поиска!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		String^ searchValue = searchTxt->Text->Trim();
		int searchIndex = searchBox->SelectedIndex;

		if (searchIndex < 0) {
			MessageBox::Show("Выберите поле для поиска!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (L == nullptr) {
			MessageBox::Show("Список пуст!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		searchGrid->Rows->Clear();
		LIST* q = L;
		int foundCount = 0;

		while (q != nullptr) {
			bool match = false;

			switch (searchIndex) {
			case 0: // Телефон
				match = String::Equals(marshal_as<String^>(q->element.phoneNumber), searchValue, StringComparison::OrdinalIgnoreCase);
				break;
			case 1: // Фамилия И. О.
				match = String::Equals(marshal_as<String^>(q->element.fam), searchValue, StringComparison::OrdinalIgnoreCase);
				break;
			case 2: // Номер бонусной карты
				match = String::Equals(System::Convert::ToString(q->element.cardNumber), searchValue);
				break;
			case 3: // Уровень лояльности
				match = String::Equals(marshal_as<String^>(q->element.level), searchValue, StringComparison::OrdinalIgnoreCase);
				break;
			}

			if (match) {
				searchGrid->Rows->Add();
				searchGrid->Rows[foundCount]->Cells[0]->Value = marshal_as<String^>(q->element.phoneNumber);
				searchGrid->Rows[foundCount]->Cells[1]->Value = marshal_as<String^>(q->element.fam);
				searchGrid->Rows[foundCount]->Cells[2]->Value = System::Convert::ToString(q->element.cardNumber);
				searchGrid->Rows[foundCount]->Cells[3]->Value = marshal_as<String^>(q->element.level);
				searchGrid->Rows[foundCount]->Cells[4]->Value = System::Convert::ToString(q->element.pointCount);
				foundCount++;
			}
			q = q->next;
		}

		if (foundCount == 0) {
			MessageBox::Show("Ничего не найдено!", "Поиск", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	private: System::Void clearToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (L != nullptr) {
			while (L != nullptr) {
				L = DelFirst_List(L);
			}
		}
		fullGrid->Rows->Clear();
		searchGrid->Rows->Clear();
		cardGrid->Rows->Clear();

		label5->Text = "0";

		MessageBox::Show("Данные очищены!", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (String::IsNullOrWhiteSpace(addNumberTxt->Text) ||
			String::IsNullOrWhiteSpace(addCardTxt->Text) ||
			String::IsNullOrWhiteSpace(addFamTxt->Text) ||
			String::IsNullOrWhiteSpace(addLevelBox->Text) ||
			String::IsNullOrWhiteSpace(addCountTxt->Text)) {
			MessageBox::Show("Не все поля заполнены!", "Повторите ввод", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try {
			passagers v;
			marshal_context^ context = gcnew marshal_context();

			v.phoneNumber = context->marshal_as<std::string>(addNumberTxt->Text->Trim());
			v.fam = context->marshal_as<std::string>(addFamTxt->Text->Trim());
			v.cardNumber = Convert::ToInt32(addCardTxt->Text->Trim());
			v.level = context->marshal_as<std::string>(addLevelBox->Text->Trim());
			v.pointCount = Convert::ToInt32(addCountTxt->Text->Trim());
			if (v.cardNumber <= 0 || v.pointCount < 0) {
				MessageBox::Show("Номер карты должен быть положительным, количество баллов не может быть отрицательным!",
					"Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
				delete context;
				return;
			}

			if (L == nullptr) {
				L = Init_List(v);
			}
			else {
				LIST* q = L;
				while (q->next != nullptr) {
					q = q->next;
				}
				Ins_AfterList(v, L, q);
			}

			Scan_List(L);

			addNumberTxt->Clear();
			addFamTxt->Clear();
			addCardTxt->Clear();
			addLevelBox->SelectedIndex = -1;
			addCountTxt->Clear();

			delete context;
			MessageBox::Show("Пассажир успешно добавлен!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);

		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка при добавлении: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void sortVozrButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (sortBox->SelectedIndex < 0) {
			MessageBox::Show("Выберите поле для сортировки!", "Сортировка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (L == nullptr) {
			MessageBox::Show("Список пуст!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try {
			if (sortBox->SelectedIndex == 0) {
				SortBySurnameAscending(L);
			}
			else if (sortBox->SelectedIndex == 1) {
				SortByPointsAscending(L);
			}

			Scan_List(L);
			MessageBox::Show("Сортировка по возрастанию выполнена!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);

		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка при сортировке: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void sortUbvButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (sortBox->SelectedIndex < 0) {
			MessageBox::Show("Выберите поле для сортировки!", "Сортировка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (L == nullptr) {
			MessageBox::Show("Список пуст!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try {
			if (sortBox->SelectedIndex == 0) {
				SortBySurnameDescending(L);
			}
			else if (sortBox->SelectedIndex == 1) {
				SortByPointsDescending(L);
			}

			Scan_List(L);
			MessageBox::Show("Сортировка по убыванию выполнена!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);

		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка при сортировке: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try {
			// Очищаем существующий список
			if (L != nullptr) {
				while (L != nullptr) {
					L = DelFirst_List(L);
				}
			}

			// Открываем файл для чтения
			std::ifstream f("passagers.txt");

			if (!f.is_open()) {
				MessageBox::Show("Не удалось открыть файл passagers.txt", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			passagers v;
			std::string line;
			int recordCount = 0;
			LIST* lastNode = nullptr;

			// Читаем файл построчно
			while (std::getline(f, line)) {
				// Пропускаем разделители
				if (line.find("---") != std::string::npos) {
					continue;
				}

				// Читаем данные пассажира
				v.phoneNumber = line;

				if (!std::getline(f, v.fam)) break;
				if (!std::getline(f, line)) break;
				v.cardNumber = std::stoi(line);
				if (!std::getline(f, v.level)) break;
				if (!std::getline(f, line)) break;
				v.pointCount = std::stoi(line);

				if (L == nullptr) {
					L = Init_List(v);
					lastNode = L;
				}
				else {
					lastNode = Ins_AfterList(v, L, lastNode);
				}
				recordCount++;
			}

			f.close();

			if (recordCount == 0) {
				MessageBox::Show("Файл пуст или содержит некорректные данные!", "Предупреждение",
					MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else {
				Scan_List(L);
				MessageBox::Show("Загружено записей: " + recordCount.ToString(), "Успех",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		catch (std::exception& ex) {
			MessageBox::Show("Ошибка при загрузке файла: " + gcnew System::String(ex.what()), "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка при загрузке файла: " + ex->Message, "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (L == nullptr) {
			MessageBox::Show("Нет данных для сохранения!", "Предупреждение",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		try {
			SaveListToFile(L, "passagers.txt");
			MessageBox::Show("Данные успешно сохранены в файл passagers.txt!", "Успех",
				MessageBoxButtons::OK, MessageBoxIcon::Information);

		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка при сохранении файла: " + ex->Message, "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
		   // Дополнительная функция для обработки просмотра карты
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(cardNumTxt->Text)) {
			MessageBox::Show("Введите номер карты!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (L == nullptr) {
			MessageBox::Show("Список пуст!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try {
			int cardNum = Convert::ToInt32(cardNumTxt->Text->Trim());
			LIST* q = L;
			bool found = false;

			while (q != nullptr) {
				if (q->element.cardNumber == cardNum) {
					label5->Text = System::Convert::ToString(q->element.pointCount);
					found = true;
					break;
				}
				q = q->next;
			}

			if (!found) {
				MessageBox::Show("Карта с таким номером не найдена!", "Поиск",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				label5->Text = "0";
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка: введите корректный номер карты!", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

		   // Обработчик начисления баллов
	private: System::Void addPointButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(cardNumTxt->Text) ||
			String::IsNullOrWhiteSpace(changePointTxt->Text) ||
			changePointBox->SelectedIndex < 0) {
			MessageBox::Show("Заполните все поля для изменения баллов!", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try {
			int cardNum = Convert::ToInt32(cardNumTxt->Text->Trim());
			int pointChange = Convert::ToInt32(changePointTxt->Text->Trim());

			if (pointChange <= 0) {
				MessageBox::Show("Количество баллов должно быть положительным!", "Ошибка",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			LIST* q = L;
			bool found = false;

			while (q != nullptr) {
				if (q->element.cardNumber == cardNum) {
					if (changePointBox->SelectedIndex == 0)
					{
						q->element.pointCount += pointChange;
					}
					else
					{
						if (q->element.pointCount >= pointChange)
						{
							q->element.pointCount -= pointChange;
						}
						else
						{
							MessageBox::Show("Недостаточно баллов для списания!", "Ошибка",
								MessageBoxButtons::OK, MessageBoxIcon::Error);
							return;
						}
					}

					label5->Text = System::Convert::ToString(q->element.pointCount);
					Scan_List(L);
					found = true;

					MessageBox::Show("Баллы успешно изменены!", "Успех",
						MessageBoxButtons::OK, MessageBoxIcon::Information);
					break;
				}
				q = q->next;
			}

			if (!found)
			{
				MessageBox::Show("Карта с таким номером не найдена!", "Ошибка",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка при изменении баллов: " + ex->Message, "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void changeLevelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(cardNumTxt->Text) || comboBox2->SelectedIndex < 0) {
			MessageBox::Show("Заполните номер карты и выберите новый уровень!", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try {
			int cardNum = Convert::ToInt32(cardNumTxt->Text->Trim());
			marshal_context^ context = gcnew marshal_context();
			std::string newLevel = context->marshal_as<std::string>(comboBox2->Text);

			LIST* q = L;
			bool found = false;

			while (q != nullptr) {
				if (q->element.cardNumber == cardNum) {
					q->element.level = newLevel;
					Scan_List(L);
					found = true;

					MessageBox::Show("Уровень лояльности успешно изменен!", "Успех",
						MessageBoxButtons::OK, MessageBoxIcon::Information);
					break;
				}
				q = q->next;
			}

			if (!found) {
				MessageBox::Show("Карта с таким номером не найдена!", "Ошибка",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			delete context;

		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка при изменении уровня: " + ex->Message, "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
