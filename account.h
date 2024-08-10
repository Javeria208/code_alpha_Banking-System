
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    int accno;
    string name;
    double balance;

public:
    void get();
    void display();
    void deposit(double amount);
    void withdraw(double amount);
    int Tellaccno() const { return accno; }
    double Tellbalance() const { return balance; }
};
