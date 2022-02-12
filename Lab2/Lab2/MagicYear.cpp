//
//  main.cpp
//  Lab2
//
//  Created by AJ Schrier on 2/11/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //Determine if the month * the day is equal to the year
    
    int month, day, year;
    
    cout << "Enter the month: ";
    cin >> month;
    
    cout << "Enter the day: ";
    cin >> day;
    
    cout << "Enter the year (two digits): ";
    cin >> year;
    
    if (month * day == year) {
        cout << "Magic year!" << endl;
    } else {
        cout << "Not a magic year :(" << endl;
    }
    
    return 0;
}
