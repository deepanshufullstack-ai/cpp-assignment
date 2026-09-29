#include<iostream>
using namespace std;

// Pure Virtual Function - No Body in Base Class
// class Animal {
//     public: 
//     virtual void sound()=0;
// };

// class Dog: public Animal {
//     public:
//     void sound() override {
//         cout<<"Dog barks"<<endl;
//     }
// };

// class Animal {
//     public:
//     virtual void sound()=0;
// };

// class Dog: public Animal {
//     void sound() override {
//         cout<<"Dog barks"<<endl;
//     }
// };


// Abstract Class with Multiple Derived Classes
class Shape {
    public: 
    virtual void area()=0;
};

class Circle: public Shape {
    public:
    void area() override {
        cout << "Area of Circle" << endl;
    }
};

class Rectangle: public Shape {
    public:
    void area() override {
        cout << "Area of Rectangle" << endl;
    }
};

int main(){
    // Dog d;
    // d.sound();

    // Animal *ptr;
    // Dog d;
    // ptr=&d;
    // ptr->sound();

    Shape *ptr;
    
    Circle c;
    Rectangle r;
    
    ptr=&c;
    ptr->area();

    ptr=&r;
    ptr->area();
    return 0;
}

// Pure Virtual Function
// A pure virtual function is a virtual function with = 0.
// here virtual void sound() = 0;
// does not provide a normal implementation in the base class.
// It says derived classes must provide their own implementation.

// a class containing at least one pure virtual function is called an abstract class
// therefore we cannot do Animal a;
// but we can do Animal *ptr

