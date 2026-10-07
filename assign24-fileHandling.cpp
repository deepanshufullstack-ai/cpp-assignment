// #include <fstream>
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//   ofstream file;
//   file.open("file.text", ios::out);
//   file << "Hello";
//   file << "\nWorld";
//   file.close();

//   ifstream file1;
//   ofstream file2;
//   file1.open("file.text", ios::in);
//   file2.open("file1.text", ios::out);

//   if (!file1) {
//     cout << "File not found";
//   } else {
//     string data;
//     while (getline(file1, data)) {
//       file2 << data << "\n";
//     }
//   }
//   return 0;
// }

// #include <fstream>
// #include <iostream>
// using namespace std;
// int main() {
//   ifstream file1;
//   file1.open("file1.txt", ios::in);
//   ofstream file2;
//   file2.open("file2.txt", ios::out);

//   if (!file1) {
//     cout << "File not found";
//     exit(1);
//   }

//   if (!file2) {
//     cout << "File not found";
//     exit(1);
//   }

//   char ch;
//   while (file1.get(ch)) {
//     file2.put(ch);
//   }

//   file1.close();
//   file2.close();
//   cout << "Data copied successfully";

//   return 0;
// }

// #include<iostream>
// #include<fstream>
// #include <string>
// using namespace std;
// int main(){
//   ifstream file;
//   file.open("source.txt");
//   if(!file){
//     cout<<"File not found";
//     return 1;
//   }
//   string line;
//   while(getline(file, line)){
//     cout<<line<<"\n";
//   }
//   file.close();
//   return 0;
// }

#include <fstream>
#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
  int empid;
  string name;
  double salary;

public:
  void input() {
    cout << "Enter employee ID: ";
    cin >> empid;

    cout << "Enter employee Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter employee Salary: ";
    cin >> salary;
  }
  void display() {
    cout << "\n Employee Details" << endl;
    cout << "Employee ID:" << empid << endl;
    cout << "Employee Name:" << name << endl;
    cout << "Employee Salary:" << salary << endl;
  }
  void writeToFile() {
    ofstream file;
    file.open("employee.dat", ios::out);
    file << empid << "\n";
    file << name << "\n";
    file << salary << "\n";
    file.close();
  }
  void readFromFile() {
    ifstream file;
    file.open("employee.dat", ios::out);
    if (!file) {
      cout << "File not found";
      exit(0);
    }
    file >> empid;
    file.ignore();
    getline(file, name);
    file >> salary;
    file.close();
  }
};
int main() {
  Employee e;
  e.input();
  e.writeToFile();
  e.readFromFile();
  e.display();
  return 0;
}

// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
// return 0;
// }