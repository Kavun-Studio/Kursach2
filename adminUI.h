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
	private: System::Windows::Forms::DataGridView^ cardGrid;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ clearToolStripMenuItem;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
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
			this->fullGrid = (gcnew System::Windows::Forms::DataGridView());
			this->fullPhoneColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fullFamColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fullCardColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fullLevelColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fullPointColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cardGrid = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fullGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cardGrid))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->ChangeData->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->addPassager->SuspendLayout();
			this->Sort->SuspendLayout();
			this->Search->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// fullGrid
			// 
			this->fullGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->fullGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->fullPhoneColumn,
					this->fullFamColumn, this->fullCardColumn, this->fullLevelColumn, this->fullPointColumn
			});
			this->fullGrid->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->fullGrid->Location = System::Drawing::Point(12, 36);
			this->fullGrid->Name = L"fullGrid";
			this->fullGrid->ReadOnly = true;
			this->fullGrid->RowHeadersWidth = 62;
			this->fullGrid->RowTemplate->Height = 28;
			this->fullGrid->Size = System::Drawing::Size(849, 386);
			this->fullGrid->TabIndex = 0;
			// 
			// fullPhoneColumn
			// 
			this->fullPhoneColumn->HeaderText = L"Телефон";
			this->fullPhoneColumn->MinimumWidth = 8;
			this->fullPhoneColumn->Name = L"fullPhoneColumn";
			this->fullPhoneColumn->ReadOnly = true;
			this->fullPhoneColumn->Width = 150;
			// 
			// fullFamColumn
			// 
			this->fullFamColumn->HeaderText = L"Фамилия И О";
			this->fullFamColumn->MinimumWidth = 8;
			this->fullFamColumn->Name = L"fullFamColumn";
			this->fullFamColumn->ReadOnly = true;
			this->fullFamColumn->Width = 150;
			// 
			// fullCardColumn
			// 
			this->fullCardColumn->HeaderText = L"Номер бонусной карты";
			this->fullCardColumn->MinimumWidth = 8;
			this->fullCardColumn->Name = L"fullCardColumn";
			this->fullCardColumn->ReadOnly = true;
			this->fullCardColumn->Width = 150;
			// 
			// fullLevelColumn
			// 
			this->fullLevelColumn->HeaderText = L"Уровень лояльности";
			this->fullLevelColumn->MinimumWidth = 8;
			this->fullLevelColumn->Name = L"fullLevelColumn";
			this->fullLevelColumn->ReadOnly = true;
			this->fullLevelColumn->Width = 150;
			// 
			// fullPointColumn
			// 
			this->fullPointColumn->HeaderText = L"Кол-во баллов";
			this->fullPointColumn->MinimumWidth = 8;
			this->fullPointColumn->Name = L"fullPointColumn";
			this->fullPointColumn->ReadOnly = true;
			this->fullPointColumn->Width = 150;
			// 
			// cardGrid
			// 
			this->cardGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->cardGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column4, this->Column5,
					this->Column6, this->Column9
			});
			this->cardGrid->Location = System::Drawing::Point(517, 61);
			this->cardGrid->Name = L"cardGrid";
			this->cardGrid->RowHeadersWidth = 62;
			this->cardGrid->RowTemplate->Height = 28;
			this->cardGrid->Size = System::Drawing::Size(896, 258);
			this->cardGrid->TabIndex = 22;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Дата";
			this->Column4->MinimumWidth = 8;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Время";
			this->Column5->MinimumWidth = 8;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Тип";
			this->Column6->MinimumWidth = 8;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 150;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Количество";
			this->Column9->MinimumWidth = 8;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 150;
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1462, 36);
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
			this->openToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->openToolStripMenuItem->Text = L"Открыть";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &adminUI::открытьToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->saveToolStripMenuItem->Text = L"Сохранить";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &adminUI::сохранитьToolStripMenuItem_Click);
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->clearToolStripMenuItem->Text = L"Очистить";
			this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &adminUI::clearToolStripMenuItem_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1300, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 25);
			this->label5->TabIndex = 26;
			this->label5->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(1009, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(285, 25);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Количество баллов на карте:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(320, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(191, 38);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Просмотр";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// addPointButton
			// 
			this->addPointButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addPointButton->Location = System::Drawing::Point(300, 79);
			this->addPointButton->Name = L"addPointButton";
			this->addPointButton->Size = System::Drawing::Size(144, 41);
			this->addPointButton->TabIndex = 28;
			this->addPointButton->Text = L"Начислить";
			this->addPointButton->UseVisualStyleBackColor = true;
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
			this->cardNumTxt->Location = System::Drawing::Point(6, 25);
			this->cardNumTxt->Name = L"cardNumTxt";
			this->cardNumTxt->Size = System::Drawing::Size(297, 30);
			this->cardNumTxt->TabIndex = 31;
			this->cardNumTxt->Text = L"Номер карты";
			// 
			// ChangeData
			// 
			this->ChangeData->Controls->Add(this->label5);
			this->ChangeData->Controls->Add(this->groupBox3);
			this->ChangeData->Controls->Add(this->label4);
			this->ChangeData->Controls->Add(this->groupBox2);
			this->ChangeData->Controls->Add(this->cardNumTxt);
			this->ChangeData->Controls->Add(this->button1);
			this->ChangeData->Controls->Add(this->cardGrid);
			this->ChangeData->Location = System::Drawing::Point(12, 634);
			this->ChangeData->Name = L"ChangeData";
			this->ChangeData->Size = System::Drawing::Size(1425, 325);
			this->ChangeData->TabIndex = 32;
			this->ChangeData->TabStop = false;
			this->ChangeData->Text = L"Управление пользователем";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->changeLevelButton);
			this->groupBox3->Controls->Add(this->comboBox2);
			this->groupBox3->Location = System::Drawing::Point(6, 194);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(450, 127);
			this->groupBox3->TabIndex = 33;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Изменить уровень лояльности";
			// 
			// changeLevelButton
			// 
			this->changeLevelButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->changeLevelButton->Location = System::Drawing::Point(300, 79);
			this->changeLevelButton->Name = L"changeLevelButton";
			this->changeLevelButton->Size = System::Drawing::Size(144, 41);
			this->changeLevelButton->TabIndex = 28;
			this->changeLevelButton->Text = L"Изменить";
			this->changeLevelButton->UseVisualStyleBackColor = true;
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
			this->groupBox2->Location = System::Drawing::Point(6, 61);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(450, 127);
			this->groupBox2->TabIndex = 32;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Изменение баллов";
			// 
			// addPassager
			// 
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
			this->addPassager->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addPassager->Location = System::Drawing::Point(881, 36);
			this->addPassager->Name = L"addPassager";
			this->addPassager->Size = System::Drawing::Size(425, 386);
			this->addPassager->TabIndex = 33;
			this->addPassager->TabStop = false;
			this->addPassager->Text = L"Добавить пользователя";
			// 
			// addLevelBox
			// 
			this->addLevelBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addLevelBox->FormattingEnabled = true;
			this->addLevelBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Bronze", L"Silver", L"Gold", L"Brilliand" });
			this->addLevelBox->Location = System::Drawing::Point(196, 191);
			this->addLevelBox->Name = L"addLevelBox";
			this->addLevelBox->Size = System::Drawing::Size(220, 33);
			this->addLevelBox->TabIndex = 31;
			// 
			// addButton
			// 
			this->addButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addButton->Location = System::Drawing::Point(196, 307);
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
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(16, 230);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(174, 22);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Количество баллов";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(8, 191);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(182, 22);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Уровень лояльности";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(69, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 22);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Номер карты";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(102, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 22);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Фамилия";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(37, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 22);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Номер телефона";
			// 
			// addCountTxt
			// 
			this->addCountTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addCountTxt->Location = System::Drawing::Point(196, 230);
			this->addCountTxt->Name = L"addCountTxt";
			this->addCountTxt->Size = System::Drawing::Size(220, 30);
			this->addCountTxt->TabIndex = 4;
			// 
			// addCardTxt
			// 
			this->addCardTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addCardTxt->Location = System::Drawing::Point(196, 155);
			this->addCardTxt->Name = L"addCardTxt";
			this->addCardTxt->Size = System::Drawing::Size(220, 30);
			this->addCardTxt->TabIndex = 2;
			// 
			// addFamTxt
			// 
			this->addFamTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addFamTxt->Location = System::Drawing::Point(196, 119);
			this->addFamTxt->Name = L"addFamTxt";
			this->addFamTxt->Size = System::Drawing::Size(220, 30);
			this->addFamTxt->TabIndex = 1;
			// 
			// addNumberTxt
			// 
			this->addNumberTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addNumberTxt->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->addNumberTxt->Location = System::Drawing::Point(196, 83);
			this->addNumberTxt->Name = L"addNumberTxt";
			this->addNumberTxt->Size = System::Drawing::Size(220, 30);
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
			this->Sort->Controls->Add(this->sortVozrButton);
			this->Sort->Controls->Add(this->sortUbvButton);
			this->Sort->Controls->Add(this->sortBox);
			this->Sort->Location = System::Drawing::Point(12, 428);
			this->Sort->Name = L"Sort";
			this->Sort->Size = System::Drawing::Size(258, 200);
			this->Sort->TabIndex = 37;
			this->Sort->TabStop = false;
			this->Sort->Text = L"Сортировка";
			// 
			// Search
			// 
			this->Search->Controls->Add(this->searchGrid);
			this->Search->Controls->Add(this->searchButton);
			this->Search->Controls->Add(this->searchTxt);
			this->Search->Controls->Add(this->searchBox);
			this->Search->Location = System::Drawing::Point(276, 428);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(1161, 200);
			this->Search->TabIndex = 39;
			this->Search->TabStop = false;
			this->Search->Text = L"Поиск";
			// 
			// searchGrid
			// 
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
			this->searchPhoneColumn->HeaderText = L"Телефон";
			this->searchPhoneColumn->MinimumWidth = 8;
			this->searchPhoneColumn->Name = L"searchPhoneColumn";
			this->searchPhoneColumn->ReadOnly = true;
			this->searchPhoneColumn->Width = 150;
			// 
			// searchFamColumn
			// 
			this->searchFamColumn->HeaderText = L"Фамилия И О";
			this->searchFamColumn->MinimumWidth = 8;
			this->searchFamColumn->Name = L"searchFamColumn";
			this->searchFamColumn->ReadOnly = true;
			this->searchFamColumn->Width = 150;
			// 
			// searchCardColumn
			// 
			this->searchCardColumn->HeaderText = L"Номер бонусной карты";
			this->searchCardColumn->MinimumWidth = 8;
			this->searchCardColumn->Name = L"searchCardColumn";
			this->searchCardColumn->ReadOnly = true;
			this->searchCardColumn->Width = 150;
			// 
			// searchLevelColumn
			// 
			this->searchLevelColumn->HeaderText = L"Уровень лояльности";
			this->searchLevelColumn->MinimumWidth = 8;
			this->searchLevelColumn->Name = L"searchLevelColumn";
			this->searchLevelColumn->ReadOnly = true;
			this->searchLevelColumn->Width = 150;
			// 
			// searchPointColumn
			// 
			this->searchPointColumn->HeaderText = L"Кол-во баллов";
			this->searchPointColumn->MinimumWidth = 8;
			this->searchPointColumn->Name = L"searchPointColumn";
			this->searchPointColumn->ReadOnly = true;
			this->searchPointColumn->Width = 150;
			// 
			// searchButton
			// 
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
			// adminUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1462, 1022);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cardGrid))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ChangeData->ResumeLayout(false);
			this->ChangeData->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->addPassager->ResumeLayout(false);
			this->addPassager->PerformLayout();
			this->Sort->ResumeLayout(false);
			this->Search->ResumeLayout(false);
			this->Search->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchGrid))->EndInit();
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
		for (int i = 0; i < n; i++)
		{
			fullGrid->Rows->Add();
			fullGrid->Rows[i]->Cells[0]->Value = marshal_as<String^>(a[i].phoneNumber);
			fullGrid->Rows[i]->Cells[1]->Value = marshal_as<String^>(a[i].fam);
			fullGrid->Rows[i]->Cells[2]->Value = System::Convert::ToString(a[i].cardNumber);
			fullGrid->Rows[i]->Cells[2]->Value = marshal_as<String^>(a[i].level);
			fullGrid->Rows[i]->Cells[2]->Value = System::Convert::ToString(a[i].pointCount);
		}
	}
	private: System::Void adminUI_Activated(System::Object^ sender, System::EventArgs^ e)
	{
		this->fullPhoneColumn->HeaderText = "Номер телефона";
		this->fullFamColumn->HeaderText = "Фамилия И. О.";
		this->fullCardColumn->HeaderText = "Номер карты";
		this->fullLevelColumn->HeaderText = "Уровень";
		this->fullPointColumn->HeaderText = "Количство баллов";
		this->searchPhoneColumn->HeaderText = "Номер телефона";
		this->searchFamColumn->HeaderText = "Фамилия И. О.";
		this->searchCardColumn->HeaderText = "Номер карты";
		this->searchLevelColumn->HeaderText = "Уровень";
		this->searchPointColumn->HeaderText = "Количство баллов";
	}
	private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (searchTxt->Text == "")
		{
			MessageBox::Show("Введите данные для поиска!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		String^ searchValue = searchTxt->Text;
		int searchIndex = searchBox->SelectedIndex;
		if (searchIndex < 0)
		{
			MessageBox::Show("Выберите поле для поиска!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		searchGrid->Rows->Clear();
		LIST* q = L;
		int i = 0;
		while (q != nullptr)
		{
			bool match = false;
			switch (searchIndex)
			{
			case 0: // Телефон
				match = (marshal_as<String^>(q->element.phoneNumber) == searchValue);
				break;
			case 1: // Фамилия И. О.
				match = (marshal_as<String^>(q->element.fam) == searchValue);
				break;
			case 2: // Номер бонусной карты
				match = (System::Convert::ToString(q->element.cardNumber) == searchValue);
				break;
			case 3: // Уровень лояльности
				match = (marshal_as<String^>(q->element.level) == searchValue);
				break;
			}
			if (match)
			{
				searchGrid->Rows->Add();
				searchGrid->Rows[i]->Cells[0]->Value = marshal_as<String^>(q->element.phoneNumber);
				searchGrid->Rows[i]->Cells[1]->Value = marshal_as<String^>(q->element.fam);
				searchGrid->Rows[i]->Cells[2]->Value = System::Convert::ToString(q->element.cardNumber);
				searchGrid->Rows[i]->Cells[3]->Value = marshal_as<String^>(q->element.level);
				searchGrid->Rows[i]->Cells[4]->Value = System::Convert::ToString(q->element.pointCount);
				i++;
			}
			q = q->next;
		}
		if (i == 0)
		{
			MessageBox::Show("Ничего не найдено!", "Поиск", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	private: System::Void clearToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		fullGrid->Rows->Clear();
	}
	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (addNumberTxt->Text == "" || addCardTxt->Text == "" || addFamTxt->Text == "" || addLevelBox->Text == "" || addCountTxt->Text == "")
		{
			MessageBox::Show("Не все поля заполены", "Повторите ввод", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else
		{
			passagers v;
			int n = 0;
			LIST* q;
			q = L; //вставка после головы
			marshal_context^ context = gcnew marshal_context();//!!!!!
			v.phoneNumber = context->marshal_as<std::string>(addNumberTxt->Text->ToString());
			v.fam = context->marshal_as<std::string>(addFamTxt->Text->ToString());
			v.cardNumber = Convert::ToInt32(addCardTxt->Text);
			v.level = context->marshal_as<std::string>(addLevelBox->Text->ToString());
			v.pointCount = Convert::ToInt32(addCountTxt->Text);
			q = Ins_AfterList(v, L, q);

			Scan_List(L);
			addNumberTxt->Text = "";
			addFamTxt->Text = "";
			addCardTxt->Text = "";
			addLevelBox->Text = "";
			addCountTxt->Text = "";
		}
	}
	private: System::Void sortVozrButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (sortBox->SelectedIndex < -1)
		{
			MessageBox::Show("Выберите поле для сортировки!", "Сортировка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (sortBox->SelectedIndex == 0) SortBySurnameAscending(L);
		if (sortBox->SelectedIndex == 1) SortByPointsAscending(L);
		Scan_List(L);
	}
	private: System::Void sortUbvButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (sortBox->SelectedIndex < -1)
		{
			MessageBox::Show("Выберите поле для сортировки!", "Сортировка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (sortBox->SelectedIndex == 0) SortBySurnameDescending(L);
		if (sortBox->SelectedIndex == 1) SortByPointsDescending(L);
		Scan_List(L);
	}
	private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (L != nullptr) {
			while (L != nullptr) {
				L = DelFirst_List(L);  // Удаляем элементы с начала списка
			}
		}

		// Чтение данных из файла и создание нового списка
		passagers v;
		ifstream f("FileName.txt");

		if (!f.is_open())
		{
			// Обработка ошибки открытия файла
			MessageBox::Show("Ошибка при открытии файла", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Чтение первой записи
		string phoneNumber, fam, level;
		int cardNumber, pointCount;
		if (f >> phoneNumber >> fam >> cardNumber >> level >> pointCount) {
			v.phoneNumber = phoneNumber;
			v.fam = fam;
			v.cardNumber = cardNumber;
			v.level = level;
			v.pointCount = pointCount;
			L = Init_List(v);  // Создаем первый элемент списка
			LIST* q = L;       // Указатель на последний элемент

			// Чтение остальных записей
			while (f >> phoneNumber >> fam >> cardNumber >> level >> pointCount) {
				v.phoneNumber = phoneNumber;
				v.fam = fam;
				v.cardNumber = cardNumber;
				v.level = level;
				v.pointCount = pointCount;
				q = Ins_AfterList(v, L, q);  // Добавляем элементы в конец списка
			}
		}
		else {
			// Файл пустой или содержит некорректные данные
			L = nullptr;
		}

		f.close();
		Scan_List(L);  // Обновление отображения списка в интерфейсе
	}
	private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SaveListToFile(L, "passagers.txt");
	}
	};
}
