#include <iostream>
using namespace std;
int main()
{
	double x, y, z;//三条边
	cin >> x >> y >> z;
	if (x + y > z && x + z > y && y + z > x)
	{
		cout << "三角形周长是" << x + y + z << endl;
		if (x == y || x == z || y == z)cout << "这是等腰三角形";
		else cout << "这不是等腰三角形" << endl;
	}
	else cout << "无法构成三角形" << endl;
	return 0;
}
