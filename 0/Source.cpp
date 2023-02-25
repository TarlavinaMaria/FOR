#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void main()
{
	setlocale(LC_ALL, "Russian");


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

}