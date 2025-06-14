/*
{*****************************}
{ Модуль operatorUI.h      }
{ гр. П23                     }
{ Разработчик: Самусёнок А.С    }
{ Модифицирован: 13 июня 2025 }
{-----------------------------}
{ Модуль окна оператора  }
{*****************************}
*/

#pragma once
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


	/// <summary>
	/// Сводка для operatorUI
	/// </summary>
	public ref class operatorUI : public System::Windows::Forms::Form
	{
	public:
		operatorUI(void)
		{
			InitializeComponent();
			LoadLoyaltyLevelsFromFile("loyalty_levels.txt");
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~operatorUI()
		{
			if (components)
			{
				delete components;
			}
			FreeLoyaltyList(loyaltyList);
			// Освобождаем список пассажиров
			while (L != nullptr) {
				L = DelFirst_List(L);
			}
			// Завершаем процесс
			System::Environment::Exit(0);
		}

	private: LoyaltyNode* loyaltyList = nullptr;
	private: LIST* L = nullptr;
	private: System::Windows::Forms::GroupBox^ Search;
	protected:
	private: System::Windows::Forms::DataGridView^ searchGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ searchPhoneColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ searchFamColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ searchCardColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ searchLevelColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ searchPointColumn;
	private: System::Windows::Forms::Button^ searchButton;
	private: System::Windows::Forms::TextBox^ searchTxt;
	private: System::Windows::Forms::ComboBox^ searchBox;
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
	private: System::Windows::Forms::GroupBox^ ChangeData;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ addPointButton;
	private: System::Windows::Forms::ComboBox^ changePointBox;
	private: System::Windows::Forms::TextBox^ changePointTxt;
	private: System::Windows::Forms::TextBox^ cardNumTxt;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;

	private: System::Windows::Forms::DataGridView^ fullGrid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fullPhoneColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fullFamColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fullCardColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fullLevelColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fullPointColumn;

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
			this->fullGrid = (gcnew System::Windows::Forms::DataGridView());
			this->fullPhoneColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fullFamColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fullCardColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fullLevelColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fullPointColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->ChangeData = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->addPointButton = (gcnew System::Windows::Forms::Button());
			this->changePointBox = (gcnew System::Windows::Forms::ComboBox());
			this->changePointTxt = (gcnew System::Windows::Forms::TextBox());
			this->cardNumTxt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Search->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fullGrid))->BeginInit();
			this->addPassager->SuspendLayout();
			this->ChangeData->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
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
			this->Search->Location = System::Drawing::Point(12, 537);
			this->Search->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Search->Name = L"Search";
			this->Search->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Search->Size = System::Drawing::Size(1154, 296);
			this->Search->TabIndex = 42;
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
			this->searchGrid->Location = System::Drawing::Point(6, 95);
			this->searchGrid->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->searchGrid->Name = L"searchGrid";
			this->searchGrid->ReadOnly = true;
			this->searchGrid->RowHeadersWidth = 62;
			this->searchGrid->RowTemplate->Height = 28;
			this->searchGrid->Size = System::Drawing::Size(1141, 169);
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
			this->searchButton->Location = System::Drawing::Point(567, 40);
			this->searchButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(248, 40);
			this->searchButton->TabIndex = 37;
			this->searchButton->Text = L"Поиск";
			this->searchButton->UseVisualStyleBackColor = true;
			this->searchButton->Click += gcnew System::EventHandler(this, &operatorUI::searchButton_Click);
			// 
			// searchTxt
			// 
			this->searchTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->searchTxt->Location = System::Drawing::Point(279, 40);
			this->searchTxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->searchBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->searchBox->Name = L"searchBox";
			this->searchBox->Size = System::Drawing::Size(247, 33);
			this->searchBox->TabIndex = 35;
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
			this->fullGrid->Location = System::Drawing::Point(794, 440);
			this->fullGrid->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->fullGrid->Name = L"fullGrid";
			this->fullGrid->ReadOnly = true;
			this->fullGrid->RowHeadersWidth = 62;
			this->fullGrid->RowTemplate->Height = 28;
			this->fullGrid->Size = System::Drawing::Size(162, 106);
			this->fullGrid->TabIndex = 44;
			this->fullGrid->Visible = false;
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
			this->addPassager->Location = System::Drawing::Point(619, 49);
			this->addPassager->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addPassager->Name = L"addPassager";
			this->addPassager->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addPassager->Size = System::Drawing::Size(547, 432);
			this->addPassager->TabIndex = 41;
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
			this->addLevelBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->addButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(220, 51);
			this->addButton->TabIndex = 29;
			this->addButton->Text = L"Добавить";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &operatorUI::addButton_Click);
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
			this->addCountTxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addCountTxt->Name = L"addCountTxt";
			this->addCountTxt->Size = System::Drawing::Size(220, 34);
			this->addCountTxt->TabIndex = 4;
			// 
			// addCardTxt
			// 
			this->addCardTxt->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addCardTxt->Location = System::Drawing::Point(320, 160);
			this->addCardTxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addCardTxt->Name = L"addCardTxt";
			this->addCardTxt->Size = System::Drawing::Size(220, 34);
			this->addCardTxt->TabIndex = 2;
			// 
			// addFamTxt
			// 
			this->addFamTxt->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addFamTxt->Location = System::Drawing::Point(320, 120);
			this->addFamTxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->addNumberTxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addNumberTxt->Name = L"addNumberTxt";
			this->addNumberTxt->Size = System::Drawing::Size(220, 34);
			this->addNumberTxt->TabIndex = 0;
			// 
			// ChangeData
			// 
			this->ChangeData->AutoSize = true;
			this->ChangeData->Controls->Add(this->label5);
			this->ChangeData->Controls->Add(this->label4);
			this->ChangeData->Controls->Add(this->groupBox2);
			this->ChangeData->Controls->Add(this->cardNumTxt);
			this->ChangeData->Controls->Add(this->button1);
			this->ChangeData->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ChangeData->Location = System::Drawing::Point(12, 49);
			this->ChangeData->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ChangeData->Name = L"ChangeData";
			this->ChangeData->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ChangeData->Size = System::Drawing::Size(548, 432);
			this->ChangeData->TabIndex = 40;
			this->ChangeData->TabStop = false;
			this->ChangeData->Text = L"Управление пользователем";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(430, 119);
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
			this->label4->Location = System::Drawing::Point(7, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(392, 31);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Количество баллов на карте:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->addPointButton);
			this->groupBox2->Controls->Add(this->changePointBox);
			this->groupBox2->Controls->Add(this->changePointTxt);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(7, 239);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(450, 128);
			this->groupBox2->TabIndex = 32;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Изменение баллов";
			// 
			// addPointButton
			// 
			this->addPointButton->AutoSize = true;
			this->addPointButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addPointButton->Location = System::Drawing::Point(300, 79);
			this->addPointButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->addPointButton->Name = L"addPointButton";
			this->addPointButton->Size = System::Drawing::Size(144, 41);
			this->addPointButton->TabIndex = 28;
			this->addPointButton->Text = L"Начислить";
			this->addPointButton->UseVisualStyleBackColor = true;
			this->addPointButton->Click += gcnew System::EventHandler(this, &operatorUI::addPointButton_Click);
			// 
			// changePointBox
			// 
			this->changePointBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->changePointBox->FormattingEnabled = true;
			this->changePointBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Добавить", L"Убавить" });
			this->changePointBox->Location = System::Drawing::Point(6, 40);
			this->changePointBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->changePointBox->Name = L"changePointBox";
			this->changePointBox->Size = System::Drawing::Size(191, 33);
			this->changePointBox->TabIndex = 30;
			// 
			// changePointTxt
			// 
			this->changePointTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->changePointTxt->Location = System::Drawing::Point(202, 42);
			this->changePointTxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->changePointTxt->Name = L"changePointTxt";
			this->changePointTxt->Size = System::Drawing::Size(100, 30);
			this->changePointTxt->TabIndex = 29;
			// 
			// cardNumTxt
			// 
			this->cardNumTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cardNumTxt->Location = System::Drawing::Point(12, 44);
			this->cardNumTxt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cardNumTxt->Name = L"cardNumTxt";
			this->cardNumTxt->Size = System::Drawing::Size(296, 30);
			this->cardNumTxt->TabIndex = 31;
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->Location = System::Drawing::Point(338, 42);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(191, 45);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Применить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &operatorUI::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1178, 33);
			this->menuStrip1->TabIndex = 43;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->openToolStripMenuItem,
					this->saveToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(69, 29);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(200, 34);
			this->openToolStripMenuItem->Text = L"Открыть";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &operatorUI::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(200, 34);
			this->saveToolStripMenuItem->Text = L"Сохранить";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &operatorUI::saveToolStripMenuItem_Click);
			// 
			// operatorUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1178, 844);
			this->Controls->Add(this->fullGrid);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->Search);
			this->Controls->Add(this->addPassager);
			this->Controls->Add(this->ChangeData);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"operatorUI";
			this->Text = L"Оператор";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &operatorUI::operatorUI_FormClosing);
			this->Search->ResumeLayout(false);
			this->Search->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->searchGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fullGrid))->EndInit();
			this->addPassager->ResumeLayout(false);
			this->addPassager->PerformLayout();
			this->ChangeData->ResumeLayout(false);
			this->ChangeData->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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

	private: void LoadLoyaltyLevelsFromFile(String^ filename) {
		ifstream file(msclr::interop::marshal_as<std::string>(filename));
		if (file.is_open()) {
			FreeLoyaltyList(loyaltyList);
			loyaltyList = nullptr;
			string line;
			while (getline(file, line)) {
				stringstream ss(line);
				string name;
				int bonus;
				getline(ss, name, ',');
				ss >> bonus;
				LoyaltyLevel level{ name, bonus };
				if (!loyaltyList) {
					loyaltyList = Init_LoyaltyList(level);
				}
				else {
					loyaltyList = Ins_LoyaltyList(level, loyaltyList);
				}
			}
			file.close();
		}
	}

	private: System::Void operatorUI_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (L != nullptr) {
				while (L != nullptr) {
					L = DelFirst_List(L);
				}
			}

			std::ifstream f("passagers.txt");
			if (!f.is_open()) {
				MessageBox::Show("Не удалось открыть файл passagers.txt", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			passagers v;
			std::string line;
			int recordCount = 0;
			LIST* lastNode = nullptr;

			while (std::getline(f, line)) {
				if (line.find("---") != std::string::npos) {
					continue;
				}

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

	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
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

	private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
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
					int bonus = 0;
					LoyaltyNode* loyaltyNode = Find_LoyaltyLevel(q->element.level, loyaltyList);
					if (loyaltyNode) {
						bonus = loyaltyNode->data.bonus;
					}

					if (changePointBox->SelectedIndex == 0) {
						q->element.pointCount += pointChange + bonus;
					}
					else {
						if (q->element.pointCount >= pointChange) {
							q->element.pointCount -= pointChange;
						}
						else {
							MessageBox::Show("Недостаточно баллов для списания!", "Ошибка",
								MessageBoxButtons::OK, MessageBoxIcon::Error);
							return;
						}
					}

					label5->Text = System::Convert::ToString(q->element.pointCount);
					found = true;

					MessageBox::Show("Баллы успешно изменены!", "Успех",
						MessageBoxButtons::OK, MessageBoxIcon::Information);

					// Автоматическое обновление searchGrid, если заданы критерии поиска
					if (!String::IsNullOrEmpty(searchTxt->Text) && searchBox->SelectedIndex >= 0) {
						searchButton_Click(sender, e);
					}

					break;

				}
				q = q->next;
			}

			if (!found) {
				MessageBox::Show("Карта с таким номером не найдена!", "Ошибка",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка при изменении баллов: " + ex->Message, "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
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
	private: System::Void operatorUI_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
	{
		if (L != nullptr) {
			// Показываем диалог с вопросом о сохранении
			System::Windows::Forms::DialogResult result = MessageBox::Show(
				"У вас есть несохраненные данные. Хотите сохранить их перед выходом?",
				"Сохранение данных",
				MessageBoxButtons::YesNoCancel,
				MessageBoxIcon::Question
			);

			if (result == System::Windows::Forms::DialogResult::Yes) {
				// Пользователь хочет сохранить
				try {
					SaveListToFile(L, "passagers.txt");

					MessageBox::Show("Данные успешно сохранены!", "Сохранение",
						MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (Exception^ ex) {
					MessageBox::Show("Ошибка при сохранении: " + ex->Message, "Ошибка",
						MessageBoxButtons::OK, MessageBoxIcon::Error);

					// Спрашиваем, хочет ли пользователь выйти без сохранения
					System::Windows::Forms::DialogResult exitResult = MessageBox::Show(
						"Не удалось сохранить данные. Выйти без сохранения?",
						"Ошибка сохранения",
						MessageBoxButtons::YesNo,
						MessageBoxIcon::Warning
					);

					if (exitResult == System::Windows::Forms::DialogResult::No) {
						e->Cancel = true; // Отменяем закрытие формы
					}
				}
			}
			else if (result == System::Windows::Forms::DialogResult::Cancel) {
				// Пользователь отменил закрытие
				e->Cancel = true;
			}
			// Если выбрано "No", то просто закрываем без сохранения
		}

		// Если данных нет (L == nullptr), форма закроется без вопросов
	}
	};
}
