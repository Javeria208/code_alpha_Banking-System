#include"account.h"
#include<iostream>
using namespace std;
void Account::get() {
    cout << "Enter Account number: ";
    cin >> accno;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your current balance: ";
    cin >> balance;
}

void Account::display() {
    cout << "Account number: " << accno << endl;
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << endl;
}

void Account::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Deposited " << amount << ". Current balance: " << balance << endl;
    } else {
        cout << "Invalid deposit amount!" << endl;
    }
}

void Account::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrew " << amount << ". Current balance: " << balance << endl;
    } else if (amount > balance) {
        cout << "Insufficient balance!" << endl;
    } else {
        cout << "Invalid withdrawal amount!" << endl;
    }
}
