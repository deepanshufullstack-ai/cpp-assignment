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

// #include <fstream>
// #include <iostream>
// #include <string>
// using namespace std;
// class Employee {
// private:
//   int empid;
//   string name;
//   double salary;
// public:
//   void input() {
//     cout << "Enter employee ID: ";
//     cin >> empid;
//     cout << "Enter employee Name: ";
//     cin.ignore();
//     getline(cin, name);
//     cout << "Enter employee Salary: ";
//     cin >> salary;
//   }
//   void display() {
//     cout << "\n Employee Details" << endl;
//     cout << "Employee ID:" << empid << endl;
//     cout << "Employee Name:" << name << endl;
//     cout << "Employee Salary:" << salary << endl;
//   }
//   void writeToFile() {
//     ofstream file;
//     file.open("employee.dat", ios::out);
//     file << empid << "\n";
//     file << name << "\n";
//     file << salary << "\n";
//     file.close();
//   }
//   void readFromFile() {
//     ifstream file;
//     file.open("employee.dat", ios::out);
//     if (!file) {
//       cout << "File not found";
//       exit(0);
//     }
//     file >> empid;
//     file.ignore();
//     getline(file, name);
//     file >> salary;
//     file.close();
//   }
// };
// int main() {
//   Employee e;
//   e.input();
//   e.writeToFile();
//   e.readFromFile();
//   e.display();
//   return 0;
// }

// #include <cstdlib>
// #include <fstream>
// #include <iostream>
// #include <ostream>
// #include <string>
// using namespace std;
// class Employee {
// private:
//   int empid;
//   string name;
//   double salary;

// public:
//   void input() {
//     cout << "Id: ";
//     cin >> empid;
//     cout << "Name: ";
//     cin.ignore();
//     getline(cin, name);
//     cout << "Salary: ";
//     cin >> salary;
//   }
//   void display() {
//     cout << "\n Employee Details" << endl;
//     cout << "Employee ID:" << empid << endl;
//     cout << "Employee Name:" << name << endl;
//     cout << "Employee Salary:" << salary << endl;
//   }
//   void writeToFile() {
//     ofstream file;
//     file.open("employee.txt", ios::out);
//     if (!file) {
//       cout << "File not found";
//       exit(1);
//     }
//     file << empid << endl;
//     file << name << endl;
//     file << salary << endl;
//     file.close();
//   }
//   void readFromFile() {
//     ifstream file;
//     file.open("employee.txt", ios::in);
//     if (!file) {
//       cout << "File not found";
//       exit(1);
//     }
//     file >> empid;
//     file.ignore();
//     getline(file, name);
//     file >> salary;
//     file.close();
//   }
//   void searchEmployee(int searchId) {
//     ifstream file;
//     file.open("employee.txt", ios::in);
//     if (!file) {
//       cout << "File not found";
//       exit(1);
//     }
//     int id;
//     string empName;
//     double empSalary;

//     bool found = false;

//     while (file >> id) {
//       file.ignore();
//       getline(file, empName);
//       file >> empSalary;
//       if (id == searchId) {
//         cout << "\nEmployee Found!" << endl;
//         cout << "Id: " << id << endl;
//         cout << "Name: " << empName << endl;
//         cout << "Salary: " << empSalary << endl;
//         found = true;
//         break;
//       }
//     }
//     if (!found) {
//       cout << "\nSearch failed: Employee not found" << endl;
//     }
//     file.close();
//   }
// };
// int main() {
//   Employee e;
//   int id;
//   e.input();
//   e.writeToFile();
//   e.readFromFile();
//   e.display();

//   cout << "Enter Employee Id to search: " << endl;
//   cin >> id;
//   e.searchEmployee(id);
//   return 0;
// }

#include <cstdio> // remove(), rename()
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
  // Input employee details
  void input() {
    cout << "Enter Employee ID: ";
    cin >> empid;

    cout << "Enter Employee Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Employee Salary: ";
    cin >> salary;
  }

  // Write employee details into file
  void writeToFile() {
    ofstream file("employee.txt", ios::app);

    if (!file) {
      cout << "File could not be opened!" << endl;
      return;
    }

    file << empid << endl;
    file << name << endl;
    file << salary << endl;

    file.close();

    cout << "\nEmployee added successfully!" << endl;
  }

  // Search employee by empid
  void searchEmployee(int searchId) {
    ifstream file("employee.txt");

    if (!file) {
      cout << "File could not be opened!" << endl;
      return;
    }

    int id;
    string empName;
    double empSalary;

    bool found = false;

    while (file >> id) {
      file.ignore();
      getline(file, empName);
      file >> empSalary;

      if (id == searchId) {
        cout << "\nEmployee Found!" << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Employee Salary: " << empSalary << endl;

        found = true;
        break;
      }
    }

    if (!found) {
      cout << "\nSearch Failed: Employee not found!" << endl;
    }

    file.close();
  }

  // Edit employee data by empid
  void editEmployee(int searchId) {
    ifstream file("employee.txt");
    ofstream temp("temp.txt");

    if (!file || !temp) {
      cout << "File could not be opened!" << endl;
      return;
    }

    int id;
    string empName;
    double empSalary;

    bool found = false;

    while (file >> id) {
      file.ignore();
      getline(file, empName);
      file >> empSalary;

      if (id == searchId) {
        found = true;

        cout << "\nEmployee Found!" << endl;
        cout << "Enter New Employee Name: ";
        cin.ignore();
        getline(cin, empName);

        cout << "Enter New Employee Salary: ";
        cin >> empSalary;
      }

      // Write record to temporary file
      temp << id << endl;
      temp << empName << endl;
      temp << empSalary << endl;
    }

    file.close();
    temp.close();

    if (found) {
      remove("employee.txt");
      rename("temp.txt", "employee.txt");

      cout << "\nEmployee data updated successfully!" << endl;
    } else {
      remove("temp.txt");

      cout << "\nSearch Failed: Employee not found!" << endl;
    }
  }

  // Delete employee by empid
  void deleteEmployee(int searchId) {
    ifstream file("employee.txt");
    ofstream temp("temp.txt");

    if (!file || !temp) {
      cout << "File could not be opened!" << endl;
      return;
    }

    int id;
    string empName;
    double empSalary;

    bool found = false;

    while (file >> id) {
      file.ignore();
      getline(file, empName);
      file >> empSalary;

      if (id == searchId) {
        found = true;

        // Do not write this record
        continue;
      }

      // Write other records to temp file
      temp << id << endl;
      temp << empName << endl;
      temp << empSalary << endl;
    }

    file.close();
    temp.close();

    if (found) {
      remove("employee.txt");
      rename("temp.txt", "employee.txt");

      cout << "\nEmployee deleted successfully!" << endl;
    } else {
      remove("temp.txt");

      cout << "\nSearch Failed: Employee not found!" << endl;
    }
  }

  // Display all employees
  void displayAllEmployee() {
    ifstream file("employee.txt");

    if (!file) {
      cout << "File could not be opened!" << endl;
      return;
    }

    int id;
    string empName;
    double empSalary;

    cout << "\n===== ALL EMPLOYEES =====" << endl;
    cout << "ID\tName\tSalary" << endl;

    while (file >> id) {
      file.ignore();
      getline(file, empName);
      file >> empSalary;

      cout << id << "\t" << empName << "\t" << empSalary << endl;
    }

    file.close();
  }
};

int main() {
  Employee e;
  int choice;
  int searchId;

  do {
    cout << "\n===== EMPLOYEE MANAGEMENT =====" << endl;
    cout << "1. Add Employee" << endl;
    cout << "2. Search Employee" << endl;
    cout << "3. Edit Employee" << endl;
    cout << "4. Delete Employee" << endl;
    cout << "5. Display All Employee" << endl;
    cout << "6. Exit" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
      e.input();
      e.writeToFile();
      break;

    case 2:
      cout << "Enter Employee ID to search: ";
      cin >> searchId;

      e.searchEmployee(searchId);
      break;

    case 3:
      cout << "Enter Employee ID to edit: ";
      cin >> searchId;

      e.editEmployee(searchId);
      break;

    case 4:
      cout << "Enter Employee ID to delete: ";
      cin >> searchId;

      e.deleteEmployee(searchId);
      break;

    case 5:
      cout << "\nDisplay All Employee" << endl;
      e.displayAllEmployee();
      break;

    case 6:
      cout << "\nProgram terminated." << endl;
      break;

    default:
      cout << "\nInvalid choice!" << endl;
    }

  } while (choice != 6);

  return 0;
}
