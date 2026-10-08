#include <cstdio>
#include <fstream>
#include <iostream>
#include <ostream>
#include <string>

using namespace std;

struct DateofBirth {
  int date;
  int month;
  int year;
};

struct Person {
  int serialNo;
  int id;
  string address;
  string name;
  int age;
  int gender;
  string occupation;
  int workingStatus;
  string category;
  string contactNo;
  float monthlyIncome;
  int maritalStatus;
  DateofBirth DOB;
};

// Function to write/add persons to file
void write_to_file() {
  int n;

  cout << "How many Persons do you want to add? ";
  cin >> n;

  // Find the last serial number
  int serialNo = 1;

  ifstream fin("data.txt");

  if (fin) {
    Person temp;

    while (fin >> temp.serialNo) {
      fin >> temp.id;
      fin.ignore();

      getline(fin, temp.address);
      getline(fin, temp.name);

      fin >> temp.age;
      fin >> temp.gender;
      fin.ignore();

      getline(fin, temp.occupation);

      fin >> temp.workingStatus;
      fin.ignore();

      getline(fin, temp.category);
      getline(fin, temp.contactNo);

      fin >> temp.monthlyIncome;
      fin >> temp.maritalStatus;

      fin >> temp.DOB.date;
      fin >> temp.DOB.month;
      fin >> temp.DOB.year;

      serialNo = temp.serialNo + 1;
    }

    fin.close();
  }

  ofstream appendFile("data.txt", ios::app);

  if (!appendFile) {
    cout << "File could not be opened!" << endl;
    return;
  }

  for (int i = 0; i < n; i++) {
    Person p;

    cout << "\n================================" << endl;
    cout << "Enter details of Person " << i + 1 << endl;
    cout << "================================" << endl;

    p.serialNo = serialNo++;

    cout << "Enter ID: ";
    cin >> p.id;

    cin.ignore();

    cout << "Enter Address: ";
    getline(cin, p.address);

    cout << "Enter Name: ";
    getline(cin, p.name);

    cout << "Enter Age: ";
    cin >> p.age;

    cout << "Enter Gender (1-Male 2-Female): ";
    cin >> p.gender;

    cin.ignore();

    cout << "Enter Occupation: ";
    getline(cin, p.occupation);

    cout << "Enter Working Status (1-Working 2-Not Working): ";
    cin >> p.workingStatus;

    cin.ignore();

    cout << "Enter Category: ";
    getline(cin, p.category);

    cout << "Enter Contact No: ";
    getline(cin, p.contactNo);

    cout << "Enter Monthly Income: ";
    cin >> p.monthlyIncome;

    cout << "Enter Marital Status (1-Married 2-Unmarried): ";
    cin >> p.maritalStatus;

    cout << "Enter Date of Birth:" << endl;

    cout << "Date: ";
    cin >> p.DOB.date;

    cout << "Month: ";
    cin >> p.DOB.month;

    cout << "Year: ";
    cin >> p.DOB.year;

    // Write each field on a separate line
    appendFile << p.serialNo << endl;
    appendFile << p.id << endl;
    appendFile << p.address << endl;
    appendFile << p.name << endl;
    appendFile << p.age << endl;
    appendFile << p.gender << endl;
    appendFile << p.occupation << endl;
    appendFile << p.workingStatus << endl;
    appendFile << p.category << endl;
    appendFile << p.contactNo << endl;
    appendFile << p.monthlyIncome << endl;
    appendFile << p.maritalStatus << endl;

    // Date of birth
    appendFile << p.DOB.date << " " << p.DOB.month << " " << p.DOB.year << endl;
  }

  appendFile.close();

  cout << "\nPersons added successfully!" << endl;
}

// Function to read/display persons
void read_from_file() {
  ifstream fin("data.txt", ios::in);

  if (!fin) {
    cout << "File could not be opened!" << endl;
    return;
  }

  Person p;

  while (fin >> p.serialNo) {
    fin >> p.id;
    fin.ignore();

    getline(fin, p.address);
    getline(fin, p.name);

    fin >> p.age;
    fin >> p.gender;
    fin.ignore();

    getline(fin, p.occupation);

    fin >> p.workingStatus;
    fin.ignore();

    getline(fin, p.category);
    getline(fin, p.contactNo);

    fin >> p.monthlyIncome;
    fin >> p.maritalStatus;

    fin >> p.DOB.date;
    fin >> p.DOB.month;
    fin >> p.DOB.year;

    cout << "\n-----------------------------" << endl;
    cout << "Serial No: " << p.serialNo << endl;
    cout << "ID: " << p.id << endl;
    cout << "Address: " << p.address << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Gender: " << p.gender << endl;
    cout << "Occupation: " << p.occupation << endl;
    cout << "Working Status: " << p.workingStatus << endl;
    cout << "Category: " << p.category << endl;
    cout << "Contact No: " << p.contactNo << endl;
    cout << "Monthly Income: " << p.monthlyIncome << endl;
    cout << "Marital Status: " << p.maritalStatus << endl;

    cout << "Date of Birth: " << p.DOB.date << "/" << p.DOB.month << "/"
         << p.DOB.year << endl;
  }

  fin.close();
}

// Function to search person by ID
void search_id(int searchId) {
  ifstream file("data.txt", ios::in);

  if (!file) {
    cout << "File could not be opened!" << endl;
    return;
  }

  Person p;
  bool found = false;

  while (file >> p.serialNo) {
    file >> p.id;
    file.ignore();

    getline(file, p.address);
    getline(file, p.name);

    file >> p.age;
    file >> p.gender;
    file.ignore();

    getline(file, p.occupation);

    file >> p.workingStatus;
    file.ignore();

    getline(file, p.category);
    getline(file, p.contactNo);

    file >> p.monthlyIncome;
    file >> p.maritalStatus;

    file >> p.DOB.date;
    file >> p.DOB.month;
    file >> p.DOB.year;

    if (p.id == searchId) {
      cout << "\nPerson Found!" << endl;
      cout << "-----------------------------" << endl;

      cout << "Serial No: " << p.serialNo << endl;
      cout << "ID: " << p.id << endl;
      cout << "Address: " << p.address << endl;
      cout << "Name: " << p.name << endl;
      cout << "Age: " << p.age << endl;
      cout << "Gender: " << p.gender << endl;
      cout << "Occupation: " << p.occupation << endl;
      cout << "Working Status: " << p.workingStatus << endl;
      cout << "Category: " << p.category << endl;
      cout << "Contact No: " << p.contactNo << endl;
      cout << "Monthly Income: " << p.monthlyIncome << endl;
      cout << "Marital Status: " << p.maritalStatus << endl;

      cout << "Date of Birth: " << p.DOB.date << "/" << p.DOB.month << "/"
           << p.DOB.year << endl;

      found = true;
      break;
    }
  }

  if (!found) {
    cout << "Search failed: Person not found." << endl;
  }

  file.close();
}

// Function to edit person
void edit_data(int searchId) {
  ifstream file("data.txt", ios::in);
  ofstream temp("temp.txt", ios::out);

  if (!file || !temp) {
    cout << "File could not be opened!" << endl;
    return;
  }

  Person p;
  bool found = false;

  while (file >> p.serialNo) {
    file >> p.id;
    file.ignore();

    getline(file, p.address);
    getline(file, p.name);

    file >> p.age;
    file >> p.gender;
    file.ignore();

    getline(file, p.occupation);

    file >> p.workingStatus;
    file.ignore();

    getline(file, p.category);
    getline(file, p.contactNo);

    file >> p.monthlyIncome;
    file >> p.maritalStatus;

    file >> p.DOB.date;
    file >> p.DOB.month;
    file >> p.DOB.year;

    if (p.id == searchId) {
      found = true;

      cout << "\nPerson Found!" << endl;
      cout << "Enter new details:\n";

      cin.ignore();

      cout << "Enter Address: ";
      getline(cin, p.address);

      cout << "Enter Name: ";
      getline(cin, p.name);

      cout << "Enter Age: ";
      cin >> p.age;

      cout << "Enter Gender (1-Male 2-Female): ";
      cin >> p.gender;

      cin.ignore();

      cout << "Enter Occupation: ";
      getline(cin, p.occupation);

      cout << "Enter Working Status (1-Working 2-Not Working): ";
      cin >> p.workingStatus;

      cin.ignore();

      cout << "Enter Category: ";
      getline(cin, p.category);

      cout << "Enter Contact No: ";
      getline(cin, p.contactNo);

      cout << "Enter Monthly Income: ";
      cin >> p.monthlyIncome;

      cout << "Enter Marital Status (1-Married 2-Unmarried): ";
      cin >> p.maritalStatus;

      cout << "Enter Date of Birth:" << endl;

      cout << "Date: ";
      cin >> p.DOB.date;

      cout << "Month: ";
      cin >> p.DOB.month;

      cout << "Year: ";
      cin >> p.DOB.year;
    }

    // Write record to temporary file
    temp << p.serialNo << endl;
    temp << p.id << endl;
    temp << p.address << endl;
    temp << p.name << endl;
    temp << p.age << endl;
    temp << p.gender << endl;
    temp << p.occupation << endl;
    temp << p.workingStatus << endl;
    temp << p.category << endl;
    temp << p.contactNo << endl;
    temp << p.monthlyIncome << endl;
    temp << p.maritalStatus << endl;

    temp << p.DOB.date << " " << p.DOB.month << " " << p.DOB.year << endl;
  }

  file.close();
  temp.close();

  if (found) {
    remove("data.txt");
    rename("temp.txt", "data.txt");

    cout << "Person data updated successfully!" << endl;
  } else {
    remove("temp.txt");

    cout << "Search failed: Person not found." << endl;
  }
}

// Function to delete person
void delete_data(int searchId) {
  ifstream file("data.txt", ios::in);
  ofstream temp("temp.txt", ios::out);

  if (!file || !temp) {
    cout << "File could not be opened!" << endl;
    return;
  }

  Person p;
  bool found = false;

  while (file >> p.serialNo) {
    file >> p.id;
    file.ignore();

    getline(file, p.address);
    getline(file, p.name);

    file >> p.age;
    file >> p.gender;
    file.ignore();

    getline(file, p.occupation);

    file >> p.workingStatus;
    file.ignore();

    getline(file, p.category);
    getline(file, p.contactNo);

    file >> p.monthlyIncome;
    file >> p.maritalStatus;

    file >> p.DOB.date;
    file >> p.DOB.month;
    file >> p.DOB.year;

    // If ID matches, do NOT write this person
    if (p.id == searchId) {
      found = true;
      continue;
    }

    // Write all other records
    temp << p.serialNo << endl;
    temp << p.id << endl;
    temp << p.address << endl;
    temp << p.name << endl;
    temp << p.age << endl;
    temp << p.gender << endl;
    temp << p.occupation << endl;
    temp << p.workingStatus << endl;
    temp << p.category << endl;
    temp << p.contactNo << endl;
    temp << p.monthlyIncome << endl;
    temp << p.maritalStatus << endl;

    temp << p.DOB.date << " " << p.DOB.month << " " << p.DOB.year << endl;
  }

  file.close();
  temp.close();

  if (found) {
    remove("data.txt");
    rename("temp.txt", "data.txt");

    cout << "Person data deleted successfully!" << endl;
  } else {
    remove("temp.txt");

    cout << "Search failed: Person not found." << endl;
  }
}

void extract_and_add() {
  ifstream sourceFile;
  ofstream destinationFile;
  sourceFile.open("existingData.txt", ios::in);
  destinationFile.open("data.txt", ios::out | ios::app);

  if (!sourceFile || !destinationFile) {
    cout << "File could not be opened!\n";
    return;
  }

  string data;

  while (getline(sourceFile, data)) {
    destinationFile << data << endl;
  }

  sourceFile.close();
  destinationFile.close();

  cout << "Data extracted successfully!\n";
}

// Main function
int main() {
  int choice;
  int id;

  do {
    cout << "\n==============================" << endl;
    cout << "       PERSON MANAGEMENT" << endl;
    cout << "==============================" << endl;

    cout << "1. Add Persons" << endl;
    cout << "2. Display Persons" << endl;
    cout << "3. Search Person by ID" << endl;
    cout << "4. Edit Person by ID" << endl;
    cout << "5. Delete Person by ID" << endl;
    cout << "6. Extract Data" << endl;
    cout << "7. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
      write_to_file();
      break;

    case 2:
      read_from_file();
      break;

    case 3:
      cout << "Enter ID for search: ";
      cin >> id;
      search_id(id);
      break;

    case 4:
      cout << "Enter ID to edit: ";
      cin >> id;
      edit_data(id);
      break;

    case 5:
      cout << "Enter ID to delete: ";
      cin >> id;
      delete_data(id);
      break;

    case 6:
      extract_and_add();
      break;

    case 7:
      cout << "Exiting program..." << endl;
      break;

    default:
      cout << "Invalid choice!" << endl;
    }

  } while (choice != 7);

  return 0;
}