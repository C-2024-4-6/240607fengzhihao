#include<iostream>
using namespace std;
int ac(int a, int b)
{	for (int i = ((a < b) ? a : b); i >= 1; i--)//�ú������������
	{if (a % i == 0 && b % i == 0)
		{return i;break;}
	}
}
int ab(int a, int b)//��С������
{	for (int i = ((a > b) ? a : b);; i++)
	{if (i % a == 0 && i % b == 0)
	{return i; break;}
	}
}
int main()
{
	cout << "������������:";
	int a, b;
	cin >> a >> b;
	cout << "���Լ����" << ac(a, b) << endl;
	cout << "��С��������" << ab(a, b);
	return 0;
}