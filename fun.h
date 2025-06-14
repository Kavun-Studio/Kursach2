/*
{*****************************}
{ ������ fun.h             }
{ ��. �23                     }
{ �����������: �������� �.�    }
{ �������������: 12 ���� 2025 }
{-----------------------------}
{ ������ ���������� �������   }
{*****************************}
*/

#ifndef FUN_H
#define FUN_H
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <msclr/marshal_cppstd.h>
using namespace std;

// ��������� ��� �������� ������ � ���������
struct passagers
{
    string phoneNumber;   // ����� �������� ���������
    string fam;           // ������� ���������
    int cardNumber;       // ����� ����� ����������
    string level;         // ������� ����������
    int pointCount;       // ���������� �������� ������
};

// ��������� ��� ������������� ���� ������������ ������ ����������
struct LIST
{
    passagers element;    // ������ � ���������
    LIST* next;           // ��������� �� ��������� ���� ������
};

// ��������� ��� �������� ���������� �� ������ ����������
struct LoyaltyLevel
{
    std::string levelName; // �������� ������ ����������
    int bonus;             // �����, ��������� � �������
};

// ��������� ��� ������������� ���� ������������ ������ ������� ����������
struct LoyaltyNode
{
    LoyaltyLevel data;     // ������ �� ������ ����������
    LoyaltyNode* next;     // ��������� �� ��������� ���� ������
};

// ������������� ������: ������ ������ ���� ������ � ������� ���������
LIST* Init_List(passagers x);

// ������� � ������ ������: ��������� ����� ���� � ������� ��������� � ������ ������
LIST* Ins_FirstList(passagers x, LIST* L);

// ������� ����� ��������: ��������� ����� ���� � ������� ��������� ����� ���������� ���� p
LIST* Ins_AfterList(passagers x, LIST* L, LIST* p);

// �������� ������� ��������: ������� ������ ���� �� ������ � ����������� ������
LIST* DelFirst_List(LIST* L);

// �������� ����������� ��������: ������� ��������� ���� p �� ������ � ����������� ������
LIST* Del_List(LIST* L, LIST* p);

// ����� �� �������: ���������� ��������� �� ���� � �������� �������� ���������
LIST* Find_BySurname(const string& surname, LIST* L);

// ���������� ������ � ����: ���������� ������ ���� ����� ������ � ��������� ����
void SaveListToFile(LIST* L, const string& filename);

// ���������� �� ������� (�� �����������): ��������� ������ �� ������� � ���������� �������
LIST* SortBySurnameAscending(LIST* L);

// ���������� �� ���������� ������ (�� �����������): ��������� ������ �� ����������� �������� ������
LIST* SortByPointsAscending(LIST* L);

// ���������� �� ������� (�� ��������): ��������� ������ �� ������� � �������� ���������� �������
LIST* SortBySurnameDescending(LIST* L);

// ���������� �� ���������� ������ (�� ��������): ��������� ������ �� �������� �������� ������
LIST* SortByPointsDescending(LIST* L);

// ������� ���� ������: ����������� ������, ������� ����� ������ ������ ����������
void FreeList(LIST* L);

// ������������� ������ ����������: ������ ������ ���� ������ � ������� ������ ����������
LoyaltyNode* Init_LoyaltyList(LoyaltyLevel x);

// ������� ������ ������: ��������� ����� ������� ���������� � ����� ������
LoyaltyNode* Ins_LoyaltyList(LoyaltyLevel x, LoyaltyNode* list);

// ����� ������ �� �����: ���������� ��������� �� ���� � �������� ��������� ������ ����������
LoyaltyNode* Find_LoyaltyLevel(const std::string& levelName, LoyaltyNode* list);

// ������������ ������: ����������� ������, ������� ����� ������ ������ ������� ����������
void FreeLoyaltyList(LoyaltyNode* list);

#endif // FUN_H