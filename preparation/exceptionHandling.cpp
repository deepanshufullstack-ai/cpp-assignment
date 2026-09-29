// #include <iostream>
// using namespace std;

// class BankAccount
// {
// private:
//     int balance;
// public:
//     BankAccount(int b)
//     {
//         balance = b;
//     }

//     void withdraw(int amount)
//     {
//         if (amount > balance)
//         {
//             throw 1;
//         }

//         balance = balance - amount;

//         cout << "Withdrawal successful" << endl;
//         cout << "Remaining Balance: " << balance << endl;
//     }
// };
// int main()
// {
//     BankAccount account(5000);

//     try
//     {
//         account.withdraw(10000);
//     }
//     catch (int error)
//     {
//         if(error == 1){

//         }
//         cout << "Exception: Insufficient Balance" << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

class BankAccount
{
private:
    int balance;

public:
    BankAccount(int b)
    {
        balance = b;
    }

    void withdraw(int amount)
    {
        if (amount > balance)
        {
            throw "Insufficient Balance";
        }

        balance = balance - amount;

        cout << "Withdrawal successful" << endl;
        cout << "Remaining Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account(5000);

    try
    {
        account.withdraw(10000);
    }
    catch (const char* message)
    {
        cout << "Exception: " << message << endl;
    }

    return 0;
}

// Exception handling in C++ is used to handle runtime errors without suddenly terminating the program.

// Exception handling means detecting an error and handling it properly instead of allowing the program to crash.

// try
// throw
// catch