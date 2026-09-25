#include<iostream>
using namespace std;
int main(){
    // print all prime numbers between two given numbers
    // int a, b, prime;
    // cout<<"Enter two numbers: ";
    // cin>>a>>b;
    // for(int i=a; i<b; i++){
    //     prime=1;
    //     for(int j=2; j<i; j++){
    //         if(i%j==0){
    //             prime=0;
    //             break;
    //         }
    //     }
    //     if(prime==1){
    //         cout<<i<<endl;
    //     }
    // }

    // find highest digit in given number
    // int a, high;
    // cout << "Enter a number: ";
    // cin >> a;
    // high = a % 10;
    // a = a / 10;
    // while (a != 0)
    // {
    // if (high < a % 10)
    // {
    //     high = a % 10;
    // }
    // a = a / 10;
    // }
    // cout << "Highest digit is " << high;
    
    // calculate x raised to the power y
    // int x, value=1, y;
    // cout<<"Enter a value of x: ";
    // cin>>x;
    // cout<<"Enter a power on x: ";
    // cin>>y;
    // for(int i=1; i<=y; i++){
    //     value=value*x;
    // }
    // cout<<"Value: "<<value;

    // given number is a term in a fibonacci series or not
    int a=0, b=1, c, n;
    cout<<"Enter a number: ";
    cin>>n;
    while(b<n){
        c=a+b;
        a=b;
        b=c;
    }
    if(n==0){
        cout<<"Fibonacci number";
    } else if(n==1){
        cout<<"Fibonacci number";
    } else if(b==n){
        cout<<"Fibonacci number";
    } else {
        cout<<"Not fibonacci number";
    }
    
    return 0;
}




