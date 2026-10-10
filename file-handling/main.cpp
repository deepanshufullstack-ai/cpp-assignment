#include "functions.cpp"

int main()
{
  int choice;
  do
  {
    cout << "\n1. Add Person";
    cout << "\n2. Display All Persons";
    cout << "\n3. Extract Data from file";
    cout << "\n4. Separate Unmarried persons";
    cout << "\n5. Separate Unmarried By Gender";
    cout << "\n6. Seperate Unmarried By City";
    cout << "\n7. Search person by ID";
    cout << "\n8. Delete person by ID";
    cout << "\n9. Update person by ID";
    cout << "\n10. Find avg income of all the person";
    cout << "\n11. Exit";

    cout << "\n\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
      writeToFile();
      break;
    }

    case 2:
    {
      readToFile();
      break;
    }

    case 3:
    {
      extractToFile();
      break;
    }

    case 4:
    {
      separateUnmarried();
      break;
    }

    case 5:
    {
      int gender;
      cout << "\nEnter gender to separate (1 for male, 2 for female, 3 for "
              "other): ";
      cin >> gender;
      separateUnmarriedByGender(gender);
      break;
    }

    case 6:
    {
      string city;

      cout << "\nEnter city to separate unmarried persons: ";
      cin.ignore();
      getline(cin, city);

      separateUnmarriedByCity(city);

      break;
    }

    case 7:
    {
      int id;
      cout << "\nEnter ID to search: ";
      cin >> id;
      searchFromFile(id);
      break;
    }

    case 8:
    {
      int id;
      cout << "\nEnter ID to delete: ";
      cin >> id;
      deleteFromFile(id);
      break;
    }

    case 9:
    {
      int id;
      cout << "\nEnter ID to update: ";
      cin >> id;
      updateFromFile(id);
      break;
    }

    case 10: {
      findAvg("Ratlam");
      break;
    }

    case 11:
    {
      cout << "\nThank you for using the application.";
      exit(0);
    }

    default:
    {
      cout << "\nInvalid choice. Please try again.";
    }
    }
  } while (choice != 11);
  return 0;
}
