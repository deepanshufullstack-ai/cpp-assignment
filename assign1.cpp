#include<iostream>
using namespace std;

void swap(int *a, int *b);

int main(){
    // check whether a given number is even or odd
    // int a;
    // cout<<"Enter a number: "<<endl;
    // cin>>a;
    // if(a%2==0){
    //     cout<<"Number is even";
    // } else {
    //     cout<<"Number is odd";
    // }

    // calculate factorial of a number
    // int a, fact=1;
    // cout<<"Enter a number: ";
    // cin>>a;
    // for(int i=a; i>=1; i--){
    //     fact=fact*i;
    // }
    // cout<<"Factorial is: "<<fact;

    // swap values of two int variables
    // int a, b;
    // cout<<"Enter two numbers: ";
    // cin>>a>>b;
    // cout<<"Before swap "<<a<<" & "<<b<<endl;
    // swap(&a, &b);
    // cout<<"Before swap "<<a<<" & "<<b<<endl;

    // calculate lcm of two numbers
    // int a, b, max;
    // cout<<"Enter two numbers: ";
    // cin>>a>>b;
    // max=a>b?a:b;
    // while(1){
    //     if(max%a==0 && max%b==0){
    //         cout<<"Max is "<<max;
    //         break;
    //     }
    //     max++;
    // }

    // check whether a given number is prime or not
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    for(int i=2; i<a; i++){
        if(a%i==0){
            cout<<"Not prime number";
            break;
        }else {
            cout<<"Prime number";
            break;
        }
    }
    return 0;
}

void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}