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

void savest(student* a, int n);
void sort11(student* a, int n);
//void sort12(student* a, int n);
//void sort21(student* a, int n);
//void sort22(student* a, int n);

#endif fun_h