#include <iostream>
#include <istream>
#include <ostream>
#include <string.h>
using namespace std;

// class Complex {
//     private:
//     int a, b;
//     public:
//     void setData(int x, int y){
//         a=x;
//         b=y;
//     }
//     void getData(){
//         cout<<"a="<<a<<endl;
//         cout<<"b="<<b<<endl;
//     }
//     friend Complex operator - (Complex);
// };

class Integer {
    private:
    int a;
    public:
    Integer(){
        a=0;
    }
    Integer(int a){
        this->a=a;
    }
    void getData(){
        cout<<a<<endl;
    }
    friend bool operator!(Integer);
    friend bool operator==(Integer, Integer);
};

bool operator!(Integer i){
    return !(i.a);
}

bool operator==(Integer i1, Integer i2){
    return i1.a == i2.a;
}

int main(){
    Integer i1, i2(20);
    i1.getData();
    i2.getData();
    if(!i1){
        cout<<"i1 is zero"<<endl;
    }

    if(i1==i2){
        cout<<"i1 and i2 are equal"<<endl;
    } else {
        cout<<"i1 and i3 are not equal"<<endl;
    }
    return 0;
}

// Complex operator - (Complex c){
//     Complex temp;
//     temp.a = -c.a;
//     temp.b = -c.b;
//     return temp;
// }

// int main(){
//     Complex c1, c2;
//     c1.setData(1,2);
//     c2.setData(3,4);
//     c1.getData();
//     c2.getData();
//     Complex c3;
//     c3 = -c1;
//     c3.getData();
//     return 0;
// }

// class Cordinate {
// private:
//   int x, y;

// public:
//   Cordinate() {
//     x = 0;
//     y = 0;
//   }
//   Cordinate(int x, int y) {
//     this->x = x;
//     this->y = y;
//   }
//   Cordinate operator,(Cordinate c) { return c; }
//   void getData() { cout << "x=" << x << " y=" << y << endl; }
//   friend ostream &operator<<(ostream &, Cordinate);
//   friend istream &operator>>(istream &, Cordinate);
// };

// ostream &operator<<(ostream &dout, Cordinate c) {
//   dout << "x=" << c.x << " y=" << c.y << endl;
//   return dout;
// }

// istream &operator>>(istream &din, Cordinate c) {
//   din >> c.x >> c.y;
//   return din;
// }

// int main() {
//   Cordinate c1(10, 20), c2(30, 40), c3;
//   c1.getData();
//   c2.getData();
//   c3 = (c1, c2);
//   c3.getData();

//   Cordinate c4;
//   cout << "Enter a value of x & y: " << endl;
//   cin >> c4;
//   cout << "The x & y value is: " << c4;
//   return 0;
// }

// class Student {
// private:
//   int rollno;
//   char name[40];
//   int age;

// public:
//   void setStudent(int r, char n[], int a) {
//     rollno = r;
//     strcpy(name, n);
//     age = a;
//   }
//   void showStudent() {
//     cout << "Student rollno: " << rollno << endl;
//     cout << "Student name: " << name << endl;
//     cout << "Student age: " << age << endl;
//   }
//   bool operator==(Student s) {
//     return rollno == s.rollno && (!strcmp(name, s.name) && age == s.age);
//   };
// };

// int main() {
//   Student s1, s2;
//   s1.setStudent(1, "Deepanshu", 20);
//   s2.setStudent(1, "Deepanshu", 20);
//   if (s1 == s2) {
//     cout << "Students are equal" << endl;
//   } else {
//     cout << "Students are not equal" << endl;
//   }
//   return 0;
// }
