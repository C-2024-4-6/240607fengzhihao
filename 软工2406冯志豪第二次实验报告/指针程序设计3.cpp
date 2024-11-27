#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* p = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (p[j] > p[i]) { swap(p[j], p[i]); }
		}
}
	for (int j = 0; j < n; j++)
	{
		cout << p[j] << " ";
	}
	delete[]p;
	return 0;
}