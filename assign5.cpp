#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void swap1(int &a, int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}

void addTwoOrThree(int a, int b, int c=0){
    cout<<"Sum is "<<a+b+c<<endl;
}

float area(int r){
    cout<<"Area is "<<3.14*r*r<<endl;
    return 3.14*r*r;
}

int area(int l, int b){
    cout<<"Area is "<<l*b<<endl;
    return l*b;
}

float area(float b, float h){
    cout<<"Area is "<<0.5*b*h<<endl;
    return 0.5*b*h;
}

int max(int a, int b){
    if(a>b){
        return a;
    } else if(b>a){
        return b;
    } else {
        return 0;
    }
}

double max(double a, double b){
    if(a>b){
        return a;
    } else if(b>a){
        return b;
    } else {
        return 0;
    }
}

int sum(int a, int b){
    return a+b;
}

float sum(float a, float b){
    return a+b;
}

int main(){
    // int a=1, b=2;
    // cout<<a<<" "<<b<<endl;
    // swap(a, b);
    // cout<<a<<" "<<b<<endl;
    
    // int a, b, c;
    // cout<<"Enter two numbers: ";
    // cin>>a>>b;
    // addTwoOrThree(a, b);
    // cout<<"Enter three numbers: ";
    // cin>>a>>b>>c;
    // addTwoOrThree(a, b, c);
    
    // float r=5;
    // area(r);
    
    // int l=20, b=30;
    // area(l, b);
    
    // float b1=10.10, h1=10.10;
    // area(b1, h1);
    
    // int a=10, b=20;
    // cout<<max(a, b)<<endl;
    
    // double a1=10.20, b1=20.10;
    // cout<<max(a1, b1)<<endl;
    
    int a=10, b=20;
    cout<<sum(a, b)<<endl;
    float a1=10.10, b1=20.10;
    cout<<sum(a1, b1)<<endl;
    return 0;
}