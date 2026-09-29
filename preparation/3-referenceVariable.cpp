#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void increment(int &a)
{
    a++;
}

int &getValue(int &x)
{
    return x;
}

class Student
{
public:
    int marks;
};

int main()
{
    // int a=10;
    // int &ref=a;
    // cout<<"a="<<a<<endl;
    // cout<<"ref="<<ref<<endl;

    // int a=10;
    // int &ref=a;
    // ref=50;
    // cout<<"a="<<a<<endl;
    // cout<<"ref="<<ref<<endl;

    // int a=10;
    // int &ref=a;
    // cout<<"Address of a="<<&a<<endl;
    // cout<<"Address of ref="<<&ref<<endl;

    // int x=10;
    // int y=20;
    // cout<<"Before swap"<<endl;
    // cout<<x<<" "<<y<<endl;
    // swapNumbers(x, y);
    // cout<<"After swap"<<endl;
    // cout<<x<<" "<<y<<endl;

    // int x=20;
    // cout<<"Before = "<<x<<endl;
    // increment(x);
    // cout<<"After ="<<x<<endl;

    // int arr[3]={10, 20, 30};
    // int &ref=arr[1];
    // ref=100;
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;

    // int a=10;
    // getValue(a)=50;
    // cout<<"a="<<a;

    // Student s;
    // s.marks=80;
    // Student &ref=s;
    // ref.marks=95;
    // cout<<"Marks = "<<s.marks;

    int a = 10;

    int *ptr = &a;
    int &ref = a;

    cout << "Using pointer    = " << *ptr << endl;
    cout << "Using reference  = " << ref << endl;
    return 0;
}
