
// #include <iostream>
// void calAvg(float a, float b, float c){
//     float avg=0;
//     avg=(a+b+c)/3;
//     std::cout<<"Avg is "<<avg<<std::endl;
// }

// void swapWithoutUsingThirdVar(int a, int b){
//     std::cout<<"Before swap "<<a<<b<<std::endl;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     std::cout<<"After swap "<<a<<b<<std::endl;
// }

// void maxNumber(int a, int b){
//     if(a>b){
//         std::cout<<a<<" is max"<<std::endl;
//     } else if(b>a){
//         std::cout<<b<<" is max"<<std::endl;
//     } else {
//         std::cout<<"Both are same"<<std::endl;
//     }
// }

// void sumOfTenNumbers(){
//     int a[10], sum=0;
//     std::cout<<"Enter 10 numbers: ";
//     for(int i=0; i<=9; i++){
//         std::cin>>a[i];
//     }

//     for(int i=0; i<=9; i++){
//         sum=sum+a[i];
//     }

//     std::cout<<"Sum is "<<sum;
// }

// int main() {
//     float a,b,c;
//     std::cout<<"Enter three values: ";
//     std::cin>>a>>b>>c;
//     calAvg(a,b,c);

//     int num=10;
//     std::cout<<"Square of "<<num<<" is "<<num*num;

//     swapWithoutUsingThirdVar(2, 4);

//     maxNumber(4, 2);

//     sumOfTenNumbers();
//     return 0;
// }

#include <iostream>
using namespace std;

void calAvg(int a, int b, int c);
void square(int num);
void swapWithoutUsingThirdVar(int a, int b);
void maxNumber(int a, int b);

int main() {
  int a, b, c;
  cout << "Enter three values: ";
  cin >> a >> b >> c;
  calAvg(a, b, c);

  int num = 10;
  square(num);

  swapWithoutUsingThirdVar(2, 4);

  maxNumber(2, 4);

  return 0;
}

void calAvg(int a, int b, int c) {
  float avg = (a + b + c) / 3;
  cout << "Avg is " << avg;
}

void square(int num) { cout << "Square is " << num * num; }

void swapWithoutUsingThirdVar(int a, int b) {
  cout << "Before swap: " << a << b << endl;
  a = a + b;
  b = a - b;
  a = a - b;
  cout << "After swap: " << a << b << endl;
}

void maxNumber(int a, int b) {
  if (a > b) {
    cout << a << " is greater";
  } else if (b > a) {
    cout << b << " is greater";
  } else {
    cout << "Both are equal";
  }
}
