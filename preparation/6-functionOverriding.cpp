#include<iostream>
using namespace std;

// Function Overriding
// class Animal {
//     public: 
//     void sound(){ // If the function is not virtual, C++ uses the pointer/reference type.
//         cout<<"Animal makes sound"<<endl;
//     }
// };
// class Dog: public Animal {
//     public: 
//     void sound(){
//         cout<<"Dog barks"<<endl;
//     }
// };

// Virtual Function
// class Animal {
//     public: 
//     virtual void sound(){
//         cout<<"Animal makes sound"<<endl;
//     }
// };
// class Dog: public Animal {
//     public: 
//     void sound() override{
//         cout<<"Dog barks"<<endl;
//     }
// };

// Runtime Polymorphism
class Animal {
    public:
    virtual void sound(){ // If the function is virtual, C++ uses the actual object type.
        cout<<"Animal sound"<<endl;
    }
};

class Dog: public Animal {
    public:
    void sound() override { // I intend to override a virtual function from the base class.
        cout<<"Dog barks"<<endl;
    }
};

class Cat: public Animal {
    public:
    void sound() override {
        cout<<"Cat meows"<<endl;
    }
};

// Base Class Reference and Runtime Polymorphism
void makeSound(Animal &a){
    a.sound();
}

int main(){
    // Dog d;
    // d.sound();

    // Animal *ptr;
    // Dog d;
    // ptr=&d;
    // ptr->sound();

    // Animal *ptr;
    // Dog d;
    // ptr=&d;
    // ptr->sound();

    // Animal *ptr;
    // Dog d;
    // Cat c;

    // ptr=&d;
    // ptr->sound();
    
    // ptr=&c;
    // ptr->sound();

    Dog d;
    makeSound(d);
    return 0;
}

// Function Overriding
// Function overriding occurs when a derived class provides its own implementation of a function already defined in the base class.

// If sound() is not virtual, the base version is selected when using the base pointer.
// Because sound() is not virtual.
// The compiler uses the type of pointer.

// Virtual Function
// A virtual function allows C++ to select the overridden function based on the actual object at runtime.

// Runtime Polymorphism
// Runtime polymorphism means the function to execute is decided during runtime.