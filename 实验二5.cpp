#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, d = 0;//字母，数字，空格，其他
	char ch;
	do {
		ch = getchar();
		if (ch == ' ') { c++; }
		else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) { a++; }
		else if (ch >= '1' && ch <= '9') { b++; }
		else { d++; }
	} while (ch != '\n');
	cout << "一共有" << a << "个字母" << endl;
	cout << "一共有" << b << "个数字" << endl;
	cout << "一共有" << c << "个空格" << endl;
	cout << "一共有" << d<< "个其他字符" << endl;
	return 0;
}