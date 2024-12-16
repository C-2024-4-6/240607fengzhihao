#include<iostream>
using namespace std;
class Point
{
	int x, y;
public:
	Point(int a, int b)
	{
		x = a;
		y = b;
		
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << this->x << " " << this->y;
	}
};
int main()
{
	Point xx(60, 80);
	xx.display();
	xx.setPoint(2, 3);
	cout << endl;
	xx.display();
}