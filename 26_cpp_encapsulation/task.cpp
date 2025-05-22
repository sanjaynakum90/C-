#include <iostream>

using namespace std;

class Bank {
private:
    int balance = 10900;
    int pin = 9890;

public:
    void depositBalance(int deposit) {
        balance += deposit;
        cout << "Amount deposited successfully!" << endl;
    }

    void withdrawBalance(int amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully!" << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void checkBalance(int userPin) {
        if (pin == userPin) {
            cout << "Balance is: " << balance << " /-" << endl;
        } else {
            cout << "Invalid pin. Please try again!" << endl;
        }
    }
};

int main() {
    Bank user1;
    int userPin;
    int choice ;

    cout << "Enter your pin: ";
    cin >> userPin;

    while (choice != 0) {
        cout << endl
             << "----------------------------------" << endl;
        cout << "Press 1 to check balance" << endl;
        cout << "Press 2 to deposit money" << endl;
        cout << "Press 3 to withdraw money" << endl;
        cout << "Press 0 to exit" << endl;
        cout << "----------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            user1.checkBalance(userPin);
            break;
        }
        case 2: {
            int deposit;
            cout << "Enter deposit amount: ";
            cin >> deposit;
            user1.depositBalance(deposit);
            break;
        }
        case 3: {
            int withdrawAmount;
            cout << "Enter withdrawal amount: ";
            cin >> withdrawAmount;
            user1.withdrawBalance(withdrawAmount);
            break;
        }
        case 0:
            cout << "Thank you for using the banking system. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again!" << endl;
        }
    }

    return 0;
}