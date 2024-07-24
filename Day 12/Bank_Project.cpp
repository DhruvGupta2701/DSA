#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    string name;
    int balance;

public:
    BankAccount(string acc, string n, int b) {
        accountNumber = acc;
        name = n;
        balance = b;
    }

    void deposit(int amt) {
        balance += amt;
    }

    void withdraw(int amt) {
        if (amt > 0 && balance >= amt) {
            balance -= amt;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    void display() {
        cout << "Acc_no. = " << accountNumber << endl;
        cout << "name = " << name << endl;
        cout << "balance = " << balance << endl;
    }
};

int main() {
    string acc, name;
    int balance;

    cout << "Enter account number: ";
    cin >> acc;
    cout << "Enter account holder's name: ";
    cin >> name;
    cout << "Enter initial balance: ";
    cin >> balance;

    BankAccount ob(acc, name, balance);

    while (true) {
        int choice;
        cout << "\n1. Display Account Info" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
        case 1:
            ob.display();
            break;
        case 2: {
            int amt;
            cout << "Enter amount to deposit: ";
            cin >> amt;
            ob.deposit(amt);
            break;
        }
        case 3: {
            int amt;
            cout << "Enter amount to withdraw: ";
            cin >> amt;
            ob.withdraw(amt);
            break;
        }
        case 4:
            return 0;
        default:
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}


