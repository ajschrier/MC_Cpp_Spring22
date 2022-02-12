//
//  main.cpp
//  Lab2
//
//  Created by AJ Schrier on 2/11/22.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    double balance, feeTotal;
    int checkCount;
    
    //Ask for the beginning balance and the number of checks
    cout << "Enter the beginning balance: ";
    cin >> balance;
    //If balance is negative, display an urgent message indicating the account is overdrawn
    if (balance < 0) {
        cout << "----WARNING: Account overdrawn-----" << endl;
        return 0;
    }
    
    cout << "Enter the number of checks written: ";
    cin >> checkCount;
    //Do not accept a negative value for the number of checks written
    if (checkCount < 0) {
        cout << "----ERROR: Invalid check count-----" << endl;
        return 0;
    }
    
    //Bank charges $10 + month plus the following check fees:
    feeTotal = 10;
    if (checkCount >= 60) {
        //$.04 each for 60+ checks
        feeTotal += (checkCount * .04);
    } else if (checkCount < 60 && checkCount >= 40) {
        //$.06 each for 40-59 checks
        feeTotal += (checkCount * .06);
    } else if (checkCount < 40 && checkCount >= 20) {
        //$.08 each for 20-39 checks
        feeTotal += (checkCount * .08);
    } else {
        //$.10 each for fewer than 20 checks
        feeTotal += (checkCount * .1);
    }
    
    //Also charges $15 if the account falls below $400
    if ((balance - feeTotal) < 400) {
        feeTotal += 15;
    }
        
    //Compute and display the service fees for the month
    cout << "Total fees for this month: $" << setprecision(2) << fixed << feeTotal << endl;
    
}
