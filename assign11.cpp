#include <iostream>
#include <string.h>
using namespace std;

// class Student
// {
// private:
//     int rollno;
//     char name[20];

// public:
//     Student()
//     {
//         cout<<"Enter roll number: ";
//         cin >> rollno;
//         cout<<"Enter name: ";
//         cin >> name;
//     }
//     void displayData()
//     {
//         cout << "Roll No: " << rollno << endl;
//         cout << "Name: " << name << endl;
//     }
// };

// int main()
// {
//     Student s1;
//     s1.displayData();
//     return 0;
// }

// class Date
// {
// private:
//     int day;
//     int month;
//     int year;

// public:
//     Date(): day(1), month(1), year(2000) {} // Default constructor
//     Date(int d, int m, int y): day(d), month(m), year(y) {} // Parameterized constructor
//     void displayDate()
//     {
//         cout << "Date: " << day << "/" << month << "/" << year << endl;
//     }
// };
// int main(){
//     Date d1; // Calls default constructor
//     d1.displayDate();
//     Date d2(15, 8, 2023); // Calls parameterized constructor
//     d2.displayDate();
//     return 0;
// }

// class Room {
//     private:
//     int roomNumber;
//     int roomType;
//     bool isAc;
//     float price;
//     public:
//     Room(){
//         roomNumber = 0;
//         roomType = 0;
//         isAc = false;
//         price = 0.0;
//     }
//     Room(int rNum, int rType, bool ac, float p){
//         roomNumber = rNum;
//         roomType = rType;
//         isAc = ac;
//         price = p;
//     }
//     void displayRoomDetails(){
//         cout << "Room Number: " << roomNumber << endl;
//         cout << "Room Type: " << roomType << endl;
//         cout << "AC: " << (isAc ? "Yes" : "No") << endl;
//         cout << "Price: $" << price << endl;
//     }
// };
// int main(){
//     Room r1;
//     r1.displayRoomDetails();
//     Room r2(101, 1, true, 1000.0);
//     r2.displayRoomDetails();
//     return 0;
// }

class Circle
{
private:
    int radius;

public:
    Circle()
    {
        radius = 0;
    }
    Circle(int r)
    {
        radius = r;
    }
    void displayCircleDetails()
    {
        cout << "Radius: " << radius << endl;
    }
};
int main()
{
    Circle c1;
    c1.displayCircleDetails();
    Circle c2(5);
    c2.displayCircleDetails();
    return 0;
}