#include <iostream>
using namespace std;

class BankAccount {
private:
  int balance; // Hidden data

public:
  void setBalance(int b) {
    if (b >= 0)
      balance = b;
    else
      cout << "Invalid balance!" << endl;
  }

  int getBalance() { return balance; }
};

int main() {
  BankAccount account;

  account.setBalance(5000);

  cout << "Balance = " << account.getBalance() << endl;

  return 0;
}