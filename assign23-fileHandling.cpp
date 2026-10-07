#include <cstring>
#include <fstream>
#include <iostream>
#include <stdio.h>
using namespace std;

class Employee {
private:
  int id;
  char name[30];
  float salary;
  const static char fileName[];

public:
  Employee() {}
  Employee(int id, char name[], float salary) {
    this->id = id;
    strcpy(this->name, name);
    this->salary = salary;
  }
  void show() {
    cout << "Employee ID: " << id << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Employee Salary: " << salary << endl;
  }
  void save() {
    ofstream fout;
    // fout.open(fileName, ios::app | ios::binary);
    fout.open(fileName, ios::app);

    fout.write((char *)this, sizeof(*this));
    fout.close();
  }
  static void read() {
    Employee e1;
    ifstream fin;
    // fin.open(fileName, ios::in | ios::binary);
    fin.open(fileName, ios::in);

    if (!fin) {
      cout << "File not found";
    } else {
      fin.read((char *)&e1, sizeof(e1));
      while (!fin.eof()) {
        e1.show();
        fin.read((char *)&e1, sizeof(e1));
      }
    }
    fin.close();
  }
};

const char Employee::fileName[] = "employee.dat";

int main() {
  Employee *e[] = {new Employee(1, "deepanshu", 50000),
                   new Employee(2, "vikas", 60000),
                   new Employee(3, "mohit", 70000)};
  for (int i = 0; i <= 2; i++) {
    e[i]->save();
  }
  Employee::read();
  rename("employee.dat", "employee.txt");
  remove("employee.txt");
  return 0;
}