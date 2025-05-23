#include "fun.h"

// ������������� ��������� ���������������� ������
LIST* Init_list(student x) 
{
	LIST* lst;
	lst = new LIST;
	lst->element = x;
	lst->next = NULL;
	lst->previos = NULL;
	return lst;
}

// ������� ������� �������� � ������ ���������������� ������
LIST* InsFirst_List(student x, LIST* L) 
{
	LIST* temp;
	temp = new LIST;
	temp->element = x;
	temp->previos = NULL;
	if (L == NULL)
	{
		temp->next = NULL;
	}
	else 
	{
		temp->next = L;
		L->previos = temp;
	}
	L = temp;
	return L;
}

// ������� �������� � �������� ��������������� ������ ������ �� ��������, �� ������� ��������� p
LIST* InsAfter_List(student x, LIST* L, LIST* p) 
{
	LIST* q;
	q = new LIST;
	q->element = x;
	if (p->next != NULL) 
	{
		p->next->previos = q;
	}
	q->next = p->next;
	p->next = q;
	q->previos = p;
	return q;
}

// �������� ������� �������� �� ���������������� ������
LIST* DelFirst_List(LIST* L) 
{
	LIST* q;
	if (L != NULL) 
	{  // �������� ������������ �������� ���������
		q = L;
		L = L->next;
		delete q;
		if (L != NULL)
		{
			L->previos = NULL;  // ���������� ��������� previous ������ ������� ��������
		}
	}
	return L;
}

// �������� �� ������� �������� �� ���������������� ������
LIST* Del_List(LIST* p, LIST* L) 
{
	LIST* q;
	if (p != NULL) {  // �������� ������������ �������� ���������
		if (p->next == NULL) {  // �������� ���������� ��������
			p->previos->next = NULL;
			delete p;
			p = L;
		}
		else 
		{  // �������� ��������, ������� �� �������� �� ������, �� ���������
			q = p->next;
			p->previos->next = q;
			q->previos = p->previos;
			delete p;
			p = q;
		}
	}
	return p;
}

void savest(student* a, int n)
{
	std::ofstream f("FileName.txt");
	if (!f.is_open())
	{
		MessageBox::Show("������ ��� �������� �����", "����", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// ������ ������ � ����
	LIST* q = L;
	while (q != nullptr) 
	{
		f << q->element.fam << '\n';
		f << q->element.im << '\n';
		f << q->element.age << '\n';
		q = q->next;
	}
	f.close();
}

LIST* Find_List_Range(student x, LIST* L)
{
	LIST* q = nullptr;
	LIST* p = nullptr;

	if (L != nullptr) {
		q = L;
		while (q != nullptr && q->element.fam != x.fam)
		{
			q = q->next;
		}
		if (q != nullptr) {
			p = q;
		}
	}
	return p;
}

// ���������� ������ �� ������� (� ���������� �������)
void sort_fam_1(LIST* L) 
{
	if (L == nullptr || L->next == nullptr) return;  // �������� �� ������ ������ ��� ������ �� ������ ��������

	bool swapped;
	LIST* current;
	LIST* last_unsorted = nullptr;

	do {
		swapped = false;
		current = L;

		while (current->next != last_unsorted)
		{
			if (current->element.fam > current->next->element.fam)
			{
				// ����� ����������
				student temp = current->element;
				current->element = current->next->element;
				current->next->element = temp;
				swapped = true;
			}
			current = current->next;
		}
		last_unsorted = current;
	} while (swapped);
}

// ���������� ������ �� �������� (�� �����������)
void sort_age_1(LIST* L)
{
	if (L == nullptr || L->next == nullptr) return;  // �������� �� ������ ������ ��� ������ �� ������ ��������

	bool swapped;
	LIST* current;
	LIST* last_unsorted = nullptr;

	do {
		swapped = false;
		current = L;

		while (current->next != last_unsorted) 
		{
			if (current->element.age > current->next->element.age) 
			{
				// ����� ����������
				student temp = current->element;
				current->element = current->next->element;
				current->next->element = temp;
				swapped = true;
			}
			current = current->next;
		}
		last_unsorted = current;
	} while (swapped);
}

// ���������� ������ �� ������� � �������� ���������� ������� (Z->A)
void sort_fam_2(LIST* L) 
{
	if (L == nullptr || L->next == nullptr) return;  // �������� �� ������ ������ ��� ������ �� ������ ��������

	bool swapped;
	LIST* current;
	LIST* last_unsorted = nullptr;

	do
	{
		swapped = false;
		current = L;

		while (current->next != last_unsorted) 
		{
			if (current->element.fam < current->next->element.fam) 
			{  // �������� ������� �� <
				// ����� ����������
				student temp = current->element;
				current->element = current->next->element;
				current->next->element = temp;
				swapped = true;
			}
			current = current->next;
		}
		last_unsorted = current;
	} while (swapped);
}

// ���������� ������ �� �������� � ��������� ������� (������� �������)
void sort_age_2(LIST* L) 
{
	if (L == nullptr || L->next == nullptr) return;  // �������� �� ������ ������ ��� ������ �� ������ ��������

	bool swapped;
	LIST* current;
	LIST* last_unsorted = nullptr;

	do 
	{
		swapped = false;
		current = L;

		while (current->next != last_unsorted) 
		{
			if (current->element.age < current->next->element.age) 
			{  // �������� ������� �� <
				// ����� ����������
				student temp = current->element;
				current->element = current->next->element;
				current->next->element = temp;
				swapped = true;
			}
			current = current->next;
		}
		last_unsorted = current;
	} while (swapped);
}