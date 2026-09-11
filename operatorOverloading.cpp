////////////////////////////////////////////// Arithmetic operators
// #include<iostream>
// using namespace std;

// class Number {
//     private:
//     int a, b;
//     public:
//     void setData(int x, int y){
//         a=x;
//         b=y;
//     }
//     void showData(){
//         cout<<a<<endl;
//         cout<<b<<endl;
//     }
//     Number operator+(Number n){
//         Number temp;
//         temp.a=a+n.a;
//         temp.b=b+n.b;
//         return temp;
//     }
//     Number operator-(Number n){
//         Number temp;
//         temp.a=a-n.a;
//         temp.b=b-n.b;
//         return temp;
//     }
//     Number operator*(Number n){
//         Number temp;
//         temp.a=a*n.a;
//         temp.b=b*n.b;
//         return temp;
//     }
//     Number operator/(Number n){
//         Number temp;
//         temp.a=a/n.a;
//         temp.b=b/n.b;
//         return temp;
//     }
//     Number operator%(Number n){
//         Number temp;
//         temp.a=a%n.a;
//         temp.b=b%n.b;
//         return temp;
//     }
// };

// int main(){
//     Number n1, n2, n3;
//     n1.setData(2, 2);
//     n2.setData(3, 3);
//     n3=n1+n2;
//     n3.showData();
//     n3=n1-n2;
//     n3.showData();
//     n3=n1*n2;
//     n3.showData();
//     n3=n1/n2;
//     n3.showData();
//     n3=n1%n2;
//     n3.showData();
//     return 0;
// }

////////////////////////////////////////////// Comparison operators
// #include <iostream>
// using namespace std;
// class Number {
// private:
//   int n1, n2;

// public:
//   Number(int a, int b) {
//     n1 = a;
//     n2 = b;
//   }
//   bool operator==(Number n) { return (n1 == n.n1 && n2 == n.n2); }
//   bool operator!=(Number n) { return (n1 != n.n1 && n2 != n.n2); }
//   bool operator>(Number n) { return (n1 > n.n1 && n2 > n.n2); }
//   bool operator<(Number n) { return (n1 < n.n1 && n2 < n.n2); }
//   bool operator>=(Number n) { return (n1 >= n.n1 && n2 >= n.n2); }
//   bool operator<=(Number n) { return (n1 <= n.n1 && n2 <= n.n2); }
// };
// int main() {
//   Number n1(2, 2), n2(3, 3);
//   if (n1 == n2) {
//     cout << "Equal" << endl;
//   } else {
//     cout << "Not Equal" << endl;
//   }

//   if (n1 != n2) {
//     cout << "Not Equal" << endl;
//   } else {
//     cout << "Equal" << endl;
//   }

//   if (n1 > n2) {
//     cout << "n1 is Greatest" << endl;
//   } else if (n2 > n1) {
//     cout << "n2 is Greatest" << endl;
//   } else {
//     cout << "Both are equal" << endl;
//   }

//   if (n1 < n2) {
//     cout << "n1 is Smallest" << endl;
//   } else if (n1 > n2) {
//     cout << "n2 is Smallest" << endl;
//   } else {
//     cout << "Both are equal" << endl;
//   }

//   if (n1 >= n2) {
//     cout << "n1 is Greatest & equal to n2" << endl;
//   } else if (n2 >= n1) {
//     cout << "n2 is Greatest & equal to n1" << endl;
//   } else {
//     cout << "Both are equal" << endl;
//   }

//   if (n1 <= n2) {
//     cout << "n1 is Smallest & equal to n2" << endl;
//   } else if (n2 <= n1) {
//     cout << "n2 is Smallest & equal to n1" << endl;
//   } else {
//     cout << "Both are equal" << endl;
//   }

//   if (n1 == n2) {
//     cout << "n1 equal to n2";
//   } else if (n1 != n2) {
//     cout << "n1 not equal to n2";
//   } else if (n1 > n2) {
//     cout << "n1 is greater to n2";
//   } else if (n1 < n2) {
//     cout << "n1 is smaller to n2";
//   } else if (n1 >= n2) {
//     cout << "n1 is greater & equal to n2";
//   } else if (n1 <= n2) {
//     cout << "n1 is smaller & equal to n2";
//   } else {
//     cout << "Both are equal";
//   }

//   return 0;
// }

////////////////////////////////////////////// Increment/Decrement operators
// #include <iostream>
// using namespace std;
// class Number {
// private:
//   int value;

// public:
//   Number(int v) { value = v; }
//   void operator++() { ++value; }
//   // The int is basically a dummy parameter used to tell the compiler: "This is
//   // the postfix version."
//   void operator++(int) { value++; }
//   void operator--() { --value; }
//   void operator--(int) { value--; }
//   void display() { cout << "Value = " << value << endl; }
// };
// int main() {
//   Number n1(10);
//   n1.display();

//   ++n1;
//   n1.display();

//   n1++;
//   n1.display();

//   Number n2(20);
//   n2.display();

//   --n2;
//   n2.display();

//   n2--;
//   n2.display();

//   return 0;
// }


////////////////////////////////////////////// Logical operators
// #include<iostream>
// using namespace std;
// class Number {
//   private: 
//     int value;
// public:
//     Number(int v){
//         value=v;
//     }
//     bool operator&&(const Number& obj){
//         return value && obj.value;
//     }
//     bool operator||(const Number& obj){
//         return value || obj.value;
//     }
//     bool operator!(){
//         return !value;
//     }
// };
// int main(){
//     Number num1(10);
//     Number num2(0);

//     cout<<"num1 && num2 = "<<(num1 && num2)<<endl;
//     cout<<"num1 || num2 = "<<(num1 || num2)<<endl;
//     cout<<"!num1"<<(!num1)<<endl;
//     cout<<"!num2"<<(!num2)<<endl;
//     return 0;
// }


