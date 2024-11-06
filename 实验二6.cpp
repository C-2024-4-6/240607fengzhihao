#include <iostream>
using namespace std;
int main()
{
	unsigned int x, y;//输入两个正整数
	cin >> x >> y;
	int a = x, b = y;
	while (b != 0)
	{
		int t = b; b = a % b; a = t;
	}
	cout << "最大公约数是" << a << endl;
	for (int k = 1;; k++)
	{
		if (k % x == 0 && k % y == 0) { cout <<"最小公倍数是"<< k << endl; break; }
	}
	return 0;
}