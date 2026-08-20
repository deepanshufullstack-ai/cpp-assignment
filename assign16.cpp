#include<iostream>
#include<string.h>
using namespace std;

// class Person {
//     private: 
//     char name[20];
//     int age;
//     public:
//     Person(char name[], int age){
//         strcpy(this->name, name);
//         this->age=age;
//     }
//     void showData(){
//         cout<<name<<endl;
//         cout<<age<<endl;
//     }
// };

// int main(){
//     char name[20]="Deepanshu";
//     Person p1(name, 20);
//     p1.showData();
//     return 0;
// }

class Complex {
    private:
    int a, b;
    public:
    void setData(int a, int b){
        this->a=a;
        this->b=b;
    }
    void showData(){
        cout<<"a="<<a<<" b="<<b<<endl;
    }
};

void display(){
    Complex *p = new Complex;
    p->setData(1, 2);
    p->showData();
}

int main(){
    Complex c1;
    c1.setData(10, 20);
    c1.showData();
    display();
    return 0;
}