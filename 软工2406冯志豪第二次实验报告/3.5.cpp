#include<iostream>
using namespace std;
int rest = 1;
int sum(int n)
{
	if (n == 10) { return 1; }
	else return (sum(n + 1) + 1)*2;
}
int main()
{
	int count = sum(1);
	cout << sum(1);
	return 0;
}