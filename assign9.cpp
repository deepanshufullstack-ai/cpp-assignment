// #include<iostream>
// using namespace std;

// class Complex {
//     private: 
//     int a, b;

//     public: 
//     void setData(int x, int y){
//         a=x;
//         b=y;
//     }
//     void showData(){
//         cout<<"a="<<a<<" b="<<b<<endl;
//     }
//     Complex add(Complex c){
//         Complex temp;
//         temp.a=a+c.a;
//         temp.b=b+c.b;
//         return temp;
//     }
//     Complex subtract(Complex c){
//         Complex temp;
//         temp.a=a-c.a;
//         temp.b=b-c.b;
//         return temp;
//     }
//     Complex multiply(Complex c){
//         Complex temp;
//         temp.a = a*c.a - b*c.b;
//         temp.b = a*c.b + b*c.a;
//         return temp;
//     }
// };

// int main(){
//     Complex c1, c2, c3;
//     c1.setData(3, 4);
//     c1.showData();
//     c2.setData(4, 5);
//     c2.showData();
//     c3=c1.add(c2);
//     c3.showData();
//     c3=c1.subtract(c2);
//     c3.showData();
//     c3=c1.multiply(c2);
//     c3.showData();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Time {
//     private:
//     int h, m, s;

//     public:

//     void setTime(int a, int b, int c){
//         h = a;
//         m = b;
//         s = c;
//     }

//     void showTime(){
//         cout << "Time is " << h << ":" << m << ":" << s << endl;
//     }

//     void normalize(){
//         m = m + s / 60;
//         s = s % 60;

//         h = h + m / 60;
//         m = m % 60;
//     }

//     Time add(Time t){
//         Time temp;

//         temp.h = h + t.h;
//         temp.m = m + t.m;
//         temp.s = s + t.s;

//         temp.normalize();

//         return temp;
//     }

//     bool is_greater(Time t){
//         if(h > t.h){
//             return true;
//         }
//         else if(h < t.h){
//             return false;
//         }
//         else if(m > t.m){
//             return true;
//         }
//         else if(m < t.m){
//             return false;
//         }
//         else if(s > t.s){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };

// int main(){

//     Time t1, t2, t3;

//     t1.setTime(2, 75, 90);
//     t1.showTime();

//     t1.normalize();
//     t1.showTime();

//     t2.setTime(3, 75, 90);
//     t2.showTime();

//     t2.normalize();
//     t2.showTime();

//     t3 = t1.add(t2);
//     t3.showTime();

//     if(t1.is_greater(t2)){
//         cout << "t1 is greater than t2" << endl;
//     }
//     else{
//         cout << "t2 is greater than or equal to t1" << endl;
//     }

//     return 0;
// }



