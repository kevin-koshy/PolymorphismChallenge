// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
//#include "Checking_Account.h"
//#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() {
    cout.precision(2);
    cout << fixed;
   

Account *ptr = new Trust_Account("Leo", 10000, 2.6);
cout << *ptr <<endl;
    
    return 0;
}

