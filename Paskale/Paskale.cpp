#include<iostream>
#include<Windows.h>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
//#define TASK_1//Me
#define TASK_2

void main()
{
	setlocale(LC_ALL, "Russian");

#if defined TASK_1
	int r, c, s, n;
	cout << "Введите данные: "; cin >> n;
	for (r = 0; r < n; r++)
	{
		int num = 1;
		for (s = 0; s < n - r; s++)
		{
			cout << " ";
		}
		for (c = 0; c <= r; c++)
		{
			cout << num << " ";
			num = num * (r - c) / (c + 1);
		}
		cout << endl;
	}

#endif
#if defined TASK_2
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = {};
	SetConsoleDisplayMode(hConsole, CONSOLE_FULLSCREEN, &coord);
	setlocale(LC_ALL, "");
	int h;
	cout << "Введите высоту треугольника: "; cin >> h;
	long long int nf = 1;
	for (int i = 0; i <= h; i++)cout << "    ";
	cout << "       ";
	cout << 1 << endl;
	for (int n = 1; n <= h; n++)
	{
		for (int i = n % 2 == 0 ? 1 : 0; i <= h - n; i++)cout << "    ";
		if (n % 2 == 0)cout << "    ";
		nf *= n;
		long long int kf = 1;
		cout.width(8);
		cout << 1;// << "\t";
		for (int k = 1; k <= n; k++)
		{
			kf *= k;
			long long int nkf = 1;
			for (int nk = 1; nk <= n - k; nk++)
			{
				nkf *= nk;
			}
			cout.width(8);
			cout << nf / kf / nkf;// << "\t";
		}
		cout << endl;
	}
#endif
}