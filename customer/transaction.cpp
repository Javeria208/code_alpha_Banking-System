#include"transaction.h"
#include<iostream>
using namespace std;
void Transaction::recordTransaction(int id, double amt, const string& transactionType) {
    transactionID = id;
    amount = amt;
    type = transactionType;
}

void Transaction::displayTransaction() {
    cout << "Transaction ID: " << transactionID << endl;
    cout << "Amount: " << amount << endl;
    cout << "Type: " << type << endl;
}
