#include <iostream>
using namespace std;

inline int square(int n) { return n * n; }

inline int largest(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

inline int largest(int a, int b, int c) {
  int max = a;

  if (b > max) {
    max = b;
  }

  if (c > max) {
    max = c;
  }
  return max;
}

inline bool isEven(int n) { return n % 2 == 0; }

class Student {
public:
  int getMarks() { // Functions defined inside a class definition are implicitly inline.
    return 90;
  }
};

int main(){
  // int result=square(5);
  // cout<<"Square = "<<result;

  // cout<<"Largest = "<<largest(10, 30);

  // cout << "Largest = " << largest(10, 50, 30);

  // int num=10;
  // if(isEven(num)){
  //     cout<<"Even";
  // } else {
  //     cout<<"Odd";
  // }

  Student s;
  cout << "Marks = " << s.getMarks();
  return 0;
}