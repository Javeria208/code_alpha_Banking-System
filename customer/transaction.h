#pragma once
#include <iostream>
using namespace std;

class Transaction {
private:
    int transactionID;
    double amount;
    string type; // Deposit or Withdrawal

public:
    void recordTransaction(int id, double amt, const string& transactionType);
    void displayTransaction();
};
