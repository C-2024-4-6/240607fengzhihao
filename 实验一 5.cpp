#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double fahrenheit;
    std::cout << "ÇëÊäÈë»ªÊÏÎÂ¶È: ";
    std::cin >> fahrenheit;
    double celsius = (fahrenheit - 32) * 5.0 / 9.0;
  cout << fixed << setprecision(2)<< " ÉãÊÏ¶È" << celsius  ;

    return 0;
}