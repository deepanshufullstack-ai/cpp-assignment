#include<iostream>
using namespace std;

class Complex {
  public:
    int real;
    int imag;
    Complex(int r, int i){
        real=r;
        imag=i;
    }
    Complex operator+(Complex c){
        Complex temp(0, 0); 
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    
};

class Number {
    public:
    int value;
    Number(int v){
        value=v;
    }
    // Unary Operator Overloading
    void operator++(){
        value++;
    }
    // Binary Operator Overloading
    Number operator+(Number n){
        return Number(value+n.value);
    }
    void display(){
        cout<<"Value = "<<value<<endl;
    }
};

int main(){
    // Complex c1(10, 20);
    // Complex c2(30, 40);
    // Complex c3=c1+c2;
    // c3.display();

    // Number n1(10);
    // ++n1;
    // n1.display();

    Number n1(10);
    Number n2(20);
    Number n3=n1+n2;
    cout<<n3.value;
    return 0;
}

// Operator Overloading
// Operator overloading allows us to give an operator a special meaning for our class objects.

