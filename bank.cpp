#include"bank.h"
#include<iostream>
using namespace std;
void Bank::getdata() {
    cout << "Enter number of accounts (max 3): ";
    cin >> numAccounts;
    if (numAccounts > 3) numAccounts = 3; 

    for (int i = 0; i < numAccounts; ++i) {
        A[i].get();
    }
}

void Bank::displaydata() {
    for (int i = 0; i < numAccounts; ++i) {
        A[i].display();
    }
}

void Bank::depositamount() {
    bool found = false;
    int Accno;
    double amount;
    cout << "Enter account number: ";
    cin >> Accno;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    for (int i = 0; i < numAccounts; ++i) {
        if (Accno == A[i].Tellaccno()) {
            A[i].deposit(amount);
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "No such account is available" << endl;
    }
}

void Bank::withdrawlamount() {
    bool found = false;
    int Accno;
    double amount;
    cout << "Enter account number: ";
    cin >> Accno;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    for (int i = 0; i < numAccounts; ++i) {
        if (Accno == A[i].Tellaccno()) {
            A[i].withdraw(amount);
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "No such account is available" << endl;
    }
}

void Bank::searchdata() {
    bool found = false;
    int Accno;
    cout << "Enter account number: ";
    cin >> Accno;

    for (int i = 0; i < numAccounts; ++i) {
        if (Accno == A[i].Tellaccno()) {
            A[i].display();
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Data not found" << endl;
    }
}

void Bank::Totalamount() {
    double totalAmount = 0;
    for (int i = 0; i < numAccounts; ++i) {
        totalAmount += A[i].Tellbalance();
    }
    cout << "Total amount is: " << totalAmount << endl;
}
