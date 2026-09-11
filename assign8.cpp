// #include <iostream>
// using namespace std;

// class Complex {
// private:
//   int a, b;

// public:
//   void setData(int x, int y) {
//     a = x;
//     b = y;
//   }
//   void showData() {
//     cout << a << endl;
//     cout << b << endl;
//   }
// };

// int main() {
//   Complex c1;
//   c1.setData(2, 3);
//   c1.showData();
//   return 0;
// }

// class Time {
// private:
//   int h, m, s;

// public:
//   void setTime(int h1, int m1, int s1) {
//     h = h1;
//     m = m1;
//     s = s1;
//   }
//   void showTime() {
//     cout << "Hour: " << h << endl;
//     cout << "Minute: " << m << endl;
//     cout << "Second: " << s << endl;
//   }
// };

// int main() {
//   Time t1;
//   t1.setTime(2, 45, 5);
//   t1.showTime();
//   return 0;
// }

// class Date {
// private:
//   int d, m, y;

// public:
//   void setDate(int d1, int m1, int y1) {
//     if (d1 >= 0 && d1 <= 31) {
//       d = d1;
//     } else {
//       d = 1;
//     }

//     if (m1 >= 0 && m1 <= 12) {

//       m = m1;
//     } else {
//       m = 1;
//     }

//     y = y1;
//   }
//   void showDate() {
//     cout << d << "/" << m << "/" << y << endl;
//     cout << d << "-" << m << "-" << y << endl;
//     switch (m) {
//     case 1:
//       cout << d << "-" << "Jan" << "-" << y << endl;
//       break;

//     case 2:
//       cout << d << "-" << "Fab" << "-" << y << endl;
//       break;

//     case 3:
//       cout << d << "-" << "Mar" << "-" << y << endl;
//       break;

//     case 4:
//       cout << d << "-" << "April" << "-" << y << endl;
//       break;

//     case 5:
//       cout << d << "-" << "May" << "-" << y << endl;
//       break;

//     case 6:
//       cout << d << "-" << "June" << "-" << y << endl;
//       break;

//     case 7:
//       cout << d << "-" << "July" << "-" << y << endl;
//       break;

//     case 8:
//       cout << d << "-" << "Aug" << "-" << y << endl;
//       break;

//     case 9:
//       cout << d << "-" << "Sept" << "-" << y << endl;
//       break;

//     case 10:
//       cout << d << "-" << "Oct" << "-" << y << endl;
//       break;

//     case 11:
//       cout << d << "-" << "Nov" << "-" << y << endl;
//       break;

//     case 12:
//       cout << d << "-" << "Dec" << "-" << y << endl;
//       break;
//     }
//   }
// };

// int main() {
//   Date d1;
//   d1.setDate(2, 12, 2006);
//   d1.showDate();
//   return 0;
// }

// class Circle {
// private:
//   int r;

// public:
//   void setRadius(int r1) { r = r1; }
//   void showRadius() { cout << "Radius: " << r << endl; }
//   float calAreaOfCircle(int r1) { return 3.14 * r * r; }
//   float calCircumferenceOfCircle(int r1) { return 2 * 3.14 * r; }
// };

// int main() {
//   Circle c1;
//   c1.setRadius(10);
//   c1.showRadius();
//   cout << "Area of circle: " << c1.calAreaOfCircle(10) << endl;
//   cout << "Circumference of circle: " << c1.calCircumferenceOfCircle(10)<< endl;

//   return 0;
// };