#include <iostream>
using namespace std;
int main()
{
	double x, y, z;//������
	cin >> x >> y >> z;
	if (x + y > z && x + z > y && y + z > x)
	{
		cout << "�������ܳ���" << x + y + z << endl;
		if (x == y || x == z || y == z)cout << "���ǵ���������";
		else cout << "�ⲻ�ǵ���������" << endl;
	}
	else cout << "�޷�����������" << endl;
	return 0;
}
