// #include<iostream>
// using namespace std;
// class Number {
//     private:
//     int size;
//     int *arr;
//     public:
//     Number(int s){
//         size=s;
//         arr=new int[size];
//         for(int i=0; i<size; i++){
//             arr[i]=0;
//         }
//     }
//     Number(const Number &n){
//         size=n.size;
//         arr=new int[size];
//         for(int i=0; i<size; i++){
//             arr[i]=n.arr[i];
//         }
//     }
//     void setData(){
//     cout<<"Enter "<<size<<" numbers: ";
//     for(int i=0; i<size; i++){
//     cin>>arr[i];
//     }
//     }
//     void showData(){
//     cout<<"numbers: ";
//     for(int i=0; i<size; i++){
//     cout<<arr[i]<<" ";
//     }
//     }
//     ~Number(){
//         delete[] arr;
//     }
    
// };
// int main(){
//     Number n1(5);
//     n1.setData();
//     n1.showData();
//     return 0;
// }


// #include <iostream>
// #include <cstring>
// using namespace std;

// class Student {
// private:
//     int rn;
//     char n[20];

// public:
//     Student(int rollNo, const char name[]) {
//         rn = rollNo;
//         strcpy(n, name);
//     }

//     void showData() {
//         cout << "Roll No: " << rn << endl;
//         cout << "Name: " << n << endl;
//     }
// };

// int main() {

//     Student s1(101, "Rahul");

//     s1.showData();

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