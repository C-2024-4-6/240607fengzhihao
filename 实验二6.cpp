#include <iostream>
using namespace std;
int main()
{
	unsigned int x, y;//��������������
	cin >> x >> y;
	int a = x, b = y;
	while (b != 0)
	{
		int t = b; b = a % b; a = t;
	}
	cout << "���Լ����" << a << endl;
	for (int k = 1;; k++)
	{
		if (k % x == 0 && k % y == 0) { cout <<"��С��������"<< k << endl; break; }
	}
	return 0;
}