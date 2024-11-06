#include <iostream>
using namespace std;
int main()
{
	double r, h, PI = 3.14159;
	cout << "请输入半径r" << endl; cin >> r;
	cout << "请输入高h" << endl; cin >> h;
	cout << "体积是" << PI * r * r * h/3 << endl;
	return 0;
}