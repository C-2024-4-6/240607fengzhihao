#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, d = 0;//��ĸ�����֣��ո�����
	char ch;
	do {
		ch = getchar();
		if (ch == ' ') { c++; }
		else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) { a++; }
		else if (ch >= '1' && ch <= '9') { b++; }
		else { d++; }
	} while (ch != '\n');
	cout << "һ����" << a << "����ĸ" << endl;
	cout << "һ����" << b << "������" << endl;
	cout << "һ����" << c << "���ո�" << endl;
	cout << "һ����" << d<< "�������ַ�" << endl;
	return 0;
}