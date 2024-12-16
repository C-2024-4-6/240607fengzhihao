#include<iostream>
using namespace std;
class cub
{
	int height;
	int width;
	int length;
public:
	void cc(int h, int l, int w)
	{
		height = h;
		width = l;
		length = w;
	}
	int display()
	{
		return height * width * length;
	}
};
int main()
{
	int b[3];
	for (int i = 0; i < 3; i++)
	{
		cub a;
		int h, l, w;
		cin >> h >> l >> w;
		a.cc(h, l, w);
		b[i] = a.display();
	}
	for (int i = 0; i < 3; i++)
	{
		cout << b[i] << endl;
	}
    
}