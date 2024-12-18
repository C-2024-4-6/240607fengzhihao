#include<iostream>
using namespace std;
class stu
{
	int num;
	int grade;
public:
	void cc(int b, int c)
	{    
		num = b;
		grade = c;
	}
	static int max(stu a[5],stu *p)
	{
		p = &a[0]; int t;
		for (int i = 0; i <4; i++)
		{
			if (p->grade< a[i + 1].grade) { p = &a[i + 1]; }
		}
		return p->num;
	}
};
int main()
{
	stu a[5];
	for (int i = 0; i < 5; i++)
	{
		int b, c;
		cout << "第" << i+1 << "名同学的学号:"; cin >> b;
		cout << "分数： "; cin >> c; a[i].cc(b, c);
	}stu* p=NULL;
	cout<<"分数最高的同学的学号"<<stu::max(a, p);
}