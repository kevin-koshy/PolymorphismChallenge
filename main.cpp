// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() {
    cout.precision(2);
    cout << fixed;
   

    Account *trust = new Trust_Account("James");
    cout <<*trust<<endl;

    Account *p1 = new Checking_Account("Larry", 100);
    Account *p2 = new Savings_Account("Moe", 500,3);
    Account *p3 = new Trust_Account("Curly", 900, 0.5);

    std::vector<Account *> accounts{p1, p2, p3};

    display(accounts);
    deposit(accounts, 2300);
    withdraw(accounts, 1000);

    display(accounts);

    return 0;
}

