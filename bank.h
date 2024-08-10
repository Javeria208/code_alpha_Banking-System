#pragma once
#include <iostream>
#include "account.h"
using namespace std;

class Bank {
private:
    Account A[3]; 
    int numAccounts; 

public:
    Bank() : numAccounts(0) {} 

    void getdata();
    void displaydata();
    void depositamount();
    void withdrawlamount();
    void searchdata();
    void Totalamount();
};
