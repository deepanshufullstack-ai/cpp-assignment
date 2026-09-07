// #include <iostream>
// #include <cstring>

// using namespace std;

// int main()
// {
//     char city[100];

//     cout << "Enter city name: ";
//     cin.getline(city, 100);

//     char command[200] = "curl wttr.in/";

//     strcat(command, city); 

//     strcat(command, "?format=3"); 

//     // strcat(command, "?format=%t");
//     // strcat(command, "?format=%t %C");

//     system(command); 

//     return 0;
// }


#include <iostream>
#include <cstdlib>  // For system() function
#include <string>
using namespace std;
int main() {
    std::string city;
    char choice = 'y';
 
    while (choice == 'y' || choice == 'Y') {
        // Ask the user to input the city name
        cout << "Enter the city name for the weather forecast: ";
        getline(cin, city);
 
        // Check if the user entered something or not
        if (city.empty()) {
            cout << "You did not enter a city. Please try again." << endl;
            continue;  // Go back to the start of the loop
        }
 
        // Create the curl command using wttr.in and the entered city
        string command = "curl wttr.in/" + city;
 
        // Execute the curl command
        system(command.c_str());
 
        // Ask if the user wants to check another city
        cout << "\nDo you want to check the weather for another city (y/n)? ";
        cin >> choice;
        cin.ignore();  // Ignore the newline character left in the input buffer
    }
 
    cout << "Exiting the program..." << endl;
    return 0;
}
 
 