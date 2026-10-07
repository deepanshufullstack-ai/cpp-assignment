#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void writeData(char fileName[], char data[]);
void readData(char fileName[]);
void writeNumbers(char fileName[], int arr[], int size);
void readNumbers(char fileName[]);
void appendData(char fileName[], char data[]);
void writeStudentData(char fileName[], char name[], int age, float marks);
void copyOneFileToAnother(char sourceFile[], char DestinationFile[]);

int main() {
  char fileName[] = "first.txt";
  char data[] = "Hello";
  int arr[] = {1, 2, 3, 4, 5};
  //   writeData(fileName, data);
  //   readData(fileName);
  //   writeNumbers(fileName, arr, 5);
  //   readNumbers(fileName);
  //   appendData(fileName, data);
  // writeStudentData(fileName, "Deepanshu", 23, 99.45);
  copyOneFileToAnother(fileName, "second.txt");

  ifstream file;
  file.open(fileName);
  string line;
  int count = 0;
  while (getline(file, line)) {
    count++;
  }
  file.close();
  cout << "Line count: " << count;
  return 0;
}

void writeData(char fileName[], char data[]) {
  ofstream file;
  file.open(fileName, ios::out);
  file << data;
  file.close();
}

void readData(char fileName[]) {
  ifstream file;
  file.open(fileName);
  if (!file) {
    cout << "File not found";
  } else {
    string data;
    while (getline(file, data)) {
      cout << data << endl;
    }
    file.close();
  }
}

void appendData(char fileName[], char data[]) {
  ofstream file;
  file.open(fileName, ios::app);
  file << data;
  file.close();
}

void writeNumbers(char fileName[], int arr[], int size) {
  ofstream file;
  file.open(fileName, ios::out);
  for (int i = 0; i < size; i++) {
    file << arr[i] << endl;
  }
  file.close();
}

void readNumbers(char fileName[]) {
  ifstream file;
  file.open(fileName);
  if (!file) {
    cout << "File not found";
  } else {
    int num;
    while (file >> num) {
      cout << num << endl;
    }
    file.close();
  }
}

void writeStudentData(char fileName[], char name[], int age, float marks) {
  ofstream file;
  file.open(fileName, ios::out);
  file << name;
  file << age;
  file << marks;
  file.close();
}

void copyOneFileToAnother(char sourceFile[], char DestinationFile[]) {
  ifstream file1;
  ofstream file2;
  file1.open(sourceFile, ios::in);
  file2.open(DestinationFile, ios::out);

  if (!file1) {
    cout << "File not found";
    exit(0);
  }

  string data;

  while (getline(file1, data)) {
    file2 << data << endl;
  }
  file1.close();
  file2.close();
  cout << "File copied successfully";
}