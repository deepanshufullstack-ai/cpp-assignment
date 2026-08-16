#include<iostream>
#include<string.h>
using namespace std;

// class Cuboid {
//     private: 
//     int length, breadth, height;
//     public: 
//     Cuboid(){
//         length = 0;
//         breadth = 0;
//         height = 0;
//     }
//     void setDimensions(int l, int b, int h){
//         length = l;
//         breadth = b;
//         height = h;
//     }
//     void getDimensions(){
//         cout << "Length: " << length << ", Breadth: " << breadth << ", Height: " << height << endl;
//     }
// };

// int main(){
//     Cuboid c1;
//     c1.getDimensions();
//     c1.setDimensions(10, 5, 3);
//     c1.getDimensions();
//     return 0;
// }

// class Customer {
//     private: 
//     int cust_id;
//     char name[20];
//     char email[40];
//     char mobile[15]; 
//     public: 
//     Customer(){
//         cust_id = 0;
//         strcpy(name, "xyz");
//         strcpy(email, "xyz@gmail.com");
//         strcpy(mobile, "1234567890");
//     }
//     Customer(int id, char n[], char e[], char m[]){
//         cust_id = id;
//         strcpy(name, n);
//         strcpy(email, e);
//         strcpy(mobile, m);
//     }
//     void setData(int id, char n[], char e[], char m[]){
//         cust_id = id;
//         strcpy(name, n);
//         strcpy(email, e);
//         strcpy(mobile, m);
//     }
//     void getData(){
//         cout<<"id="<<cust_id<<endl;
//         cout<<"name="<<name<<endl;
//         cout<<"email="<<email<<endl;
//         cout<<"mobile="<<mobile<<endl;
//     }
// };

// int main(){
//     Customer c1;
//     c1.getData();
//     Customer c2(101, "John Doe", "john.doe@gmail.com", "9876543210");
//     c2.getData();
//     return 0;
// }

// class Time {
//     private:
//     int hours, minutes, seconds;
//     public:
//     Time() {
//         hours = 0;
//         minutes = 0;
//         seconds = 0;
//     }
//     void setTime(int h, int m, int s){
//         hours = h;
//         minutes = m;
//         seconds = s;     
//     }
//     void getTime(){
//         cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
//     }
// };

// int main(){
//     Time t1;
//     t1.getTime();
//     t1.setTime(10, 30, 45);
//     t1.getTime();
//     return 0;
// }

// class Book {
//     private: 
//     char title[50];
//     float price;
//     public:
//     Book() {
//         strcpy(title, "xyz");
//         price = 0.0;
//     }
//     Book(char t[], float p) {
//         strcpy(title, t);
//         price = p;
//     }
//     void getBook(){
//         cout<<"Title: "<<title<<endl;
//         cout<<"Price: "<<price<<endl;
//     }
// };
// int main() {
//     Book b1;
//     b1.getBook();
//     Book b2("C++ Programming", 29.99);
//     b2.getBook();
//     return 0;
// }

class Complex{
    private:
    int a, b;
    public: 
    Complex(int x, int y){
        a = x;
        b = y;
    }
    void showData(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};

int main(){
    Complex c1[5]={
        Complex(1, 2),
        Complex(3, 4),
        Complex(5, 6),
        Complex(7, 8),
        Complex(9, 10)
    };
    for(int i = 0; i < 5; i++){
        c1[i].showData();
    }
    return 0;
}