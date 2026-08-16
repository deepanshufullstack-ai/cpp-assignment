// // #include<iostream>
// // using namespace std;

// // class Complex {
// //     private:
// //     int a, b;

// //     public:
// //     void setData(int x, int y){
// //         a=x;
// //         b=y;
// //     }
// //     void showData(){
// //         cout<<"a="<<a<<" b="<<b<<endl;
// //     }
// //     Complex add(Complex c){
// //         Complex temp;
// //         temp.a=a+c.a;
// //         temp.b=b+c.b;
// //         return temp;
// //     }
// //     Complex subtract(Complex c){
// //         Complex temp;
// //         temp.a=a-c.a;
// //         temp.b=b-c.b;
// //         return temp;
// //     }
// //     Complex multiply(Complex c){
// //         Complex temp;
// //         temp.a = a*c.a - b*c.b;
// //         temp.b = a*c.b + b*c.a;
// //         return temp;
// //     }
// // };

// // int main(){
// //     Complex c1, c2, c3;
// //     c1.setData(3, 4);
// //     c1.showData();
// //     c2.setData(4, 5);
// //     c2.showData();
// //     c3=c1.add(c2);
// //     c3.showData();
// //     c3=c1.subtract(c2);
// //     c3.showData();
// //     c3=c1.multiply(c2);
// //     c3.showData();
// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;

// // class Time {
// //     private:
// //     int h, m, s;

// //     public:

// //     void setTime(int a, int b, int c){
// //         h = a;
// //         m = b;
// //         s = c;
// //     }

// //     void showTime(){
// //         cout << "Time is " << h << ":" << m << ":" << s << endl;
// //     }

// //     void normalize(){
// //         m = m + s / 60;
// //         s = s % 60;

// //         h = h + m / 60;
// //         m = m % 60;
// //     }

// //     Time add(Time t){
// //         Time temp;

// //         temp.h = h + t.h;
// //         temp.m = m + t.m;
// //         temp.s = s + t.s;

// //         temp.normalize();

// //         return temp;
// //     }

// //     bool is_greater(Time t){
// //         if(h > t.h){
// //             return true;
// //         }
// //         else if(h < t.h){
// //             return false;
// //         }
// //         else if(m > t.m){
// //             return true;
// //         }
// //         else if(m < t.m){
// //             return false;
// //         }
// //         else if(s > t.s){
// //             return true;
// //         }
// //         else{
// //             return false;
// //         }
// //     }
// // };

// // int main(){

// //     Time t1, t2, t3;

// //     t1.setTime(2, 75, 90);
// //     t1.showTime();

// //     t1.normalize();
// //     t1.showTime();

// //     t2.setTime(3, 75, 90);
// //     t2.showTime();

// //     t2.normalize();
// //     t2.showTime();

// //     t3 = t1.add(t2);
// //     t3.showTime();

// //     if(t1.is_greater(t2)){
// //         cout << "t1 is greater than t2" << endl;
// //     }
// //     else{
// //         cout << "t2 is greater than or equal to t1" << endl;
// //     }

// //     return 0;
// // }

// #include<iostream>
// using namespace std;

// class Matrix {
//     private:
//     int a[2][2];
//     public:
//     void input(){
//         cout<<"Enter 4 elements: ";
//         for(int i=0; i<2; i++){
//             for(int j=0; j<2; j++){
//                 cin>>a[i][j];
//             }
//         }
//     }
//     void display(){
//         for(int i=0; i<2; i++){
//             for(int j=0; j<2; j++){
//                 cout<<a[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     Matrix add(Matrix m){
//         Matrix temp;
//         for(int i=0; i<2; i++){
//             for(int j=0; j<2; j++){
//                 temp.a[i][j]=a[i][j]+m.a[i][j];
//             }
//         }
//         return temp;
//     }
//     Matrix sub(Matrix m){
//         Matrix temp;
//         for(int i=0; i<2; i++){
//             for(int j=0; j<2; j++){
//                 temp.a[i][j]=a[i][j]-m.a[i][j];
//             }
//         }
//         return temp;
//     }
//     Matrix multiply(Matrix m){
//         Matrix temp;
//         for(int i=0; i<2; i++){
//             for(int j=0; j<2; j++){
//                 temp.a[i][j]=a[i][j]*m.a[i][j];
//             }
//         }
//         return temp;
//     }
//     Matrix transpose(){
//         Matrix temp;
//         for(int i=0; i<2; i++){
//             for(int j=0; j<2; j++){
//                 temp.a[i][j]=a[j][i];
//             }
//         }
//         return temp;
//     }
// bool is_singular()
// {
//     int determinant;

//     determinant = (a[0][0] * a[1][1]) -
//                   (a[0][1] * a[1][0]);

//     return determinant == 0;
// }
// };

// int main(){
//     Matrix m1, m2, r;
//     cout<<"Enter first matrix: "<<endl;
//     m1.input();

//     cout<<"Enter second matrix: "<<endl;
//     m2.input();

//     cout<<"First matrix: "<<endl;
//     m1.display();

//     cout<<"Second matrix: "<<endl;
//     m2.display();

//     r=m1.add(m2);
//     cout<<"\nAddition: "<<endl;
//     r.display();

//     r=m1.sub(m2);
//     cout<<"\nSubtraction: "<<endl;
//     r.display();

//     r=m1.multiply(m2);
//     cout<<"\nMultiply: "<<endl;
//     r.display();

//     r=m1.transpose();
//     cout<<"\nTranspose of first matrix: "<<endl;
//     r.display();

//     if (m1.is_singular())
//         cout << "\nFirst matrix is Singular\n";
//     else
//         cout << "\nFirst matrix is Non-Singular\n";
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Complex
// {
// private:
//     int a, b;

// public:
//     void setData(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     void getData()
//     {
//         cout << a << b << endl;
//     }
//     Complex add(Complex c)
//     {
//         Complex temp;
//         temp.a = a + c.a;
//         temp.b = b + c.b;
//         return temp;
//     }
//     Complex subtract(Complex c)
//     {
//         Complex temp;
//         temp.a = a - c.a;
//         temp.b = b - c.b;
//         return temp;
//     }
//     Complex multiply(Complex c)
//     {
//         Complex temp;
//         temp.a = a * c.a - b * c.b;
//         temp.b = a * c.b + b * c.a;
//         return temp;
//     }
// };

// int main()
// {
//     Complex c1, c2, result;

//     c1.setData(3, 4);
//     c2.setData(1, 2);

//     c1.getData();
//     c2.getData();

//     result = c1.add(c2);
//     cout << "Addition: ";
//     result.getData();

//     result = c1.subtract(c2);
//     cout << "Subtraction: ";
//     result.getData();

//     result = c1.multiply(c2);
//     cout << "Multiplication: ";
//     result.getData();

//     return 0;
// }

#include <iostream>
using namespace std;
class Time
{

private:
    int h, m, s;

public:
    void setTime(int a, int b, int c)
    {
        h = a;
        m = b;
        s = c;
    }

    void showTime()
    {
        cout << "Time is " << h << ":" << m << ":" << s << endl;
    }

    void normalize()
    {
        m = m + s / 60;
        s = s % 60;

        h = h + m / 60;
        m = m % 60;
    }

    Time add(Time t)
    {
        Time temp;

        temp.h = h + t.h;
        temp.m = m + t.m;
        temp.s = s + t.s;

        temp.normalize();

        return temp;
    }

    bool is_greater(Time t)
    {
        if (h > t.h)
        {
            return true;
        }
        else if (h < t.h)
        {
            return false;
        }
        else if (m > t.m)
        {
            return true;
        }
        else if (m < t.m)
        {
            return false;
        }
        else if (s > t.s)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Time t1, t2, t3;
    t1.setTime(10, 30, 45);
    t2.setTime(5, 45, 30);

    t1.showTime();
    t2.showTime();

    t1.normalize();
    t1.showTime();
    t2.normalize();
    t2.showTime();

    t3 = t1.add(t2);
    t3.showTime();

    if (t1.is_greater(t2))
    {
        cout << "t1 is greater than t2" << endl;
    }
    else
    {
        cout << "t2 is greater than or equal to t1" << endl;
    }
    return 0;
}