/*
{*****************************}
{ Модуль fun.h             }
{ гр. П23                     }
{ Разработчик: Самусёнок А.С    }
{ Модифицирован: 12 июня 2025 }
{-----------------------------}
{ Модуль объявление функций   }
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

// Структура для хранения данных о пассажире
struct passagers
{
    string phoneNumber;   // Номер телефона пассажира
    string fam;           // Фамилия пассажира
    int cardNumber;       // Номер карты лояльности
    string level;         // Уровень лояльности
    int pointCount;       // Количество бонусных баллов
};

// Структура для представления узла односвязного списка пассажиров
struct LIST
{
    passagers element;    // Данные о пассажире
    LIST* next;           // Указатель на следующий узел списка
};

// Структура для хранения информации об уровне лояльности
struct LoyaltyLevel
{
    std::string levelName; // Название уровня лояльности
    int bonus;             // Бонус, связанный с уровнем
};

// Структура для представления узла односвязного списка уровней лояльности
struct LoyaltyNode
{
    LoyaltyLevel data;     // Данные об уровне лояльности
    LoyaltyNode* next;     // Указатель на следующий узел списка
};

// Инициализация списка: создаёт первый узел списка с данными пассажира
LIST* Init_List(passagers x);

// Вставка в начало списка: добавляет новый узел с данными пассажира в начало списка
LIST* Ins_FirstList(passagers x, LIST* L);

// Вставка после элемента: добавляет новый узел с данными пассажира после указанного узла p
LIST* Ins_AfterList(passagers x, LIST* L, LIST* p);

// Удаление первого элемента: удаляет первый узел из списка и освобождает память
LIST* DelFirst_List(LIST* L);

// Удаление конкретного элемента: удаляет указанный узел p из списка и освобождает память
LIST* Del_List(LIST* L, LIST* p);

// Поиск по фамилии: возвращает указатель на узел с заданной фамилией пассажира
LIST* Find_BySurname(const string& surname, LIST* L);

// Сохранение списка в файл: записывает данные всех узлов списка в указанный файл
void SaveListToFile(LIST* L, const string& filename);

// Сортировка по фамилии (по возрастанию): сортирует список по фамилии в алфавитном порядке
LIST* SortBySurnameAscending(LIST* L);

// Сортировка по количеству баллов (по возрастанию): сортирует список по возрастанию бонусных баллов
LIST* SortByPointsAscending(LIST* L);

// Сортировка по фамилии (по убыванию): сортирует список по фамилии в обратном алфавитном порядке
LIST* SortBySurnameDescending(LIST* L);

// Сортировка по количеству баллов (по убыванию): сортирует список по убыванию бонусных баллов
LIST* SortByPointsDescending(LIST* L);

// Очистка всей памяти: освобождает память, занятую всеми узлами списка пассажиров
void FreeList(LIST* L);

// Инициализация списка лояльности: создаёт первый узел списка с данными уровня лояльности
LoyaltyNode* Init_LoyaltyList(LoyaltyLevel x);

// Вставка нового уровня: добавляет новый уровень лояльности в конец списка
LoyaltyNode* Ins_LoyaltyList(LoyaltyLevel x, LoyaltyNode* list);

// Поиск уровня по имени: возвращает указатель на узел с заданным названием уровня лояльности
LoyaltyNode* Find_LoyaltyLevel(const std::string& levelName, LoyaltyNode* list);

// Освобождение памяти: освобождает память, занятую всеми узлами списка уровней лояльности
void FreeLoyaltyList(LoyaltyNode* list);

#endif // FUN_H