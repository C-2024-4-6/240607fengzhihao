#include<iostream>
using namespace std;
int ac(int a, int b)
{	for (int i = ((a < b) ? a : b); i >= 1; i--)//该函数求最大公因数
	{if (a % i == 0 && b % i == 0)
		{return i;break;}
	}
}
int ab(int a, int b)//最小公倍数
{	for (int i = ((a > b) ? a : b);; i++)
	{if (i % a == 0 && i % b == 0)
	{return i; break;}
	}
}
int main()
{
	cout << "请输入两个数:";
	int a, b;
	cin >> a >> b;
	cout << "最大公约数是" << ac(a, b) << endl;
	cout << "最小公倍数是" << ab(a, b);
	return 0;
}