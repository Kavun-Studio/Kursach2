#ifndef FUN_H
#define FUN_H
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
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

struct LoyaltyLevel {
	std::string levelName;
	int bonus;
};

struct LoyaltyNode {
	LoyaltyLevel data;
	LoyaltyNode* next;
};

// Инициализация списка (создание первого элемента)
LIST* Init_List(passagers x);

// Вставка в начало списка
LIST* Ins_FirstList(passagers x, LIST* L);

// Вставка после элемента p
LIST* Ins_AfterList(passagers x, LIST* L, LIST* p);

// Удаление первого элемента
LIST* DelFirst_List(LIST* L);

// Удаление конкретного элемента p
LIST* Del_List(LIST* L, LIST* p);

// Поиск по фамилии
LIST* Find_BySurname(const string& surname, LIST* L);

// Сохранение списка в файл
void SaveListToFile(LIST* L, const string& filename);

// Сортировка по фамилии (по возрастанию)
LIST* SortBySurnameAscending(LIST* L);

// Сортировка по количеству баллов (по возрастанию)
LIST* SortByPointsAscending(LIST* L);

// Сортировка по фамилии (по убыванию)
LIST* SortBySurnameDescending(LIST* L);

// Сортировка по количеству баллов (по убыванию)
LIST* SortByPointsDescending(LIST* L);

// Очистка всей памяти
void FreeList(LIST* L);

// Инициализация списка
LoyaltyNode* Init_LoyaltyList(LoyaltyLevel x);

// Вставка нового уровня
LoyaltyNode* Ins_LoyaltyList(LoyaltyLevel x, LoyaltyNode* list);

// Поиск уровня по имени
LoyaltyNode* Find_LoyaltyLevel(const std::string& levelName, LoyaltyNode* list);

// Освобождение памяти
void FreeLoyaltyList(LoyaltyNode* list);

#endif // FUN_H