#include <iostream>
using namespace std;
bool is_prime(int num)
{
	int k=0 ;
	for (int i = num; i >=1; i--)
	{
		if ((num % i) == 0)
		{
			k++;
		}
	}if (k >=3) { return false; }
	else return true;
}
int main()
{
	for (int a = 2, b = 1; b <= 200; a++)
	{
		if (is_prime(a)==1)
		{
			cout << a << " ";
			if (b % 10 == 0)cout << endl;
			b++;
		}
	}
	return 0;
}