/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include "bank.h"
#include <iostream>
using namespace std;

int main() {
    Bank B;
    int choice;
    B.getdata();
    cout << "Information of Balance\n1: Display\n2: Deposit\n3: Withdraw\n4: Total Amount\n5: Exit" << endl;

    do {
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                B.displaydata();
                break;
            case 2:
                B.depositamount();
                break;
            case 3:
                B.withdrawlamount();
                break;
            case 4:
                B.Totalamount();
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
