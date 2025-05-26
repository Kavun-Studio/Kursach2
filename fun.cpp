#include "fun.h"

//Инициализация линейного двусвязного списка
LIST* Init_List(student x)
{
    LIST* lst;
    lst = new LIST;
    lst->element = x;
    lst->next = NULL;
    lst->previos = NULL;
    return lst;
}

//Вставка первого элемента в голову двунаправленного списка
LIST* Ins_FirstList(student x, LIST* L)
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

//Вставка элемента в непустой двунаправленный список справа от элемента, на который указывает p
LIST* Ins_AfterList(student x, LIST* L, LIST* p)
{
    LIST* q;
    q = new LIST;
    q->element = x;
    if (p->next != NULL)
        p->next->previos = q;
    q->next = p->next;
    p->next = q;
    q->previos = p;
    return q;
}

// Удаление первого элемента из двунаправленного списка
LIST* DelFirst_List(LIST* L)
{
    LIST* q;
    if (L != NULL)  // вх.параметр корректен
    {
        q = L;
        L = L->next;
        delete q;
        if (L != NULL)
            L->previos = NULL;
    }
    return L;
}

// Удаление не первого элемента
LIST* Del_List(LIST* p, LIST* L)
{
    LIST* q;
    if (p != NULL)  // вх.параметр корректен
    {
        if (p->next == NULL)  // удаляем последний
        {
            p->previos->next = NULL;
            delete p;
            p = L;
        }
        else  // удаляем не последний и не первый
        {
            q = p->next;
            p->previos->next = q;
            q->previos = p->previos;
            delete p;
            p = q;
        }
    }
    return p;
}

void savest(LIST* L)
{
    ofstream f("Name.txt");
    if (f.is_open() == false)
    {
        MessageBox::Show("Ошибка при открытии", "Файл", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return;
    }
    LIST* q;
    q = L;
    while (q != NULL)
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
    LIST* q, * p;
    p = NULL;
    if (L != NULL)
    {
        q = L;
        while ((q != NULL) && (q->element.fam != x.fam))
        {
            q = q->next;
        }
        if (q != NULL)
        {
            p = q;
        }
    }
    return p;
}

// Сортировка списка по фамилии (в алфавитном порядке)
void sort_fam_1(LIST* L)
{
    bool flag = true;
    LIST* q = L;

    while (q && q->next)
    {
        if ((q->element.fam) > (q->next->element.fam))
        {
            // Обмен элементами
            student tmp = q->next->element;
            q->next->element = q->element;
            q->element = tmp;

            q = q->next;
            sort_fam_1(L);  // Рекурсивный вызов для повторной проверки
            flag = true;
        }
        else
        {
            q = q->next;
        }

        if (flag == false) break;
    }
}

// Сортировка списка по возрасту (по возрастанию)
void sort_age_1(LIST* L)
{
    bool flag = true;
    LIST* q = L;

    while (q && q->next)
    {
        if ((q->element.age) > (q->next->element.age))
        {
            // Обмен элементами
            student tmp = q->next->element;
            q->next->element = q->element;
            q->element = tmp;

            q = q->next;
            sort_age_1(L);  // Рекурсивный вызов для повторной проверки
            flag = true;
        }
        else
        {
            q = q->next;
        }

        if (flag == false) break;
    }
}

void sort_fam_2(LIST* L)
{
    bool flag = true;
    LIST* q = L;
    while (q->next)
    {
        if ((q->element.fam) < (q->next->element.fam))
        {
            student tmp = q->next->element;
            q->next->element = q->element;
            q->element = tmp;
            q = q->next;
            sort_fam_2(L);
            flag = true;
        }
        else
        {
            q = q->next;
        }
        if (flag == false) break;
    }
}
void sort_age_2(LIST* L)
{
    bool flag = true;
    LIST* q = L;
    while (q->next)
    {
        if ((q->element.age) < (q->next->element.age))
        {
            student tmp = q->next->element;
            q->next->element = q->element;
            q->element = tmp;
            q = q->next;
            sort_age_2(L);
            flag = true;
        }
        else
        {
            q = q->next;
        }
        if (flag == false) break;
    }
}