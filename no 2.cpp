#include <iostream>

using namespace std;

class Account {
public:
    int accountNumber;
    string accountHolder;
    double balance;


    Account(int aN, string aH)  {
        accountNumber=aN;
        accountHolder=aH;
        balance=0;
        cout << "Account 1 created with balance " << balance << endl;
    }

    Account(int aN, string aH, double b)   {
        accountNumber=aN;
        accountHolder=aH;
        balance=b;
        cout << "Account 2 created with balance " << balance << endl;
    }


    void deposit(double amount) {
        balance =balance + amount;
        cout << "Deposit 1: " << amount << " New Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance = balance- amount;
            cout << "Withdrawal1: " << amount << " New balance: " << balance << endl;
        } else {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }


};

int main() {

    Account a1(1001, "Alice");
    Account a2( 1002, "Bob", 5000);


    a1.deposit(1500);
    a1.withdraw(800);


    return 0;
}
