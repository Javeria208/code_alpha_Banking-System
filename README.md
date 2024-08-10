#pragma once
#include <iostream>
#include <string>
using namespace std;

class Customer {
private:
    int customerID;
    string name;

public:
    void getCustomerDetails();
    void displayCustomerDetails();
    int getCustomerID() const { return customerID; }
};
