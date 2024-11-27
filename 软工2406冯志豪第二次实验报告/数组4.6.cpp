#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	int a = strlen(s);
	for (int i = 0; i < a; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')counts[s[i]+32 - 'a']++;
		if(s[i]>='a' && s[i] <= 'z')counts[s[i] - 'a']++;
	}
}
int main()
{
	char s[1000]; int coun[26] = { 0 };
	for (int i = 0; i < 26; i++)
	{
		coun[i] = 0;
	};
	cin >> s;
	count(s, coun);
	for (int i = 0; i < 26; i++)
	{
		if (coun[i] != 0) { char le = 'a' + i; cout << le << " :" << coun[i] << "times"; cout << endl; }
	};
}