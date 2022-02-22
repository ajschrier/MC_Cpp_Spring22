//
//  main.cpp
//  Lab3
//
//  Created by AJ Schrier on 2/15/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Enter a series of integers." << endl;
    cout << "Enter '-99' to indicate the end of the series."<< endl;
    cout << "At the end, the largest and smallest numbers will be displayed." << endl;
    cout << endl;
    
    int count = 0;
    int highest = -2147483648;
    int lowest = 2147483647;
    int value;
    cout << "Enter value " << ++count << ": ";
    cin >> value;
    do {
        if (value > highest) {
            highest = value;
        };
        if (lowest > value) {
            lowest = value;
        };
        cout << "Enter value " << ++count << ": ";
        cin >> value;
    } while (value != -99);
    
    cout << "Lowest value: " << lowest << endl;
    cout << "Highest value: " << highest << endl;
    return 0;
}
