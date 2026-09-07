// #include <iostream>
// using namespace std;

// void printAllPrimeBetweenTwoNumbers(int a, int b) {
//   int prime;
//   for (int i = a + 1; i <= b - 1; i++) {
//     int prime = 1;
//     for (int j = 2; j <= i - 1; j++) {
//       if (i % j == 0) {
//         prime = 0;
//         break;
//       }
//     }
//     if (prime == 1) {
//       cout << i << endl;
//     }
//   }
// }

// void findMaxDigit(int n) {
//   int maxDigit;
//   maxDigit = n % 10;
//   n = n / 10;
//   while (n) {
//     if (maxDigit < n % 10) {
//       maxDigit = n % 10;
//     }
//     n = n / 10;
//   }
//   cout << "Max digit is " << maxDigit;
// }

// void calPow(int x, int y) {
//   int val = 1;
//   if (x == 0) {
//     cout << "Enter non zero value";
//     return;
//   } else if (y == 0) {
//     val = val * x;
//     ;
//     cout << x << " raised to the power " << y << " is " << val;
//   } else {
//     for (int i = 1; i <= y; i++) {
//       val = val * x;
//     }
//     cout << x << " raised to the power " << y << " is " << val;
//   }
// }

// void pascalTriangle() {}

// void fibonacciOrNot(int n) {
//   int a = 0, b = 1, c;
//   if (n == 0 || n == 1) {
//     cout << "Fibonacci number";
//   }

//   while (b < n) {
//     c = a + b;
//     a = b;
//     b = c;
//   }

//   if (b == n) {
//     cout << "Fibonacci number";
//   } else {
//     cout << "Not a fibonacci number";
//   }
// }

// int main() {
//   int a, b;
//   cout<<"Enter two numbers: ";
//   cin>>a>>b;
//   printAllPrimeBetweenTwoNumbers(a, b);

//   int a;
//   cout<<"Enter a number: ";
//   cin>>a;
//   findMaxDigit(a);

//   int x, y;
//   cout<<"Enter value of x & y: ";
//   cin>>x>>y;
//   calPow(x, y);

//   int a;
//   cout << "Enter a number: ";
//   cin >> a;
//   fibonacciOrNot(a);
//   return 0;
// }

#include <iostream>
using namespace std;

void printAllPrime(int, int);
void findMaxDigit(int);
void calXRaiseToY(int, int);
void isFibonacci(int);

int main() {
  printAllPrime(30, 40);
  findMaxDigit(5634);
  calXRaiseToY(2, 4);
  isFibonacci(10);
  return 0;
}

void printAllPrime(int a, int b) {
  for (int i = a + 1; i <= b - 1; i++) {
    int prime = 1;
    for (int j = 2; j <= i - 1; j++) {
      if (i % j == 0) {
        prime = 0;
        break;
      }
    }

    if (prime == 1) {
      cout << i << endl;
    }
  }
}

void findMaxDigit(int a) {
  int max = a % 10;
  a = a / 10;
  while (a > 0) {
    if (max < a % 10) {
      max = a % 10;
    }
    a = a / 10;
  }
  cout << "Max digit is " << max << endl;
}

void calXRaiseToY(int a, int b) {
  int value = 1;
  for (int i = 1; i <= b; i++) {
    value = value * a;
  }
  cout << a << " raised to power " << b << " is " << value << endl;
}

void isFibonacci(int n) {
  int a = 0, b = 1, c;
  if (n == 0 || n == 1) {
    cout << "Fibonacci";
    return;
  }

  while (b < n) {
    c = a + b;
    a = b;
    b = c;
  }

  if (b == n) {
    cout << "Fibonacci Number";
  } else {
    cout << "Not a Fibonacci Number";
  }
}