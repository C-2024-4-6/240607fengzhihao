#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "������һ���ַ�: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') { 
        ch -= 32;  
        cout << ch <<endl; }
    else {cout << (int)(ch + 1) << endl;  }
    return 0;
}


