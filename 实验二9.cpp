#include <iostream>
using namespace std;
int main()
{
	int a = 2, sum=0, n=1;
	for (a = 2;; a=a*2)
	{
		if (a >= 100)break;
		sum = sum + a;
		n++;
	}
	cout << sum << endl;
	cout << n << endl;
	cout << "ƽ����Ǯ��" << sum * 0.8 / n << endl;
	return 0;
}