#include <iostream>
using namespace std;
int main() {
    double num1, num2;char op;
    cout << "�������һ����: "; cin >> num1;
    cout << "�������������+ - * / %��: ";cin >> op;
    if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%') {
        cout << "�Ƿ��������" << endl; return 0;}
    cout << "������ڶ�����: ";
    cin >> num2;
    if (op == '/' && num2 == 0) { cout << "��������Ϊ 0��" << endl; return 0; }
    double result;
    switch (op) {
    case '+':result = num1 + num2;break;
    case '-':result = num1 - num2;break;
    case '*':result = num1 * num2;break;
    case '/':result = num1 / num2; break;
    case '%':
        if ((int)num2 == 0) {cout << "��������Ϊ 0��" << endl; return 0;}
        result = (int)num1 % (int)num2; break;}
    cout << num1 << " " << op << " " << num2 << " = " << result << endl;
    return 0;}
