#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void writeToFile(char fileName[], char text[]);
void appendToFile(char fileName[], char text[]);
void readFromFile(char fileName[]);
void getCharacterPosition(char fileName[]);

int main() {
  // writeToFile("file1.txt", "Mysirg"); // always write new (over writes)
  // appendToFile("file1.txt", "Deepanshu Mahawar"); // always appends at end
  // readFromFile("file1.txt"); // always read from file
  getCharacterPosition("file1.txt");
  return 0;
}

// how to write data into a file using ios::out mode
void writeToFile(char fileName[], char text[]) {
  ofstream fout;
  fout.open(fileName, ios::out);
  fout << text;
  fout.close();
}

// how to append data into a file using ios::app mode
void appendToFile(char fileName[], char text[]) {
  ofstream fout;
  fout.open(fileName, ios::app);
  fout << text;
  fout.close();
}

// how to read data from a file using ios::in mode
void readFromFile(char fileName[]) {
  ifstream fin;
  fin.open(fileName, ios::in);
  //   string ch;
  //   if (!fin) {
  //     cout << "File not found";
  //   } else {
  //     while (getline(fin, ch)) {
  //       cout << ch << endl;
  //     }
  //   }
  //   fin.close();

  //   char ch;
  //   if (!fin) {
  //     cout << "File not found";
  //   } else {
  //     fin >> ch;
  //     while (!fin.eof()) {
  //       cout << ch;
  //       fin >> ch;
  //     }
  //     fin.close();
  //   }

  char ch;
  if (!fin) {
    cout << "File not found";
  } else {
    ch = fin.get();
    while (!fin.eof()) {
      cout << ch;
      ch = fin.get();
    }
    fin.close();
  }
}

void getCharacterPosition(char fileName[]) {
  ifstream fin;
  fin.open(fileName, ios::in);
  char ch;
  if (!fin) {
    cout << "File not found";
  } else {
    cout << fin.tellg() << endl;
    fin >> ch;
    cout << ch << " " << fin.tellg();
    fin.seekg(8);
    fin >> ch;
    cout << ch << " " << fin.tellg();
    fin.close();
  }
}

// tellg() --> Returns the position of the pointer for input
// tellp() --> Returns the position of the pointer for output
// seekg() --> Moves the pointer to the specified position for input
// seekp() --> Moves the pointer to the specified position for output
// ios::in  --> input mode
// ios::out --> output mode
// ios::app --> append mode
// ios::ate --> at end mode

