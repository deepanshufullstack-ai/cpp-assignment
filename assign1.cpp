
// #include <iostream>
// void checkEvenOrOdd(int num){
//     if(num%2==0){
//         std::cout<<"Even";
//     } else {
//         std::cout<<"Odd";
//     }
// }

// void calFact(int num){
//     int fact=1;
//     for(int i=1; i<=num; i++){
//         fact=fact*i;
//     }
//     std::cout<<"Fact is "<<fact;
// }

// void swapTwoInt(int a, int b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     std::cout<<"a is "<<a<<"\n";
//     std::cout<<"b is "<<b<<"\n";
// }

// int findLcm(int a, int b){
//     int max;
//     max=a>b?a:b;
//     while(1){
//         if(max%a==0 && max%b==0){
//             return max;
//         }
//         max++;
//     }
// }

// int checkPrimeOrNot(int num){
//     int prime;
//     for(int i=2; i<=num-1; i++){
//         prime=1;
//         if(num%i==0){
//             prime=0;
//             return prime;
//         }
//     }
//     return prime;
// }

// int main() {
//     int num;
//     std::cout<<"Enter a number: ";
//     std::cin>>num;
//     checkEvenOrOdd(num);

//     int num;
//     std::cout<<"Enter a number: ";
//     std::cin>>num;
//     calFact(num);

//     int a, b;
//     std::cout<<"Enter two numbers: ";
//     std::cin>>a>>b;
//     swapTwoInt(a, b);

//     int a, b;
//     std::cout<<"Enter two numbers: ";
//     std::cin>>a>>b;
//     std::cout<<"Lcm is "<<findLcm(a, b);

//     int num, val;
//     std::cout<<"Enter a number: ";
//     std::cin>>num;
//     val=checkPrimeOrNot(num);
//     if(val){
//         std::cout<<"Prime";
//     } else {
//         std::cout<<"Not prime";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

void checkEvenOrOdd(int n);
void calFact(int n);
void swapValues(int a, int b);
void calLcm(int num1, int num2);
void checkPrimeOrNot(int num);

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  checkEvenOrOdd(num);

  int num1;
  cout << "Enter a number: ";
  cin >> num1;
  calFact(num1);

  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;
  swapValues(a, b);

  int num2;
  cout << "Enter a number: ";
  cin >> num2;
  checkPrimeOrNot(num2);
  return 0;
}

void checkEvenOrOdd(int n) {
  if (n % 2 == 0) {
    cout << "Even";
  } else {
    cout << "Odd";
  }
}

void calFact(int n) {
  int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact = fact * i;
  }
  cout << "Fact is " << fact;
}

void swapValues(int a, int b) {
  cout << "Before swap " << a << b;
  int temp;
  temp = a;
  a = b;
  b = temp;
  cout << "After swap " << a << b;
}

void calLcm(int num1, int num2) {
  int max;
  max = (num1 > num2) ? num1 : num2;
  while (1) {
    if (max % num1 == 0 && max % num2 == 0) {
      cout << "Lcm is" << max;
      break;
    }
    max++;
  }
}

void checkPrimeOrNot(int num) {
  int prime = 0;
  for (int i = 2; i < num - 2; i++) {
    if (num % i == 0) {
      prime = 1;
      break;
    }
  }
  if (prime == 1) {
    cout << "Not Prime";
  } else {
    cout << "Prime";
  }
}