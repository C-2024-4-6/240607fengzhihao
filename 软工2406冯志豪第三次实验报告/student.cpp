#include <iostream>
using namespace std;
#include<cstring>
#include"student.h"            //不要漏写此行，否则编译通不过
void Student::display()         //在类外定义display类函数
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