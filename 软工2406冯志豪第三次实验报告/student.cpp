#include <iostream>
using namespace std;
#include<cstring>
#include"student.h"            //��Ҫ©д���У��������ͨ����
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout <<"num: " << num << endl;
    cout << "name:";
    for (int i = 0; i <4; i++)
    {
        cout << name[i];
    }
    cout << endl;
    cout << "sex: " << sex << endl;
}