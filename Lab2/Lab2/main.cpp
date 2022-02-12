//
//  main.cpp
//  Lab2
//
//  Created by AJ Schrier on 2/11/22.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    int option;
    float area;
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cin >> option;
    
    switch (option) {
        case 1:
            // Area of a circle
            double r;
            cout << "Enter the radius of the circle: " << endl;
            cin >> r;
            if (r < 0) {
                cout << "--ERROR: Invalid radius " << r << "--" << endl;
                break;
            }
            area = 3.14159 * pow(r, 2);
            cout << "Area: " << area << endl;
            break;
        case 2:
            // Area of a rectangle
            double l, w;
            
            cout << "Enter the length of the rectangle: " << endl;
            cin >> l;
            if (l < 0) {
                cout << "--ERROR: Invalid length " << l << "--" << endl;
                break;
            }
            
            cout << "Enter the width of the rectangle: " << endl;
            cin >> w;
            if (w < 0) {
                cout << "--ERROR: Invalid width " << w << "--" << endl;
                break;
            }
            
            area = l * w;
            cout << "Area: " << area << endl;
            break;
        case 3:
            double b, h;
            // Area of a triangle
            cout << "Enter the base of the triangle: " << endl;
            cin >> b;
            if (b < 0) {
                cout << "--ERROR: Invalid base " << b << "--" << endl;
                break;
            }
            
            cout << "Enter the height of the triangle: " << endl;
            cin >> h;
            if (h < 0) {
                cout << "--ERROR: Invalid height " << h << "--" << endl;
                break;
            }
            
            area = b * h * 0.5;
            cout << "Area: " << area << endl;
            break;
        case 4:
            // Area of a...oh wait, we're exiting
            cout << "Exiting." << endl;
            break;
        default:
            cout << "--ERROR: Invalid option " << option << "--" << endl;
    }
}
