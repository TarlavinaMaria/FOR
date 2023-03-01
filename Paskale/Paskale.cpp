#include<iostream>
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
	cout << "¬ведите данные: "; cin >> n;
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
#if defoned TASK_2
	int h;
	cout << "¬ведите высоту треугольника : "; cin >> h;
	int nf = 1;
	for (int n = 1; n <= h; n++)
	{

		for (int k = 0; k <= n; k++)
		{
			kf *= k;
			itn nkf = 1;
			for (int i = 0; i < n - k; i++) nkf *= 1;
			cout << nf / kf / nkf << "\t";
		}
		cout << endl;
	}
#endif
}