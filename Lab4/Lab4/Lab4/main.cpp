//
//  main.cpp
//  Lab4
//
//  Created by AJ Schrier on 2/21/22.
//

#include <iostream>

// Chapter 6, Programming Challenge 2
#include <iostream>
using namespace std;

// Write the prototypes for the getLength,
// getWidth, getArea, and displayData
// functions here.

double getLength();
double getWidth();
double getArea();
void displayData(double, double, double);

int main()
{
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea();
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// You must write the getLength, getWidth, getArea, *
// and displayData functions.                       *
//***************************************************

double getLength() {
    double length;
    cout << "Enter the length: ";
    cin >> length;
    return length;
}

double getWidth() {
    double length;
    cout << "Enter the length: ";
    cin >> length;
    return length;
}

double getArea() {
    return 0.0;
}

void displayData(double length, double width, double area) {
    
}
