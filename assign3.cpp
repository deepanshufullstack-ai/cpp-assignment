#include<iostream>
using namespace std;
int main(){
    // caculate average of 3 numbers
    // int a, b, c;
    // cout<<"Enter three numbers: ";
    // cin>>a>>b>>c;
    // cout<<"Avg is "<<a+b+c/3;

    // calculate square of a number
    // int a;
    // cout<<"Enter a number: ";
    // cin>>a;
    // cout<<"Square is "<<a*a;

    // swap two numbers without using third variable
    // int a, b;
    // cout<<"Enter two number: ";
    // cin>>a>>b;
    // cout<<"Before swap "<<a<<" & "<<b<<endl;
    // a=a+b;
    // b=a-b;
    // a=a-b;
    // cout<<"Before swap "<<a<<" & "<<b<<endl;

    // find maximum of two numbers
    // int a, b;
    // cout<<"Enter two number: ";
    // cin>>a>>b;
    // if(a>b){
    //     cout<<a<<" is max";
    // } else if(b>a){
    //     cout<<b<<" is max";
    // } else {
    //     cout<<"Both are equal";
    // }

    // add all numbers of an array
    int arr[10], sum=0;
    cout<<"Enter 10 integers values: ";
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    for(int i=0; i<10; i++){
        sum=sum+arr[i];
    }
    cout<<"Sum is "<<sum;
    
    return 0;
}