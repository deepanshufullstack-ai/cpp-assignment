#include <iostream>
#include <istream>
#include <ostream>
using namespace std;

// class Complex {
// private:
//   int a, b;

// public:
//   void setData(int x, int y) {
//     a = x;
//     b = y;
//   }
//   void getData() { cout << a << " +i" << b << endl; }
//   friend Complex operator+(Complex, Complex);
//   friend Complex operator-(Complex, Complex);
//   friend Complex operator*(Complex, Complex);
// };

// Complex operator+(Complex x, Complex y) {
//   Complex temp;
//   temp.a = x.a + y.a;
//   temp.b = x.b + y.b;
//   return temp;
// }

// Complex operator-(Complex x, Complex y) {
//   Complex temp;
//   temp.a = x.a - y.a;
//   temp.b = x.b - y.b;
//   return temp;
// }

// Complex operator*(Complex x, Complex y) {
//   Complex temp;
//   temp.a = x.a * y.a - x.b * y.b;
//   temp.b = x.a * y.b + x.b * y.a;
//   return temp;
// }

// int main() {
//   Complex c1, c2, c3, c4, c5;
//   c1.setData(2, 4);
//   c2.setData(4, 2);
//   c3 = c1 + c2;
//   c4 = c1 - c2;
//   c5 = c1 * c2;
//   c1.getData();
//   c2.getData();
//   c3.getData();
//   c4.getData();
//   c5.getData();
//   return 0;
// }

class Time {
private:
  int h, m, s;

public:
  void setData(int x, int y, int z) {
    h = x;
    m = y;
    s = z;
  }
  void getData() { cout << h << ":" << m << ":" << s << endl; }
  friend ostream &operator<<(ostream &, Time);
  friend istream &operator>>(istream &, Time);
  Time operator=(Time t) {
    h = t.h;
    m = t.m;
    s = t.s;
    return *this;
  }
};

ostream &operator<<(ostream &dout, Time t) {
  dout << t.h << ":" << t.m << ":" << t.s << endl;
  return dout;
}

istream &operator>>(istream &din, Time t) {
  din >> t.h >> t.m >> t.s;
  return din;
}

int main() {
  Time t1;
  cout << "Enter a time :" << endl;
  cin >> t1;
  cout << "The time is :" << t1;
  return 0;
}