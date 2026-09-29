#include <fstream>
#include <iostream>
using namespace std;

class Student {
private:
  int rollNo;
  string name;
  float marks;

public:
  void setData() {
    cout << "Enter Roll No: ";
    cin >> rollNo;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Marks: ";
    cin >> marks;
  }
  void display() {
    cout << "\nRoll No: " << rollNo;
    cout << "\nName: " << name;
    cout << "\nMarks: " << marks << endl;
  }
  void saveToFile() {
    ofstream file("student.txt");
    file << rollNo << endl;
    file << name << endl;
    file << marks << endl;
    file.close();
  }
  void readFromFile() {
    ifstream file("student.txt");
    file >> rollNo;
    file >> name;
    file >> marks;
    file.close();
  }
};
int main() {
  Student s;
  s.setData();
  s.saveToFile();
  cout << "\nData saved successfully.";
  Student s2;
  s2.readFromFile();

  cout << "\n\nData read from file:";
  s2.display();
  return 0;
}

// In C++ OOP, file handling means storing and reading data from a file using
// classes and objects. The main classes used are ofstream, ifstream, and
// fstream.

// ofstream - Write data to a file
// ifstream	- Read data from a file
// fstream - Both read and write

// In an object-oriented approach, we can create a class such as Student and use
// its member functions to save and read student data.