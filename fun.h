#ifndef FUN_H
#define FUN_H
#include <string>
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

struct passagers {
    string phoneNumber;
    string fam;
    int cardNumber;
    string level;
    int pointCount;
};

struct LIST {
    passagers element;
    LIST* next;
};

// ������������� ������ (�������� ������� ��������)
LIST* Init_List(passagers x);

// ������� � ������ ������
LIST* Ins_FirstList(passagers x, LIST* L);

// ������� ����� �������� p
LIST* Ins_AfterList(passagers x, LIST* L, LIST* p);

// �������� ������� ��������
LIST* DelFirst_List(LIST* L);

// �������� ����������� �������� p
LIST* Del_List(LIST* L, LIST* p);

// ����� �� �������
LIST* Find_BySurname(const string& surname, LIST* L);

// ���������� ������ � ����
void SaveListToFile(LIST* L, const string& filename);

// ���������� �� ������� (�� �����������)
LIST* SortBySurnameAscending(LIST* L);

// ���������� �� ���������� ������ (�� �����������)
LIST* SortByPointsAscending(LIST* L);

// ���������� �� ������� (�� ��������)
LIST* SortBySurnameDescending(LIST* L);

// ���������� �� ���������� ������ (�� ��������)
LIST* SortByPointsDescending(LIST* L);

// ������� ���� ������
void FreeList(LIST* L);

#endif // FUN_H