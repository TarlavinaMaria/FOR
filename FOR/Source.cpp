#include<iostream>
#include<Windows.h>

using namespace std;

//#define For_1
//#define For_2
//#define For_3
#define For_4



void main()
{
	setlocale(LC_ALL, "");
#ifdef For_1
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	for (int i = 0; i < n; i++) 
	{
		cout << i << "\t";
	}
	cout << endl;
#endif
#ifdef For_2
	for (int i = 1; i <= 10; i++)
	{
		cout << "Таблица умножения на " << i << ": \n";
		for (int j = 1; j <= 10; j++)
		{
			cout << i << " * " << j << " = " << i*j << endl;
			Sleep(50);
		}
	}
#endif
#ifdef For_3
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout.width(5);
		
			cout << i * j << "\t";
		}
		cout << endl;
	}
#endif
#ifdef For_4

#endif
}