#include "fun.h"

void savest(student* a, int n)
{
	ofstream f("FileName.txt");
	if (f.is_open() == false)
	{
		MessageBox::Show("Ошибка при открытии", "Файл", MessageBoxButtons::OK, MessageBoxIcon::Error);
		//return 0;
	}
//Вводим значения
for (int i = 0; i < n; i++)
{
	f << a[i].fam << '\n';
	f << a[i].im << '\n';
	f << a[i].age << '\n';
}
f.close();
}

void sort11(student* a, int n)
{
	for (int x = 0; x < n; x++)
	{
		student t;
		int flag = 0;
		for (int i = 0; i < n - 1; i++)
			if (a[i].fam > a[i + 1].fam)
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
				flag++;
			}
		if (flag == 0) { break; }
	}

}

void sort12(student* a, int n)
{
	for (int x = 0; x < n; x++)
	{
		student t;
		int flag = 0;
		for (int i = 0; i < n - 1; i++)
			if (a[i].im > a[i + 1].im)
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
				flag++;
			}
		if (flag == 0) { break; }
	}

}

void sort21(student* a, int n)
{
	for (int x = 0; x < n; x++)
	{
		student t;
		int flag = 0;
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i].age > a[i + 1].age)
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
				flag++;
			}
		}
		if (flag == 0) { break; }
	}
}

void sort22(student* a, int n)
{
	for (int x = 0; x < n; x++)
	{
		student t;
		int flag = 0;
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i].age < a[i + 1].age)
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
				flag++;
			}
		}
		if (flag == 0) { break; }
	}
}
