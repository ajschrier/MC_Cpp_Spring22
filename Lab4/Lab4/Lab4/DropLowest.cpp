//
//  main.cpp
//  Lab4
//
//  Created by AJ Schrier on 2/21/22.
//

#include <iostream>
using namespace std;

void getScore(int, int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
    int score1,
        score2,
        score3,
        score4,
        score5;
    
    // Get the five scores
    getScore(1, score1);
    getScore(2, score2);
    getScore(3, score3);
    getScore(4, score4);
    getScore(5, score5);
    
    calcAverage(score1, score2, score3, score4, score5);
    
    return 0;
}

void getScore(int scoreCount, int &score) {
    int input;
    do {
        cout << "Enter score " << scoreCount << ": ";
        cin >> input;
        if (input < 0 || input > 100) {
            cout << "--ERROR: Invalid score---" << endl;
        }
    } while (input < 0 || input > 100);
    
    score = input;
}

void calcAverage(int score1, int score2, int score3, int score4, int score5) {
    int total = 0;
    total += (score1 + score2 + score3 + score4 + score5);
    total -= findLowest(score1, score2, score3, score4, score5);
    cout << "Average: " << total / 4 << endl;
}

int findLowest(int score1, int score2, int score3, int score4, int score5) {
    int lowest = score1;
    
    if (lowest > score2)
        lowest = score2;
    
    if (lowest > score3)
        lowest = score3;
    
    if (lowest > score4)
        lowest = score4;
    
    if (lowest > score5)
        lowest = score5;
    
    return lowest;
}
