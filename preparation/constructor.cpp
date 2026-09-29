// Constructor
// a constructor is a special member function that is automatically called when
// an object is created. Its main purpose is to initialize the object's data
// members. Constructor name is the same as the class name. It has no return
// type, not even void. It is automatically called when an object is created. It
// is mainly used for initialization. A class can have multiple constructors
// using constructor overloading.

// Move Constructor
// A move constructor creates a new object by taking resources from an existing
// temporary/rvalue object.

// Default Constructor
#include <iostream>
using namespace std;

class Student {
private:
  int rollNo;
  string name;

public:
  Student() {
    rollNo = 0;
    name = "Unknown";
  }

  void display() {
    cout << "Roll No: " << rollNo << endl;
    cout << "Name: " << name << endl;
  }
};

int main() {
  Student s;

  s.display();

  return 0;
}

// Parameterized Constructor
#include <iostream>
using namespace std;

class Employee {
private:
  int id;
  string name;

public:
  Employee(int i, string n) {
    id = i;
    name = n;
  }

  void display() {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
  }
};

int main() {
  Employee e(101, "Rahul");

  e.display();

  return 0;
}

// Copy Constructor
#include <iostream>
using namespace std;

class Student {
private:
  int rollNo;
  string name;

public:
  Student(int r, string n) {
    rollNo = r;
    name = n;
  }

  Student(const Student &s) {
    rollNo = s.rollNo;
    name = s.name;
  }

  void display() { cout << rollNo << " " << name << endl; }
};

int main() {
  Student s1(101, "Rahul");

  Student s2 = s1;

  s1.display();
  s2.display();

  return 0;
}

// Constructor Overloading
#include <iostream>
using namespace std;

class Student {
private:
  int rollNo;
  string name;

public:
  // Default constructor
  Student() {
    rollNo = 0;
    name = "Unknown";
  }

  // One parameter
  Student(int r) {
    rollNo = r;
    name = "Unknown";
  }

  // Two parameters
  Student(int r, string n) {
    rollNo = r;
    name = n;
  }

  void display() { cout << rollNo << " " << name << endl; }
};

int main() {
  Student s1;
  Student s2(101);
  Student s3(102, "Amit");

  s1.display();
  s2.display();
  s3.display();

  return 0;
}

// Dynamic Constructor
#include <iostream>
using namespace std;

class Student {
private:
  int *marks;
  int size;

public:
  Student(int n) {
    size = n;
    marks = new int[size];

    cout << "Memory allocated for " << size << " marks" << endl;
  }

  ~Student() {
    delete[] marks;

    cout << "Memory released" << endl;
  }
};

int main() {
  Student s(5);

  return 0;
}

// Constructor with Default Arguments
#include <iostream>
using namespace std;

class Employee {
private:
  int id;
  string name;

public:
  Employee(int i = 0, string n = "Unknown") {
    id = i;
    name = n;
  }

  void display() { cout << id << " " << name << endl; }
};

int main() {
  Employee e1;
  Employee e2(101);
  Employee e3(102, "Rahul");

  e1.display();
  e2.display();
  e3.display();

  return 0;
}

// Constructor using Initialization List
class Student {
private:
  int rollNo;
  string name;

public:
  Student(int r, string n) : rollNo(r), name(n) {}
};

// Constructor and Destructor together
#include <iostream>
using namespace std;

class Student {
public:
  Student() { cout << "Constructor called" << endl; }

  ~Student() { cout << "Destructor called" << endl; }
};

int main() {
  Student s;

  return 0;
}

// Move Constructor
#include <iostream>
using namespace std;

class Number {
private:
  int *data;

public:
  Number(int value) {
    data = new int(value);
    cout << "Constructor called" << endl;
  }

  // Move constructor
  Number(Number &&other) {
    data = other.data;

    other.data = nullptr;

    cout << "Move constructor called" << endl;
  }

  void display() {
    if (data != nullptr)
      cout << "Value: " << *data << endl;
  }

  ~Number() { delete data; }
};

int main() {
  Number n1(100);

  Number n2 = std::move(n1);

  n2.display();

  return 0;
}

// Move assignment constructor
#include <iostream>
using namespace std;

class Number
{
private:
    int *data;

public:
    Number(int value)
    {
        data = new int(value);
    }

    // Move constructor
    Number(Number&& other)
    {
        data = other.data;
        other.data = nullptr;

        cout << "Move constructor" << endl;
    }

    // Move assignment
    Number& operator=(Number&& other)
    {
        if (this != &other)
        {
            delete data;

            data = other.data;
            other.data = nullptr;
        }

        cout << "Move assignment" << endl;

        return *this;
    }

    void display()
    {
        if (data)
            cout << *data << endl;
    }

    ~Number()
    {
        delete data;
    }
};

int main()
{
    Number n1(100);
    Number n2(200);

    n2 = std::move(n1);

    n2.display();

    return 0;
}