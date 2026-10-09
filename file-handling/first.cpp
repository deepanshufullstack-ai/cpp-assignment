#include <fstream>
#include <iostream>
#include <string>

using namespace std;

struct DateOfBirth
{
 int date;
 int month;
 int year;
};

struct Person
{
 int sno;
 int id;
 string name;
 string address;
 int age;
 int gender;
 string occupation;
 int workingStatus;
 int category;
 string contactNo;
 double monthlyIncome;
 int maritalStatus;
 DateOfBirth DOB;
};

int main()
{
 int choice;
 int personId;

 do
 {
 cout << "\n1. Add Person";
 cout << "\n2. Display All Persons";
 cout << "\n3. Search by ID";
 cout << "\n4. Extract persons from file";
 cout << "\n5. Edit by ID";
 cout << "\n6. Delete by ID";
 cout << "\n7. Exit";

 cout << "\n\nEnter your choice: ";
 cin >> choice;

 switch (choice)
 {
 case 1:
 {
 int n;
 cout << "\nEnter number of person: ";
 cin >> n;

 Person *p = new Person[n];

 int sno = 1;

 for (int i = 0; i < n; i++)
 {
 cout << "\nEnter details of person " << i + 1 << endl;
 p[i].sno = sno++;

 cout << "Enter ID: ";
 cin >> p[i].id;
 cout << "Enter name: ";
 cin.ignore();
 getline(cin, p[i].name);
 cout << "Enter address: ";
 cin.ignore();
 getline(cin, p[i].address);
 cout << "Enter age: ";
 cin >> p[i].age;
 cout << "Enter gender (1 for Male, 2 for Female): ";
 cin >> p[i].gender;
 cout << "Enter occupation: ";
 cin.ignore();
 getline(cin, p[i].occupation);
 cout << "Enter working status (1 for Employed, 2 for Unemployed): ";
 cin >> p[i].workingStatus;
 cout << "Enter category (1 for child, 2 for adult, 3 for senior): ";
 cin >> p[i].category;
 cout << "Enter contact number: ";
 cin.ignore();
 getline(cin, p[i].contactNo);
 cout << "Enter monthly income: ";
 cin >> p[i].monthlyIncome;
 cout << "Enter marital status (1 for Single, 2 for Married): ";
 cin >> p[i].maritalStatus;
 cout << "Enter date of birth (dd mm yyyy): ";
 cin >> p[i].DOB.date >> p[i].DOB.month >> p[i].DOB.year;
 }

 ofstream write;
 write.open("person.txt", ios::app);
 if (!write)
 {
 cout << "\nFile could not be opened" << endl;
 return 1;
 }

 for (int i = 0; i < n; i++)
 {
 write << p[i].sno << "\n";
 write << p[i].id << "\n";
 write << p[i].name << "\n";
 write << p[i].address << "\n";
 write << p[i].age << "\n";
 write << p[i].gender << "\n";
 write << p[i].occupation << "\n";
 write << p[i].workingStatus << "\n";
 write << p[i].category << "\n";
 write << p[i].contactNo << "\n";
 write << p[i].monthlyIncome << "\n";
 write << p[i].maritalStatus << "\n";
 write << p[i].DOB.date << " " << p[i].DOB.month << " " << p[i].DOB.year << "\n";
 }

 write.close();
 cout << "\nData written successfully" << endl;
 delete[] p;
 break;
 }

 case 2:
 {
 ifstream read;
 read.open("person.txt", ios::in);
 if (!read)
 {
 cout << "\nFile could not be opened" << endl;
 return 1;
 }

 Person p;

 cout << "\n";
 while (read >> p.sno >> p.id >> p.name >> p.address >> p.age >> p.gender >> p.occupation >> p.workingStatus >> p.category >> p.contactNo >> p.monthlyIncome >> p.maritalStatus >> p.DOB.date >> p.DOB.month >> p.DOB.year)
 {
 cout << "ID: " << p.id << "\n";
 cout << "Name: " << p.name << "\n";
 cout << "Address: " << p.address << "\n";
 cout << "Age: " << p.age << "\n";
 cout << "Gender: " << p.gender << "\n";
 cout << "Occupation: " << p.occupation << "\n";
 cout << "Working Status: " << p.workingStatus << "\n";
 cout << "Category: " << p.category << "\n";
 cout << "Contact Number: " << p.contactNo << "\n";
 cout << "Monthly Income: " << p.monthlyIncome << "\n";
 cout << "Marital Status: " << p.maritalStatus << "\n";
 cout << "Date of Birth: " << p.DOB.date << "/" << p.DOB.month << "/" << p.DOB.year << "\n";
 cout << "----------------\n";
 }

 read.close();
 break;
 }

 case 3:
 {
 cout << "\nEnter ID to search: ";
 cin >> personId;

 ifstream read;
 read.open("person.txt", ios::in);
 if (!read)
 {
 cout << "\nFile could not be opened" << endl;
 return 1;
 }

 Person p;

 cout << "\n";
 while (read >> p.sno >> p.id >> p.name >> p.address >> p.age >> p.gender >> p.occupation >> p.workingStatus >> p.category >> p.contactNo >> p.monthlyIncome >> p.maritalStatus >> p.DOB.date >> p.DOB.month >> p.DOB.year)
 {
 if (p.id == personId)
 {
 cout << "ID: " << p.id << "\n";
 cout << "Name: " << p.name << "\n";
 cout << "Address: " << p.address << "\n";
 cout << "Age: " << p.age << "\n";
 cout << "Gender: " << p.gender << "\n";
 cout << "Occupation: " << p.occupation << "\n";
 cout << "Working Status: " << p.workingStatus << "\n";
 cout << "Category: " << p.category << "\n";
 cout << "Contact Number: " << p.contactNo << "\n";
 cout << "Monthly Income: " << p.monthlyIncome << "\n";
 cout << "Marital Status: " << p.maritalStatus << "\n";
 cout << "Date of Birth: " << p.DOB.date << "/" << p.DOB.month << "/" << p.DOB.year << "\n";
 cout << "----------------\n";
 break;
 }
 }

 read.close();
 break;
 }

 case 4:
 {
 ifstream source;
 ofstream destination;
 source.open("existingData.txt", ios::in);
 destination.open("person.txt", ios::out);
 if (!source || !destination)
 {
 cout << "File could not be opened";
 return 1;
 }

 string data;

 while (getline(source, data))
 {
 destination << data << endl;
 }

 source.close();
 destination.close();
 cout << "\nData copied successfully";
 break;
 }

 case 5:
 {
 cout << "\nImplementation of this case is pending" << endl;
 }

 case 6:
 {
 cout << "\nImplementation of this case is pending" << endl;
 }

 // case 5:
 // {
 // cout << "\nEnter ID to edit: ";
 // cin >> personId;
 // ifstream read;
 // ofstream temp;
 // read.open("person.txt", ios::in);
 // temp.open("temp.txt", ios::out);
 // if (!read || !temp)
 // {
 // cout << "\nFile could not be opened";
 // return 1;
 // }
 // Person p;
 // bool found = false;
 // while (read >> p.id >> p.name >> p.salary)
 // {
 // if (p.id == personId)
 // {
 // found = true;
 // cout << "Enter updated details:\n";
 // cout << "Enter ID: ";
 // cin >> p.id;
 // cout << "Enter Name: ";
 // cin >> p.name;
 // cout << "Enter Salary: ";
 // cin >> p.salary;
 // }
 // temp << p.id << "\n";
 // temp << p.name << "\n";
 // temp << p.salary << "\n";
 // }
 // read.close();
 // temp.close();
 // if (found)
 // {
 // remove("person.txt");
 // rename("temp.txt", "person.txt");
 // cout << "\nData updated successfully";
 // }
 // else
 // {
 // cout << "\nPerson not found";
 // remove("temp.txt");
 // }
 // break;
 // }

 // case 6:
 // {
 // cout << "\nEnter ID to delete: ";
 // cin >> personId;
 // ifstream read;
 // ofstream temp;
 // read.open("person.txt", ios::in);
 // temp.open("temp.txt", ios::out);
 // if (!read || !temp)
 // {
 // cout << "\nFile could not be opened";
 // return 1;
 // }
 // Person p;
 // bool found = false;
 // while (read >> p.id >> p.name >> p.salary)
 // {
 // if (p.id == personId)
 // {
 // found = true;
 // continue;
 // }
 // temp << p.id << "\n";
 // temp << p.name << "\n";
 // temp << p.salary << "\n";
 // }
 // read.close();
 // temp.close();
 // if (found)
 // {
 // remove("person.txt");
 // rename("temp.txt", "person.txt");
 // cout << "\nPerson deleted successfully";
 // }
 // else
 // {
 // cout << "\nPerson not found";
 // remove("temp.txt");
 // }
 // break;
 // }

 case 7:
 {
 exit(0);
 }

 default:
 {
 cout << "Invalid choice";
 }
 }
 } while (choice != 7);
 return 0;
}