#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	char key;
	do
	{
		key = _getch();
		if (key == 119)
			cout << key << "\tВверх\n";
		else if (key == 97)
			cout << key << "\tВлево\n";
		else if (key == 115)
			cout << key << "\tВниз\n";
		else if (key == 100)
			cout << key << "\tВправо\n";
		else if (key == 32)
			cout << "space" << "\tПрыжок\n";
		else if (key == 13)
			cout << "enter" << "\tОгонь\n";
		else if (key == 27)
			cout << "escape" << "\tВыход\n";
	} while (key != 27);
}