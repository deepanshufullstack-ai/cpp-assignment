#include "struct.cpp"
#include <fstream>
#include <string>

void writeToFile()
{
  int n;
  cout << "\nEnter number of persons: ";
  cin >> n;

  Person *p = new Person[n];

  int sno = 1;

  for (int i = 0; i < n; i++)
  {
    cout << "\nEnter details of person: " << i + 1 << endl;

    p[i].sno = sno++;

    cout << "Enter ID: ";
    cin >> p[i].id;

    cout << "Enter name: ";
    cin.ignore();
    getline(cin, p[i].name);

    cout << "Enter age: ";
    cin >> p[i].age;

    cout << "Enter gender (1 for male, 2 for female, 3 for other): ";
    cin >> p[i].gender;

    cout << "Enter address: ";
    cin.ignore();
    getline(cin, p[i].address);

    cout << "Enter working status (1 for employed, 2 for unemployed): ";
    cin >> p[i].workingStatus;

    cout << "Enter occupation: ";
    cin.ignore();
    getline(cin, p[i].occupation);

    cout << "Enter age category (1 for child, 2 for adult, 3 for senior): ";
    cin >> p[i].ageCategory;

    cout << "Enter contact number: ";
    cin.ignore();
    getline(cin, p[i].contactNo);

    cout << "Enter monthly income: ";
    cin >> p[i].monthlyIncome;

    cout << "Enter marital status (1 for unmarried, 2 for married, 3 for divorced, 4 for separated): ";
    cin >> p[i].maritalStatus;

    cout << "Enter date of birth (dd mm yyyy): ";
    cin >> p[i].dob.date >> p[i].dob.month >> p[i].dob.year;
  }

  ofstream write;
  write.open("person.txt", ios::app);
  if (!write)
  {
    cout << "\nFile could not be opened";
    return;
  }

  for (int i = 0; i < n; i++)
  {
    write << p[i].sno << "\n";
    write << p[i].id << "\n";
    write << p[i].name << "\n";
    write << p[i].age << "\n";
    write << p[i].gender << "\n";
    write << p[i].address << "\n";
    write << p[i].workingStatus << "\n";
    write << p[i].occupation << "\n";
    write << p[i].ageCategory << "\n";
    write << p[i].contactNo << "\n";
    write << p[i].monthlyIncome << "\n";
    write << p[i].maritalStatus << "\n";
    write << p[i].dob.date << " " << p[i].dob.month << " " << p[i].dob.year
          << "\n";
    write << "\n";
  }

  write.close();
  cout << "\nData written successfully";
  delete[] p;
}

void readToFile()
{
  ifstream read;
  read.open("person.txt", ios::in);
  if (!read)
  {
    cout << "\nFile could not be opened";
    return;
  }

  Person p;

  while (read >> p.sno)
  {
    read >> p.id;

    read.ignore();
    getline(read, p.name);

    read >> p.age;
    read >> p.gender;

    read.ignore();
    getline(read, p.address);

    read >> p.workingStatus;

    read.ignore();
    getline(read, p.occupation);

    read >> p.ageCategory;

    read.ignore();
    getline(read, p.contactNo);

    read >> p.monthlyIncome;
    read >> p.maritalStatus;

    read >> p.dob.date >> p.dob.month >> p.dob.year;

    cout << "\nSNo: " << p.sno << "\n";
    cout << "ID: " << p.id << "\n";
    cout << "Name: " << p.name << "\n";
    cout << "Age: " << p.age << "\n";
    cout << "Gender: " << p.gender << "\n";
    cout << "Address: " << p.address << "\n";
    cout << "Working Status: " << p.workingStatus << "\n";
    cout << "Occupation: " << p.occupation << "\n";
    cout << "Age Category: " << p.ageCategory << "\n";
    cout << "Contact Number: " << p.contactNo << "\n";
    cout << "Monthly Income: " << p.monthlyIncome << "\n";
    cout << "Marital Status: " << p.maritalStatus << "\n";
    cout << "Date of Birth: " << p.dob.date << "/" << p.dob.month << "/"
         << p.dob.year << "\n";
  }

  read.close();
}

void extractToFile()
{
  ifstream source;
  ofstream destination;

  source.open("existingData.txt", ios::in);
  destination.open("person.txt", ios::app);

  if (!source || !destination)
  {
    cout << "\nFile could not be opened";
    return;
  }

  string data;

  while (getline(source, data))
  {
    destination << data << endl;
  }

  cout << "\nExtracted successfully";
  source.close();
  destination.close();
}

void separateUnmarried()
{
  ifstream source;
  ofstream destination;

  source.open("person.txt", ios::in);
  destination.open("unmarried.txt", ios::out);

  if (!source || !destination)
  {
    cout << "\nFile could not be opened";
    return;
  }

  Person p;
  int count = 0;

  while (source >> p.sno)
  {
    source >> p.id;

    source.ignore();
    getline(source, p.name);

    source >> p.age;
    source >> p.gender;

    source.ignore();
    getline(source, p.address);

    source >> p.workingStatus;

    source.ignore();
    getline(source, p.occupation);

    source >> p.ageCategory;

    source.ignore();
    getline(source, p.contactNo);

    source >> p.monthlyIncome;
    source >> p.maritalStatus;

    source >> p.dob.date >> p.dob.month >> p.dob.year;

    if (p.maritalStatus == 1)
    {
      destination << p.sno << "\n";
      destination << p.id << "\n";
      destination << p.name << "\n";
      destination << p.age << "\n";
      destination << p.gender << "\n";
      destination << p.address << "\n";
      destination << p.workingStatus << "\n";
      destination << p.occupation << "\n";
      destination << p.ageCategory << "\n";
      destination << p.contactNo << "\n";
      destination << p.monthlyIncome << "\n";
      destination << p.maritalStatus << "\n";
      destination << p.dob.date << " " << p.dob.month << " " << p.dob.year
                  << "\n";
      destination << "\n";
      count++;
    }
  }

  source.close();
  destination.close();

  if (count == 0)
  {
    cout << "\nNo unmarried persons found";
    remove("unmarried.txt");
  }
  else
  {
    cout << count << " Unmarried extracted successfully" << endl;
  }
}

void separateUnmarriedByGender(int gender)
{
  ifstream source;
  ofstream destination;

  source.open("person.txt", ios::in);
  destination.open("unmarriedByGender.txt", ios::out);

  if (!source || !destination)
  {
    cout << "\nFile could not be opened";
    return;
  }

  Person p;
  int count = 0;

  while (source >> p.sno)
  {
    source >> p.id;

    source.ignore();
    getline(source, p.name);

    source >> p.age;
    source >> p.gender;

    source.ignore();
    getline(source, p.address);

    source >> p.workingStatus;

    source.ignore();
    getline(source, p.occupation);

    source >> p.ageCategory;

    source.ignore();
    getline(source, p.contactNo);

    source >> p.monthlyIncome;
    source >> p.maritalStatus;

    source >> p.dob.date >> p.dob.month >> p.dob.year;

    if (p.maritalStatus == 1 && p.gender == gender)
    {
      destination << p.sno << "\n";
      destination << p.id << "\n";
      destination << p.name << "\n";
      destination << p.age << "\n";
      destination << p.gender << "\n";
      destination << p.address << "\n";
      destination << p.workingStatus << "\n";
      destination << p.occupation << "\n";
      destination << p.ageCategory << "\n";
      destination << p.contactNo << "\n";
      destination << p.monthlyIncome << "\n";
      destination << p.maritalStatus << "\n";
      destination << p.dob.date << " " << p.dob.month << " " << p.dob.year
                  << "\n";
      destination << "\n";
      count++;
    }
  }

  source.close();
  destination.close();

  if (count == 0)
  {
    cout << "No Unmarried persons found of this gender";
    remove("unmarriedByGender.txt");
  }
  else
  {
    cout << count << " Unmarried persons of this gender extracted successfully"
         << endl;
  }
}

void separateUnmarriedByCity(string city)
{
  ifstream source;
  ofstream destination;

  source.open("person.txt", ios::in);
  destination.open("unmarriedByCity.txt", ios::out);

  if (!source || !destination)
  {
    cout << "\nFile could not be opened";
    return;
  }

  Person p;
  int count = 0;

  while (source >> p.sno)
  {
    source >> p.id;

    source.ignore();
    getline(source, p.name);

    source >> p.age;
    source >> p.gender;

    source.ignore();
    getline(source, p.address);

    source >> p.workingStatus;

    source.ignore();
    getline(source, p.occupation);

    source >> p.ageCategory;

    source.ignore();
    getline(source, p.contactNo);

    source >> p.monthlyIncome;
    source >> p.maritalStatus;

    source >> p.dob.date >> p.dob.month >> p.dob.year;

    // Check unmarried status and city
    if (p.maritalStatus == 1
        // && p.address.find(city) != string::npos
        && p.address == city)
    {
      destination << p.sno << "\n";
      destination << p.id << "\n";
      destination << p.name << "\n";
      destination << p.age << "\n";
      destination << p.gender << "\n";
      destination << p.address << "\n";
      destination << p.workingStatus << "\n";
      destination << p.occupation << "\n";
      destination << p.ageCategory << "\n";
      destination << p.contactNo << "\n";
      destination << p.monthlyIncome << "\n";
      destination << p.maritalStatus << "\n";

      destination << p.dob.date << " "
                  << p.dob.month << " "
                  << p.dob.year << "\n\n";

      count++;
    }
  }

  source.close();
  destination.close();

  // if (count == 0)
  // {
  //   cout << "\nNo unmarried persons found in "
  //        << city << endl;

  //   remove("unmarriedByCity.txt");
  // }
  // else
  // {
  //   cout << "\n"
  //        << count
  //        << " unmarried persons from "
  //        << city
  //        << " extracted successfully"
  //        << endl;
  // }
  if (count == 0)
  {
    cout << "No Unmarried persons found of this city";
    remove("unmarriedByCity.txt");
  }
  else
  {
    cout << count << " Unmarried persons of this city extracted successfully"
         << endl;
  }
}

void searchFromFile(int id)
{
  ifstream read;
  read.open("person.txt", ios::in);

  if (!read)
  {
    cout << "\nFile could not be opened";
    return;
  }

  Person p;
  bool found = false;

  while (read >> p.sno)
  {
    read >> p.id;

    read.ignore();
    getline(read, p.name);

    read >> p.age;
    read >> p.gender;

    read.ignore();
    getline(read, p.address);

    read >> p.workingStatus;

    read.ignore();
    getline(read, p.occupation);

    read >> p.ageCategory;

    read.ignore();
    getline(read, p.contactNo);

    read >> p.monthlyIncome;
    read >> p.maritalStatus;

    read >> p.dob.date >> p.dob.month >> p.dob.year;

    if (p.id == id)
    {
      cout << "\n------------------------------------------\n";
      cout << "SNo: " << p.sno << "\n";
      cout << "ID: " << p.id << "\n";
      cout << "Name: " << p.name << "\n";
      cout << "Age: " << p.age << "\n";
      cout << "Gender: " << p.gender << "\n";
      cout << "Address: " << p.address << "\n";
      cout << "Working Status: " << p.workingStatus << "\n";
      cout << "Occupation: " << p.occupation << "\n";
      cout << "Age Category: " << p.ageCategory << "\n";
      cout << "Contact Number: " << p.contactNo << "\n";
      cout << "Monthly Income: " << p.monthlyIncome << "\n";
      cout << "Marital Status: " << p.maritalStatus << "\n";
      cout << "Date of Birth: " << p.dob.date << "/" << p.dob.month << "/"
           << p.dob.year << "\n";
      cout << "------------------------------------------\n";
      found = true;
      break;
    }
  }

  read.close();

  if (!found)
  {
    cout << "\nNo person found with this ID" << endl;
  }
}

void deleteFromFile(int id) { cout << id; }

void updateFromFile(int id) { cout << id; }
