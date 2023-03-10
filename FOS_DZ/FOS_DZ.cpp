#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define TASK_1 // ���������
//#define TASK_2 // �������
//#define TASK_3 // ������� ASCII-��������
//#define TASK_4 // ��������� �� ��������� �������
//#define TASK_5 // ���������� ����� �� ���� ���������
//#define TASK_6 // ������� �����
//#define TASK_7 // ������� ���������
//#define TASK_7_2 // ������� ��������� ������ �������
//#define TASK_8 // ������� ��������

void main()
{
    setlocale(LC_ALL, "Russian");

#if defined TASK_1
    int a;
    int fact = 1;
    int b = 1;
    cout << "������� ����� ��������� "; cin >> a;
    if (a < 0)
    {
        cout << "Error";
    }
    else
    {
        if (a == 0)
        {
            cout << "��������� ����� 1";
        }
        else
        {
            for (int i = 0; i < a; i++)
            {
                fact = fact * b++;
            }
            cout << "��������� " << a << " ����� " << fact << endl;
        }
    }

#endif
#if defined TASK_2
    double num;
    int n;
    double res = 1;
    cout << "������� �����: "; cin >> num;
    cout << "������� �������: "; cin >> n;
    if (n < 0)
    {
        num = 1 / num;
        n = -n;
    }
    for (int i = 0; i < n; i++)
    {
        res *= num;
    }
    cout << res << endl;

#endif
#if defined TASK_3
    for (int i = 0; i < 256; i++)
    {
        if (i % 16 == 0) cout << endl;
        cout << i << " - " << (char)i;
    }

#endif
#if defined TASK_4
    int num1 = 0;
    int num2 = 1;
    int num_temp;
    int num_next;
    int n;
    cout << "������� ������ ����� �������� "; cin >> n;

    for (int i = 0; i < n; i++)
    {
        num_next = num1 + num2;
        num1 = num2;
        num2 = num_next;
        cout << num1 << " ";
        if (num_next > n)
        {
            cout << "������ ���������";
            break;
        }
    }

#endif
#if defined TASK_5
    int num1 = 0;
    int num2 = 1;
    int num_temp;
    int num_next;
    int n;
    cout << "������� ����� �������� "; cin >> n;

    for (int i = 0; i < n; i++)
    {
        num_next = num1 + num2;
        num1 = num2;
        num2 = num_next;
        cout << num_next << " ";
    }
#endif
#if defined TASK_6
    int numb;
    int rez = 0;
    int count = 0;
    cout << "������� ������ �����: "; cin >> numb;
    for (int i = 2; i < numb; ++i)
    {
        for (int j = 1; j < numb; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count < 3)
        {
            rez = i;
            cout << rez << " ";
        }
        count = 0;
    }

#endif
#if defined TASK_7
    int n1, n2;
    cout << "������� ��������� �����: "; cin >> n1;
    cout << "������� �������� �����: "; cin >> n2;
    for (int i = 1; i <= n2; i++)
    {
        cout << n1 << " * " << i << " = " << n1 * i << endl;
    }
#endif
#if defined TASK_7_2
    int i, j;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
#endif
#if defined TASK_8
    int i, j;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << " ";
        }
        cout << endl;
    }
#endif
}