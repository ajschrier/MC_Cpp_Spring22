//
//  main.cpp
//  Lab3
//
//  Created by AJ Schrier on 2/15/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int years;
    
    //The program should first ask for the number of years
    cout << "Enter the number of years: ";
    cin >> years;
    while (years < 1) {
        cout << "Invalid input " << years;
        cout << "Enter the number of years: ";
        cin >> years;
    }
    
    //The outer loop will iterate once for each year.
    double total = 0;
    for (int i = 1; i <= years; i++) {
        for (int j = 1; j <= 12; j++) {
            double input;
            cout << "Enter the inches of rainfall for year " << i << " month " << j << ": ";
            cin >> input;
            while (input < 0) {
                cout << "Invalid input " << input << endl;
                cout << "Enter the inches of rainfall for year " << i << " month " << j << ": ";
                cin >> input;
            }
            total += input;
        }
    }
    
    cout << "Total number of months: " << years * 12 << endl;
    cout << "Total rainfall: " << total << endl;
    cout << "Average rainfall per month: " << total / (years * 12) << endl;
    
    return 0;
}
