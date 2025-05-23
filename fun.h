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

LIST* Init_List(student x);
LIST* InsFirst_List(student x, LIST* L);
LIST* InsAfter_List(student x, LIST* L, LIST* p);
LIST* DelFirst_List(LIST* L);
LIST* Del_List(LIST* p, LIST* L);
LIST* Find_List_Range(student x, LIST* L);

void savest(LIST* L);
void sort_fam_1(LIST* L);
void sort_age_1(LIST* L);
void sort_fam_2(LIST* L);
void sort_age_2(LIST* L);
#endif fun_h