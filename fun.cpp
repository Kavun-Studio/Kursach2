/*
{****************************}
{ Модуль fun.cpp            }
{ гр. П23                    }
{ Разработчик: Самусёнок А.С   }
{ Модифицирован: 12 июня 2025}
{----------------------------}
{ Модуль функций             }
{****************************}
*/

#include "fun.h"

// Инициализация списка: создаёт первый элемент списка с данными пассажира
LIST* Init_List(passagers x)
{
	LIST* lst = new LIST;
	lst->element = x;
	lst->next = nullptr;
	return lst;
}

// Вставка в начало списка: добавляет новый элемент с данными пассажира в начало списка
LIST* Ins_FirstList(passagers x, LIST* L)
{
	LIST* temp = new LIST;
	temp->element = x;
	temp->next = L;
	return temp;
}

// Вставка после элемента: добавляет новый элемент с данными пассажира после указанного элемента p
LIST* Ins_AfterList(passagers x, LIST* L, LIST* p)
{
	if (!p) return L;
	LIST* q = new LIST;
	q->element = x;
	q->next = p->next;
	p->next = q;
	return L;
}

// Удаление первого элемента: удаляет первый элемент из списка и освобождает память
LIST* DelFirst_List(LIST* L)
{
	if (!L) return nullptr;
	LIST* temp = L;
	L = L->next;
	delete temp;
	return L;
}

// Удаление конкретного элемента: удаляет указанный элемент p из списка и освобождает память
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

// Поиск по фамилии: находит элемент списка по заданной фамилии пассажира
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

// Сохранение списка в файл: записывает данные всех элементов списка в указанный файл
void SaveListToFile(LIST* L, const string& filename)
{
	ofstream file(filename);
	if (!file.is_open())
	{
		cerr << "Ошибка при открытии файла: " << filename << endl;
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

// Сортировка по фамилии (по возрастанию): сортирует список методом пузырька по фамилии в алфавитном порядке
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

// Сортировка по количеству баллов (по возрастанию): сортирует список методом пузырька по количеству баллов
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

// Сортировка по фамилии (по убыванию): сортирует список методом пузырька по фамилии в обратном алфавитном порядке
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

// Сортировка по количеству баллов (по убыванию): сортирует список методом пузырька по убыванию количества баллов
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

// Освобождение памяти: удаляет все элементы списка и освобождает выделенную память
void FreeList(LIST* L)
{
	while (L)
	{
		LIST* temp = L;
		L = L->next;
		delete temp;
	}
}

// Инициализация списка лояльности: создаёт первый узел списка с данными уровня лояльности
LoyaltyNode* Init_LoyaltyList(LoyaltyLevel x)
{
	LoyaltyNode* node = new LoyaltyNode;
	node->data = x;
	node->next = nullptr;
	return node;
}

// Вставка уровня лояльности: добавляет новый уровень лояльности в конец списка
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

// Поиск уровня лояльности: находит узел списка по названию уровня лояльности
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

// Освобождение памяти списка лояльности: удаляет все узлы списка лояльности и освобождает память
void FreeLoyaltyList(LoyaltyNode* list)
{
	while (list)
	{
		LoyaltyNode* temp = list;
		list = list->next;
		delete temp;
	}
}