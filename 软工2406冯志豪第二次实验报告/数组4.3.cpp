#include<iostream>
using namespace std;
bool men[100] = {true};
int main()
{
	for (int i = 2; i <= 100; i++)
	{
		for (int j = (i-1); j <= 99; j=(i+j+1))
		{
			men[j] = !men[j];
		}
	}
	for (int k = 0; k <= 99; k++)
	{
		if (men[k]==true)
		{
			cout << k+1 << endl;
		}
	}
}