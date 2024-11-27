#include <iostream>
#include<cstring>
using namespace std;
int parseHex(const char* const hexString)
{
	int num=0;
	int c = strlen(hexString);
	for (int i = 0; i < c;i++)
	{
		if (hexString[i] >= '0' && hexString[i] <= '9') { num = num * 16 + (hexString[i]-'0'); }
		else if (hexString[i] >= 'a' && hexString[i] <= 'f') { num = num*16 + (hexString[i] - 'a' + 10); }
		else if (hexString[i] >= 'A' && hexString[i] <= 'F') { num = num*16 + (hexString[i] - 'A' + 10); }
	}
	return num;
}
int main()
{
	cout << parseHex("A5");
}