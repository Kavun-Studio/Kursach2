#ifndef fun_h
#define fun_h

#include <string>
#include <ctime>
#include <stdlib.h>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <msclr\marshal.h>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
using namespace msclr::interop;
using namespace System::Data::OleDb;

struct student
{
    string fam;
    string im;
    int age;
};

struct LIST
{
    student element;
    LIST* next;
    LIST* previos;
};

static student x;
static LIST* L;
static int n;

// Инициализация списка
LIST* Init_List(student x);

// Вставка элемента в список
LIST* Ins_FirstList(student x, LIST* L);

LIST* Ins_AfterList(student x, LIST* L, LIST* p);

// Удаление первого элемента
LIST* DelFirst_List(LIST* L);

// Удаление конкретного элемента
LIST* Del_List(LIST* L, LIST* p);

// Поиск по направлению обучения
LIST* Find_List_Range(student x, LIST* L);

void savest(LIST* L);

void sort_fam_1(LIST* L);

void sort_age_1(LIST* L);

void sort_fam_2(LIST* L);

void sort_age_2(LIST* L);

#endif fun_h