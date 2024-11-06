#include <iostream>
using namespace std;
int main() {
    double num1, num2;char op;
    cout << "请输入第一个数: "; cin >> num1;
    cout << "请输入运算符（+ - * / %）: ";cin >> op;
    if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%') {
        cout << "非法运算符！" << endl; return 0;}
    cout << "请输入第二个数: ";
    cin >> num2;
    if (op == '/' && num2 == 0) { cout << "除数不能为 0！" << endl; return 0; }
    double result;
    switch (op) {
    case '+':result = num1 + num2;break;
    case '-':result = num1 - num2;break;
    case '*':result = num1 * num2;break;
    case '/':result = num1 / num2; break;
    case '%':
        if ((int)num2 == 0) {cout << "除数不能为 0！" << endl; return 0;}
        result = (int)num1 % (int)num2; break;}
    cout << num1 << " " << op << " " << num2 << " = " << result << endl;
    return 0;}
