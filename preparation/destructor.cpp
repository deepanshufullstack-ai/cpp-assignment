#include <iostream>
using namespace std;

class Vehicle {
public:
  virtual ~Vehicle() { cout << "Vehicle destructor" << endl; }
};

class Car : public Vehicle {
public:
  ~Car() { cout << "Car destructor" << endl; }
};

class Animal {
public:
  // Pure virtual function
  virtual void sound() = 0;

  // Virtual destructor
  virtual ~Animal() { cout << "Animal destructor" << endl; }
};

class Dog : public Animal {
public:
  void sound() { cout << "Dog says: Bark" << endl; }

  ~Dog() { cout << "Dog destructor" << endl; }
};

class Cat : public Animal {
public:
  void sound() { cout << "Cat says: Meow" << endl; }

  ~Cat() { cout << "Cat destructor" << endl; }
};

int main() {
  // Vehicle *v = new Car();
  // delete v;

  Animal *a1 = new Dog();
  Animal *a2 = new Cat();

  a1->sound();
  a2->sound();

  delete a1;
  delete a2;

  return 0;
}

// Virtual Destructor
// A virtual destructor is used when we delete a derived-class object through a
// base-class pointer. If the base destructor is not virtual, deleting through
// the base pointer can result in only the base destructor being used, and the
// derived object's destruction may not happen correctly.