#include<iostream>
using namespace std;
int main()
{
	int a[10];
	cout << "Enter 10 nums"; 
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	cout << " The distinct numbers are :"<< a[0]<<" ";
	for (int i = 1; i < 10; i++)
	{
		int c = 0;
		for (int j = 0; j < i; j++)
		{
			if (a[i] != a[j])c++;
		}
		if (c == i)cout << a[i] << " ";
	}
	return 0;
}