// #include <fstream>
// #include <iostream>
// #include <string>
// using namespace std;
// struct Person {
//   int id;
//   string name;
//   double salary;
// };
// int main() {
//   int n;
//   cout << "Enter number of persons: ";
//   cin >> n;

//   Person *p = new Person[n];

//   for (int i = 0; i < n; i++) {
//     cout << "\nEnter details of person" << i + 1 << endl;
//     cout << "Enter ID: ";
//     cin >> p[i].id;

//     cout << "Enter Name: ";
//     cin >> p[i].name;

//     cout << "Enter Salary: ";
//     cin >> p[i].salary;
//   }

//   ofstream file;
//   file.open("person.txt", ios::app);
//   if (!file) {
//     cout << "File could not be opened";
//     delete[] p;
//     return 1;
//   }

//   for (int i = 0; i < n; i++) {
//     file << p[i].id << "\n";
//     file << p[i].name << "\n";
//     file << p[i].salary << "\n";
//   }
//   file.close();
//   cout << "\nData successfully written to file";
//   delete[] p;

//   ifstream file1;
//   file1.open("person.txt", ios::in);

//   if (!file1) {
//     cout << "File could not be opened";
//     return 1;
//   }

//   int id;
//   string name;
//   double salary;

//   while (file1 >> id >> name >> salary) {
//     cout << "Id: " << id << "\n";
//     cout << "Name: " << name << "\n";
//     cout << "Salary: " << salary << "\n";
//     cout << "--------------------\n";
//   }

//   file1.close();

//   return 0;
// }

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

struct Person {
  int id;
  string name;
  double salary;
};

int main() {
  int choice;
  int personId;

  do {
    cout << "\n1. Add Person";
    cout << "\n2. Display All Persons";
    cout << "\n3.Search by ID";
    cout << "\n4. Extract persons from file";
    cout << "\n5. Edit by ID";
    cout << "\n6. Delete by ID";
    cout << "\n7.exit";

    cout << "\n\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1: {
      int n;
      cout << "\nEnter number of person: ";
      cin >> n;

      Person *p = new Person[n];

      for (int i = 0; i < n; i++) {
        cout << "\nEnter details of person " << i + 1 << endl;
        cout << "Enter ID: ";
        cin >> p[i].id;
        cout << "Enter name: ";
        cin >> p[i].name;
        cout << "Enter salary: ";
        cin >> p[i].salary;
      }

      ofstream write;
      write.open("person.txt", ios::app);
      if (!write) {
        cout << "\nFile could not be opened" << endl;
        return 1;
      }

      for (int i = 0; i < n; i++) {
        write << p[i].id << "\n";
        write << p[i].name << "\n";
        write << p[i].salary << "\n";
      }

      write.close();
      cout << "\nData written successfully" << endl;
      delete[] p;
      break;
    }

    case 2: {
      ifstream read;
      read.open("person.txt", ios::in);
      if (!read) {
        cout << "\nFile could not be opened" << endl;
        return 1;
      }

      int id;
      string name;
      double salary;

      cout << "\n";
      while (read >> id >> name >> salary) {
        cout << "ID: " << id << "\n";
        cout << "Name: " << name << "\n";
        cout << "Salary: " << salary << "\n";
        cout << "----------------\n";
      }

      read.close();
      break;
    }

    case 3: {
      cout << "\nEnter ID to search: ";
      cin >> personId;

      ifstream read;
      read.open("person.txt", ios::in);
      if (!read) {
        cout << "\nFile could not be opened" << endl;
        return 1;
      }

      int id;
      string name;
      double salary;

      cout << "\n";
      while (read >> id >> name >> salary) {
        if (id == personId) {
          cout << "ID: " << id << "\n";
          cout << "Name: " << name << "\n";
          cout << "Salary: " << salary << "\n";
          cout << "----------------\n";
          break;
        }
      }

      read.close();
      break;
    }

    case 4: {
      ifstream source;
      ofstream destination;
      source.open("existingData.txt", ios::in);
      destination.open("data.txt", ios::out);
      if (!source || !destination) {
        cout << "File could not be opened";
        return 1;
      }

      string data;

      while (getline(source, data)) {
        destination << data << endl;
      }

      source.close();
      destination.close();
      cout << "\nData copied successfully";
      break;
    }

    case 5: {
      ifstream read;
      ofstream temp;
      read.open("person.txt", ios::in);
      temp.open("temp.txt", ios::out);

      if (!read || !temp) {
        cout << "\nFile could not be opened";
        return 1;
      }
    }

    case 6: {
    }

    case 7: {
      exit(0);
    }

    default: {
      cout << "Invalid choice";
    }
    }
  } while (choice != 7);
  return 0;
}
