#include <cmath>
#include <cstring>
#include <iostream>
#include <string.h>
using namespace std;

// class Person {
//    private:
//    char name[20];
//    int age;
//    protected:
//    void setName( char n[] ){
//        strcpy(name, n);
//    }
//    void setAge( int a ){
//        age=a;
//    }
//    char* getName(){
//        return name;
//    }
//    int getAge(){
//        return age;
//    }
// };

// class Employee: public Person {
//    private:
//    float salary;
//    public:
//    void setEmployee(char n1[], int a1, float s){
//        setName(n1);
//        setAge(a1);
//        salary=s;
//    }
//    void getEmployee(){
//        cout<<getName()<<endl;
//        cout<<getAge()<<endl;
//        cout<<salary<<endl;
//    }
// };

// int main(){
//    Employee e1;
//    char name[20]="Deepanshu";
//    e1.setEmployee(name, 22, 25000);
//    e1.getEmployee();
//    return 0;
// }

// class Circle {
// private:
//   int radius;

// public:
//   void setRadius(int r) { radius = r; }
//   int getRadius() { return radius; }
//   float getArea() { return 3.14 * radius * radius; }
// };

// class ThickCircle : public Circle {
// private:
//   int thickness;

// public:
//   void setThickness(int t) { thickness = t; }
//   int getThickness() { return thickness; }
//   float getArea() {
//     return 3.14 * (getRadius() + thickness) * (getRadius() + thickness) -
//            3.14 * getRadius() * getRadius();
//   }
// };

// int main() {
//   ThickCircle c;
//   c.setRadius(10);
//   c.setThickness(2);
//   cout << c.getRadius() << endl;
//   cout << c.getThickness() << endl;
//   cout << c.getArea() << endl;
//   return 0;
// }

class Coordinate {
private:
  int x, y;

public:
  Coordinate() {
    x = 0;
    y = 0;
  }

  Coordinate(int x, int y) {
    this->x = x;
    this->y = y;
  }

  void setCoordinate(int x, int y) {
    this->x = x;
    this->y = y;
  }

  int getX() { return x; }

  int getY() { return y; }

  double getDistance() { return sqrt(x * x + y * y); }

  double getDistance(Coordinate c) {
    int dx = x - c.x;
    int dy = y - c.y;

    return sqrt(dx * dx + dy * dy);
  }

  void showCoordinate() { cout << "(" << x << ", " << y << ")"; }
};

class Shape {
private:
  string shapeName;

public:
  void setShapeName(string name) { shapeName = name; }

  string getShapeName() { return shapeName; }
};

class StraightLine : public Shape {
private:
  Coordinate c1;
  Coordinate c2;

public:
  void setLine(Coordinate c1, Coordinate c2) {
    this->c1 = c1;
    this->c2 = c2;
  }

  double getDistance() { return c1.getDistance(c2); }

  void showLine() {
    cout << "Shape Name: " << getShapeName() << endl;

    cout << "Point 1: ";
    c1.showCoordinate();

    cout << endl;

    cout << "Point 2: ";
    c2.showCoordinate();

    cout << endl;

    cout << "Distance: " << getDistance() << endl;
  }
};

int main() {
  Coordinate c1(3, 4);
  Coordinate c2(6, 8);
  cout << "Distance of c1 from origin: " << c1.getDistance() << endl;
  cout << "Distance between c1 and c2: " << c1.getDistance(c2) << endl;

  StraightLine line;
  line.setShapeName("Straight Line");
  line.setLine(c1, c2);
  line.showLine();

  return 0;
}