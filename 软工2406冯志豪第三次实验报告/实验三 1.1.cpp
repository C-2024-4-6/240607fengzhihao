#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
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
	//����t1ΪTime�����
	int h=0, m=0, s=0;
	tl.cc(h, m, s);
	return 0;
}