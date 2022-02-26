//
//  main.cpp
//  Lab4
//
//  Created by AJ Schrier on 2/21/22.
//

#include <iostream>
using namespace std;

void coinToss();

int main()
{
    unsigned seed = time(0);
    srand(seed);
    int tosses;
    cout << "Enter the number of tosses: ";
    cin >> tosses;
    
    for (int i = 1; i <= tosses; i++) {
        coinToss();
    }
    
   return 0;
}

void coinToss() {
    string result = ((rand() % (2)) + 1 == 1) ? "Heads" : "Tails";
    cout << "Toss result: " << result << endl;
}
