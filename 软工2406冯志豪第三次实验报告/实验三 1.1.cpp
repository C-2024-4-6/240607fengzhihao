#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
		int hour;
	int minute;
	int sec;
public:
      void cc(int h, int m, int s)
	  {
		  cin >> h >> m >> s;
		hour = h; this->minute = m; this->sec = s;
		cout << hour << ": " << minute << ": " << sec << endl;
	}
};
int main()
{
	Time tl;     
	//定义t1为Time类对象
	int h=0, m=0, s=0;
	tl.cc(h, m, s);
	return 0;
}