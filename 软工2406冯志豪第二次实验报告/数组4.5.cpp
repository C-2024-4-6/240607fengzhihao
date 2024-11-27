#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2)//s1×Ó,s2Ä¸
{
	int a = strlen(s1); int b = strlen(s2); int k = 0;
	for (int i = 0; i < b; i++)
	{
		int d = 0;
		if (s2[i] == s1[0])
		{
			for (int j = 0, k = i; j < a; j++, k++)
			{
				if (s2[k] == s1[j]) { d++; };
			};
		};
		if (d == a) { k++; return i ; break; };
	};
	if (k == 0) return -1;
}
int main()
{
	char str[100], str1[200];
	cout << "Enter the first string :"; cin >> str; cout << endl;
	cout << "Enter the second string :"; cin >> str1;

	cout << "indexOf(¡°welcome¡±, ¡°We welcome you!¡±) is " << indexof(str, str1);
}