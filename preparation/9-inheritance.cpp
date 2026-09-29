#include <iostream>
using namespace std;

// class Animal
// {
// public:
//     void eat()
//     {
//         cout << "Animal eats" << endl;
//     }
// };

// class Dog : public Animal
// {
// public:
//     void bark()
//     {
//         cout << "Dog barks" << endl;
//     }
// };

// class Animal
// {
// public:
//     void eat()
//     {
//         cout << "Animal eats" << endl;
//     }
// };

// class Dog : public Animal
// {
// public:
//     void bark()
//     {
//         cout << "Dog barks" << endl;
//     }
// };

// class Puppy : public Dog
// {
// public:
//     void play()
//     {
//         cout << "Puppy plays" << endl;
//     }
// };

class Father {
public:
  void fatherProperty() { cout << "Father's property" << endl; }
};

class Mother {
public:
  void motherProperty() { cout << "Mother's property" << endl; }
};

class Child : public Father, public Mother {
public:
  void childProperty() { cout << "Child's own property" << endl; }
};

class Animal {
public:
  void eat() { cout << "Animal eats" << endl; }
};

class Dog : public Animal {
public:
  void bark() { cout << "Dog barks" << endl; }
};

class Cat : public Animal {
public:
  void meow() { cout << "Cat meows" << endl; }
};

class Person {
public:
  void showPerson() { cout << "I am a person" << endl; }
};

class Student : virtual public Person {
public:
  void study() { cout << "Student studies" << endl; }
};

class Employee : virtual public Person {
public:
  void work() { cout << "Employee works" << endl; }
};

class Intern : public Student, public Employee {
public:
  void training() { cout << "Intern is in training" << endl; }
};

int main() {
  // Dog d;
  // d.eat();   // inherited function
  // d.bark();  // own function

  // Puppy p;
  // p.eat();   // From Animal
  // p.bark();  // From Dog
  // p.play();  // Own function

  // Child c;
  // c.fatherProperty();
  // c.motherProperty();
  // c.childProperty();

  // Dog d;
  // Cat c;
  // d.eat();
  // d.bark();
  // c.eat();
  // c.meow();

  Intern i;
  i.showPerson();
  i.study();
  i.work();
  i.training();

  return 0;
}