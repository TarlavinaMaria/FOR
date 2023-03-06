#include<iostream>
using namespace std;

#define TASK_1 // Палиндром
//#define TASK_2 // Билет

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined TASK_1
	int num, num0;
	int rez = 0;
	cout << "Введите число: "; cin >> num;
	num0 = num;
	do
	{
		rez = (rez * 10) + num % 10;
		num = num / 10;
	} while (num > 0);

	if (num0 == rez)
		cout << "Число палиндром";
	else
		cout << "Число не палиндром";


#endif

#if defined TASK_2
	int number;
	cout << "Введите номер билета: "; cin >> number;
	int a = number / 100000;
	int b = (number / 10000) % 10;
	int c = (number / 1000) % 10;
	int d = (number / 100) % 10;
	int e = (number / 10) % 10;
	int f = number % 10;

	if (a + b + c == d + e + f)
		cout << "Билет счастливый";
	else
		cout << "Билет обычный";
#endif
}