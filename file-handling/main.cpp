#include "functions.cpp"

int main() {
  int choice;
  do {
    cout << "\n1. Add Person";
    cout << "\n2. Display All Persons";
    cout << "\n3. Extract Data from file";
    cout << "\n4. Exit";

    cout << "\n\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1: {
      writeToFile();
      break;
    }

    case 2: {
      readToFile();
      break;
    }

    case 3: {
      extractToFile();
      break;
    }

    case 4: {
      cout << "\nThank you for using the application.";
      exit(0);
    }

    default: {
      cout << "\nInvalid choice. Please try again.";
    }
    }
  } while (choice != 4);
  return 0;
}
