/*
{****************************}
{ ������ fun.cpp            }
{ ��. �23                    }
{ �����������: �������� �.�   }
{ �������������: 12 ���� 2025}
{----------------------------}
{ ������ �������             }
{****************************}
*/

#include "fun.h"

// ������������� ������: ������ ������ ������� ������ � ������� ���������
LIST* Init_List(passagers x)
{
	LIST* lst = new LIST;
	lst->element = x;
	lst->next = nullptr;
	return lst;
}

// ������� � ������ ������: ��������� ����� ������� � ������� ��������� � ������ ������
LIST* Ins_FirstList(passagers x, LIST* L)
{
	LIST* temp = new LIST;
	temp->element = x;
	temp->next = L;
	return temp;
}

// ������� ����� ��������: ��������� ����� ������� � ������� ��������� ����� ���������� �������� p
LIST* Ins_AfterList(passagers x, LIST* L, LIST* p)
{
	if (!p) return L;
	LIST* q = new LIST;
	q->element = x;
	q->next = p->next;
	p->next = q;
	return L;
}

// �������� ������� ��������: ������� ������ ������� �� ������ � ����������� ������
LIST* DelFirst_List(LIST* L)
{
	if (!L) return nullptr;
	LIST* temp = L;
	L = L->next;
	delete temp;
	return L;
}

// �������� ����������� ��������: ������� ��������� ������� p �� ������ � ����������� ������
LIST* Del_List(LIST* L, LIST* p)
{
	if (!L || !p) return L;

	if (L == p)
	{
		return DelFirst_List(L);
	}

	LIST* prev = L;
	while (prev->next && prev->next != p)
	{
		prev = prev->next;
	}

	if (prev->next == p)
	{
		prev->next = p->next;
		delete p;
	}
	return L;
}

// ����� �� �������: ������� ������� ������ �� �������� ������� ���������
LIST* Find_BySurname(const string& surname, LIST* L)
{
	LIST* q = L;
	while (q != nullptr)
	{
		if (q->element.fam == surname) return q;
		q = q->next;
	}
	return nullptr;
}

// ���������� ������ � ����: ���������� ������ ���� ��������� ������ � ��������� ����
void SaveListToFile(LIST* L, const string& filename)
{
	ofstream file(filename);
	if (!file.is_open())
	{
		cerr << "������ ��� �������� �����: " << filename << endl;
		return;
	}

	LIST* q = L;
	while (q != nullptr)
	{
		file << q->element.phoneNumber << '\n';
		file << q->element.fam << '\n';
		file << q->element.cardNumber << '\n';
		file << q->element.level << '\n';
		file << q->element.pointCount << '\n';
		file << "---" << '\n';
		q = q->next;
	}
	file.close();
}

// ���������� �� ������� (�� �����������): ��������� ������ ������� �������� �� ������� � ���������� �������
LIST* SortBySurnameAscending(LIST* L)
{
	if (!L) return L;

	bool swapped;
	do
	{
		swapped = false;
		LIST* p = L;
		while (p->next)
		{
			if (p->element.fam > p->next->element.fam)
			{
				passagers temp = p->element;
				p->element = p->next->element;
				p->next->element = temp;
				swapped = true;
			}
			p = p->next;
		}
	} while (swapped);
	return L;
}

// ���������� �� ���������� ������ (�� �����������): ��������� ������ ������� �������� �� ���������� ������
LIST* SortByPointsAscending(LIST* L)
{
	if (!L) return L;

	bool swapped;
	do
	{
		swapped = false;
		LIST* p = L;
		while (p->next)
		{
			if (p->element.pointCount > p->next->element.pointCount)
			{
				passagers temp = p->element;
				p->element = p->next->element;
				p->next->element = temp;
				swapped = true;
			}
			p = p->next;
		}
	} while (swapped);
	return L;
}

// ���������� �� ������� (�� ��������): ��������� ������ ������� �������� �� ������� � �������� ���������� �������
LIST* SortBySurnameDescending(LIST* L)
{
	if (!L) return L;

	bool swapped;
	do
	{
		swapped = false;
		LIST* p = L;
		while (p->next)
		{
			if (p->element.fam < p->next->element.fam)
			{
				passagers temp = p->element;
				p->element = p->next->element;
				p->next->element = temp;
				swapped = true;
			}
			p = p->next;
		}
	} while (swapped);
	return L;
}

// ���������� �� ���������� ������ (�� ��������): ��������� ������ ������� �������� �� �������� ���������� ������
LIST* SortByPointsDescending(LIST* L)
{
	if (!L) return L;

	bool swapped;
	do
	{
		swapped = false;
		LIST* p = L;
		while (p->next)
		{
			if (p->element.pointCount < p->next->element.pointCount)
			{
				passagers temp = p->element;
				p->element = p->next->element;
				p->next->element = temp;
				swapped = true;
			}
			p = p->next;
		}
	} while (swapped);
	return L;
}

// ������������ ������: ������� ��� �������� ������ � ����������� ���������� ������
void FreeList(LIST* L)
{
	while (L)
	{
		LIST* temp = L;
		L = L->next;
		delete temp;
	}
}

// ������������� ������ ����������: ������ ������ ���� ������ � ������� ������ ����������
LoyaltyNode* Init_LoyaltyList(LoyaltyLevel x)
{
	LoyaltyNode* node = new LoyaltyNode;
	node->data = x;
	node->next = nullptr;
	return node;
}

// ������� ������ ����������: ��������� ����� ������� ���������� � ����� ������
LoyaltyNode* Ins_LoyaltyList(LoyaltyLevel x, LoyaltyNode* list)
{
	LoyaltyNode* newNode = new LoyaltyNode;
	newNode->data = x;
	newNode->next = nullptr;
	if (!list)
	{
		return newNode;
	}
	LoyaltyNode* current = list;
	while (current->next)
	{
		current = current->next;
	}
	current->next = newNode;
	return list;
}

// ����� ������ ����������: ������� ���� ������ �� �������� ������ ����������
LoyaltyNode* Find_LoyaltyLevel(const std::string& levelName, LoyaltyNode* list)
{
	LoyaltyNode* current = list;
	while (current)
	{
		if (current->data.levelName == levelName)
		{
			return current;
		}
		current = current->next;
	}
	return nullptr;
}

// ������������ ������ ������ ����������: ������� ��� ���� ������ ���������� � ����������� ������
void FreeLoyaltyList(LoyaltyNode* list)
{
	while (list)
	{
		LoyaltyNode* temp = list;
		list = list->next;
		delete temp;
	}
}