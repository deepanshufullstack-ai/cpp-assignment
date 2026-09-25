#include<iostream>
using namespace std;
void swap(int &a, int &b);
void add(int a, int b, int c=0);
float area(int r);              
int area(int l, int w);    
float area(float b, float h); 
void findMax(int a, int b);
void findMax(double a, double b);
int sum(int a, int b);
double sum(double a, double b);

int main(){
    // swap two int variables using call by reference
    // int a, b;
    // cout<<"Enter two values: ";
    // cin>>a>>b;
    // cout<<"Before swap: "<<a<<" "<<b<<endl;
    // swap(a, b);
    // cout<<"After swap: "<<a<<" "<<b<<endl;

    // add 2 or 3 numbers using default arguments
    // int a, b, c;
    // cout<<"Enter two values: ";
    // cin>>a>>b;
    // cout<<"Enter three values: ";
    // cin>>a>>b>>c;
    // add(a, b);
    // add(a, b, c);

    cout<<"Area of circle: "<<area(10)<<endl;
    cout<<"Area of rectangle: "<<area(10, 20)<<endl;
    cout << "Triangle area = " << area(10.0f, 20.0f) << endl;

    findMax(23, 67);
    findMax(23.00, 67.00);

    cout<<"Sum is: "<<sum(10, 20)<<endl;
    cout<<"Sum is: "<<sum(10.20, 20.30)<<endl;
    
    
    return 0;
}
void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void add(int a, int b, int c){
    cout<<"Sum is "<<a+b+c;
}

float area(int r)
{
    return 3.14 * r * r;
}

int area(int l, int w)
{
    return l * w;
}

float area(float b, float h)
{
    return 0.5f * b * h;
}

void findMax(int a, int b){
    if(a>b){
        cout<<a<<" is max";
    } else if(b>a) {
        cout<<b<<" is max";
    } else {
        cout<<"both are equal";
    }
}

void findMax(double a, double b){
    if(a>b){
        cout<<a<<" is max";
    } else if(b>a) {
        cout<<b<<" is max";
    } else {
        cout<<"both are equal";
    }
}

int sum(int a, int b){
    return a+b;
}

double sum(double a, double b){
    return a+b;
}








