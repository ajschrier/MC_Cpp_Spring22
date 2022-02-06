//
//  main.cpp
//  Lab1
//
//  Created by AJ Schrier on 2/3/22.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    
    double  item1 = 15.95,
            item2 = 24.95,
            item3 = 6.95,
            item4 = 12.95,
            item5 = 3.95,
            subtotal,
            salesTaxRate = .07,
            salesTaxAmount,
            total;
    
    cout << "Price of item 1: " << setw(4) << "$" << item1 << "\n";
    cout << "Price of item 2: " << setw(4) << "$" << item2 << "\n";
    cout << "Price of item 3: " << setw(4) << "$" << item3 << "\n";
    cout << "Price of item 4: " << setw(4) << "$" << item4 << "\n";
    cout << "Price of item 5: " << setw(4) << "$" << item5 << "\n";
    
    cout << "-------------------------\n";

    subtotal = item1 + item2 + item3 + item4 + item5;
    cout << setw(20) << "Subtotal: " << "$" << subtotal << "\n";

    salesTaxAmount = subtotal * salesTaxRate;
    cout << setw(20) << "Sales Tax: " << "$" << setprecision(2) << fixed << salesTaxAmount  << setw(8) << "\n";

    total = subtotal + salesTaxAmount;
    cout << setw(20) << "Total: " << "$" << setprecision(2) << fixed <<  total << "\n";

    return 0;
}
