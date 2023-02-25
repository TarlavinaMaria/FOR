#include<iostream>
using std::cin;
using std::cout;
using std::endl;

//#define NUM_0
//#define NUM_1
//#define NUM_2
//#define NUM_3
//#define NUM_4
//#define NUM_5
#define NUM_6

void main()
{
	setlocale(LC_ALL, "");
#ifdef NUM_0
	int n;
	cout << "Введите высоту: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << "*";
		cout << endl;
	}
#endif
#ifdef NUM_1
	int n;
	cout << "Введите высоту: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

#endif
#ifdef NUM_2
	int n;
	cout << "Введите высоту: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif
#ifdef NUM_3
	int n;
	cout << "Введите высоту: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << "* ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		
		cout << endl;
	}
#endif
#ifdef NUM_4
	int n;
	cout << "Введите высоту: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif
#ifdef NUM_5
	int n;
	cout << "Размер "; cin >> n;
	/*for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
			cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " "; cout << "\\";
		for (int j = i; j < n-1; j++) cout << "  "; cout << "/";
		
		cout << endl;
	}*/
	// Второй вариант
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i*2; j++) cout << " "; cout << "\\";
			cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " "; cout << "\\";
		for (int j = 0; j < (n-1-i)*2; j++) cout << " "; cout << "/";

		cout << endl;
	}
#endif
#ifdef NUM_6
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i+j)%2==0)
			{
				cout << "+ ";
			}
			else
			{
				cout << "- ";
			}
			/*if (i % 2 == j % 2)
			{
				cout << "+ ";
			}
			else cout << "- ";*/
			
		}
        cout << endl;
	}
	
#endif
}