#pragma once
#include<cstring>
class Student              //类声明
{
public:                 //公用成员函数原型声明
	void display();
	void set_value(int a, const char p[21], char se)
	{
		num = a;
		for (int i = 0; i < strlen(p); i++)
		{
			name[i] = p[i];
		}
		sex = se;
	}
private:
	int num;
	char name[20];
	char sex;
};