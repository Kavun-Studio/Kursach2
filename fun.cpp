// Реализация функций fun.cpp

#include "fun.h"

// Инициализация списка (первый элемент)
LIST* Init_List(passagers x) {
    LIST* lst = new LIST;
    lst->element = x;
    lst->next = nullptr;
    return lst;
}

// Вставка в начало списка
LIST* Ins_FirstList(passagers x, LIST* L) {
    LIST* temp = new LIST;
    temp->element = x;
    temp->next = L;
    return temp;
}

// Вставка после элемента p
LIST* Ins_AfterList(passagers x, LIST* L, LIST* p) {
    if (!p) return L;
    LIST* q = new LIST;
    q->element = x;
    q->next = p->next;
    p->next = q;
    return L;
}

// Удаление первого элемента
LIST* DelFirst_List(LIST* L) {
    if (!L) return nullptr;
    LIST* temp = L;
    L = L->next;
    delete temp;
    return L;
}

// Удаление конкретного элемента
LIST* Del_List(LIST* L, LIST* p) {
    if (!L || !p) return L;

    if (L == p) {
        return DelFirst_List(L);
    }

    LIST* prev = L;
    while (prev->next && prev->next != p) {
        prev = prev->next;
    }

    if (prev->next == p) {
        prev->next = p->next;
        delete p;
    }
    return L;
}

// Поиск по фамилии
LIST* Find_BySurname(const string& surname, LIST* L) {
    LIST* q = L;
    while (q != nullptr) {
        if (q->element.fam == surname) return q;
        q = q->next;
    }
    return nullptr;
}

// Сохранение списка в файл
void SaveListToFile(LIST* L, const string& filename) {
    ofstream file(filename);
    if (!file.is_open()) {
        cerr << "Ошибка при открытии файла: " << filename << endl;
        return;
    }

    LIST* q = L;
    while (q != nullptr) {
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

// Сортировка пузырьком по фамилии (по возрастанию)
LIST* SortBySurnameAscending(LIST* L) {
    if (!L) return L;

    bool swapped;
    do {
        swapped = false;
        LIST* p = L;
        while (p->next) {
            if (p->element.fam > p->next->element.fam) {
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

// Сортировка пузырьком по количеству баллов (по возрастанию)
LIST* SortByPointsAscending(LIST* L) {
    if (!L) return L;

    bool swapped;
    do {
        swapped = false;
        LIST* p = L;
        while (p->next) {
            if (p->element.pointCount > p->next->element.pointCount) {
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

// Сортировка пузырьком по фамилии (по убыванию)
LIST* SortBySurnameDescending(LIST* L) {
    if (!L) return L;

    bool swapped;
    do {
        swapped = false;
        LIST* p = L;
        while (p->next) {
            if (p->element.fam < p->next->element.fam) {
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

// Сортировка пузырьком по количеству баллов (по убыванию)
LIST* SortByPointsDescending(LIST* L) {
    if (!L) return L;

    bool swapped;
    do {
        swapped = false;
        LIST* p = L;
        while (p->next) {
            if (p->element.pointCount < p->next->element.pointCount) {
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

// Освобождение памяти
LIST* FreeList(LIST* L) {
    while (L) {
        LIST* temp = L;
        L = L->next;
        delete temp;
    }
    return nullptr;
}