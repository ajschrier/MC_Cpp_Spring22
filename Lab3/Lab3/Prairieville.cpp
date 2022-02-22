//
//  main.cpp
//  Lab3
//
//  Created by AJ Schrier on 2/15/22.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "(each * represents 1,000 people)" << endl;
    
    int year = 1900;
    int number;
    ifstream inputfile("/Users/ajschrier/Downloads/People.txt");
    while (inputfile >> number) {
        int asteriskCount = number / 1000;
        cout << year << " ";
        for (int i = 1; i <= asteriskCount; i++) {
            cout << "*";
        }
        cout << endl;
        year += 20;
    }
    inputfile.close();
    return 0;
}
