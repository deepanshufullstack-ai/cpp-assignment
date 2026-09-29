#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void start() = 0;
};

class Car : public Vehicle
{
public:
    void start()
    {
        cout << "Car starts with key" << endl;
    }
};

class Bike : public Vehicle
{
public:
    void start()
    {
        cout << "Bike starts with self-start button" << endl;
    }
};

int main()
{
    // Vehicle v;  // Error: cannot create object of abstract class

    Car c;
    Bike b;

    c.start();
    b.start();

    return 0;
}



// An abstract class is a class that cannot be used to create objects directly.
// It is mainly used as a base class to provide a common structure/interface for derived classes.
// Vehicle v;        ❌ Not allowed
// Vehicle *v;       ✅ Allowed
// Vehicle &ref;     ✅ Declaration possible when bound to derived object