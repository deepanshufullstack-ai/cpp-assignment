#include<iostream>
using namespace std;

void greet(string name="Guest"){
    cout<<"Hello "<<name<<endl;
}

void add(int a, int b=20){
    cout<<"Sum = "<<a+b<<endl;
}

void display(int a=10, int b=20, int c=30){
    cout<<a<<" "<<b<<" "<<c<<endl;
}

int power(int num, int expo=2){
    int result=1;
    for(int i=1; i<=expo; i++){
        result=result*num;
    }
    return result;
}

class Student {
    public: 
    void display(string name="Unknown", int marks=0){
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main(){
    // greet();
    // greet("Rahul");

    // add(4);
    // add(4, 20);

    // display();
    // display(100);
    // display(100, 200);
    // display(100, 200, 300);

    // cout<<power(5)<<endl;
    // cout<<power(5, 3)<<endl;

    Student s;
    s.display();
    cout<<endl;
    s.display("Amit", 85);
    
    return 0;
}