#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double fahrenheit;
    std::cout << "�����뻪���¶�: ";
    std::cin >> fahrenheit;
    double celsius = (fahrenheit - 32) * 5.0 / 9.0;
  cout << fixed << setprecision(2)<< " ���϶�" << celsius  ;

    return 0;
}