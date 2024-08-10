#include"customer.h"
#include<iostream>
using namespace std;
void Customer::getCustomerDetails() {
    cout << "Enter customer ID: ";
    cin >> customerID;
    cout << "Enter customer name: ";
    cin >> name;
}

void Customer::displayCustomerDetails() {
    cout << "Customer ID: " << customerID << endl;
    cout << "Customer Name: " << name << endl;
}
