#include <iostream>
using namespace std;

// Global variable
int balance = 5000;
int pin = 1234;

// Function to check balance
void checkBalance()
{
    cout << "\nYour Current Balance is: "
         << balance << " Rs\n";
}

// Function to deposit money
void deposit()
{
    int amount;

    cout << "\nEnter amount to deposit: ";
    cin >> amount;

    if (amount > 0)
    {
        balance = balance + amount;
        cout << "Money Deposited Successfully!\n";
        cout << "New Balance: " << balance << " Rs\n";
    }
    else
    {
        cout << "Invalid Amount!\n";
    }
}

// Function to withdraw money
void withdraw()
{
    int amount;

    cout << "\nEnter amount to withdraw: ";
    cin >> amount;

    if (amount > 0 && amount <= balance)
    {
        balance = balance - amount;

        cout << "Please Collect Your Cash!\n";
        cout << "Remaining Balance: "
             << balance << " Rs\n";
    }
    else
    {
        cout << "Insufficient Balance or Invalid Amount!\n";
    }
}

// Main function
int main()
{
    int enteredPin;
    int choice;

    cout << "============================\n";
    cout << "     WELCOME TO ATM\n";
    cout << "============================\n";

    cout << "Enter Your PIN: ";
    cin >> enteredPin;

    if (enteredPin == pin)
    {
        cout << "\nLogin Successful!\n";

        do
        {
            cout << "\n===== ATM MENU =====\n";
            cout << "1. Check Balance\n";
            cout << "2. Deposit Money\n";
            cout << "3. Withdraw Money\n";
            cout << "4. Exit\n";

            cout << "\nEnter Your Choice: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    checkBalance();
                    break;

                case 2:
                    deposit();
                    break;

                case 3:
                    withdraw();
                    break;

                case 4:
                    cout << "\nThank You for Using ATM!\n";
                    break;

                default:
                    cout << "\nInvalid Choice! Try Again.\n";
            }

        } while (choice != 4);
    }
    else
    {
        cout << "\nIncorrect PIN! Access Denied.\n";
    }

    return 0;
}