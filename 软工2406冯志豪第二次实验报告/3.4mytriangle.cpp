#include<iostream>
#include<cmath>
#include"mytriangle.h"
using namespace std;
bool is_valid(double side1, double side2, double side3)
{
	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
	{
		return true;
	}
	else return false;
}
double _area(double side1, double side2, double side3)
{
	if (is_valid)
	{
		double s = (side1 + side2 + side3) / 2;
		double S = sqrt(s * (s - side1) * (s - side2) * (s - side3));
		return S;
	}
	else cout << "无法构成" << endl;return 0000;
}
int main()
{
	double a1, a2, a3;
	cin >> a1 >> a2 >> a3;
	cout<<_area(a1, a2, a3);
	return 0;
}