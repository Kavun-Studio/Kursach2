#include "fun.h"

// Инициализация линейного двунаправленного списка
LIST* Init_list(student x) 
{
	LIST* lst;
	lst = new LIST;
	lst->element = x;
	lst->next = NULL;
	lst->previos = NULL;
	return lst;
}

// Вставка первого элемента в голову двунаправленного списка
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

// Вставка элемента в непустой двунаправленный список справа от элемента, на который указывает p
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

// Удаление первого элемента из двунаправленного списка
LIST* DelFirst_List(LIST* L) 
{
	LIST* q;
	if (L != NULL) 
	{  // Проверка корректности входного параметра
		q = L;
		L = L->next;
		delete q;
		if (L != NULL)
		{
			L->previos = NULL;  // Обновление указателя previous нового первого элемента
		}
	}
	return L;
}

// Удаление не первого элемента из двунаправленного списка
LIST* Del_List(LIST* p, LIST* L) 
{
	LIST* q;
	if (p != NULL) {  // Проверка корректности входного параметра
		if (p->next == NULL) {  // Удаление последнего элемента
			p->previos->next = NULL;
			delete p;
			p = L;
		}
		else 
		{  // Удаление элемента, который не является ни первым, ни последним
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
		MessageBox::Show("Ошибка при открытии файла", "Файл", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Запись данных в файл
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

// Сортировка списка по фамилии (в алфавитном порядке)
void sort_fam_1(LIST* L) 
{
	if (L == nullptr || L->next == nullptr) return;  // Проверка на пустой список или список из одного элемента

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
				// Обмен элементами
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

// Сортировка списка по возрасту (по возрастанию)
void sort_age_1(LIST* L)
{
	if (L == nullptr || L->next == nullptr) return;  // Проверка на пустой список или список из одного элемента

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
				// Обмен элементами
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

// Сортировка списка по фамилии в обратном алфавитном порядке (Z->A)
void sort_fam_2(LIST* L) 
{
	if (L == nullptr || L->next == nullptr) return;  // Проверка на пустой список или список из одного элемента

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
			{  // Изменено условие на <
				// Обмен элементами
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

// Сортировка списка по возрасту в убывающем порядке (старшие сначала)
void sort_age_2(LIST* L) 
{
	if (L == nullptr || L->next == nullptr) return;  // Проверка на пустой список или список из одного элемента

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
			{  // Изменено условие на <
				// Обмен элементами
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