#include <iostream>
using namespace std;
void siu(double i)
{
    if (i == 0) { cout << "ÎÞ·¨¼ÆËã" << endl; }
	else {
		if (i < 0) { i = -i; }
		double a, b, c;
		a = i;
		do {
			b = 0.5 * (a + i / a);
			if (b >= a) { c = b - a; }
			else { c = a - b; }
			a = b;
		} while (c >= 1e-5);
		cout << b;}
}
int main()
{double t;
	cin >> t;
	siu(t);
	return 0;
}