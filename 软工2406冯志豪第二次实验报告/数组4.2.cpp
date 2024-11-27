#include<iostream>
using namespace std;
void change(double a[10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (a[i] < a[j])
			{
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}
int main()
{
	double a[10];
	for (int i = 0; i < 10; i++) { cin >> a[i]; }
	change(a);
	for (int i = 0; i < 10; i++)
		cout << a[i]<<" ";
	return 0;
}
