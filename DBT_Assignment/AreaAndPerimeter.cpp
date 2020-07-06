#include <iostream>
#include "AreaAndPerimeter.h"
using namespace std;

AreaAndPerimeter::AreaAndPerimeter()
{
    double radius, result;
    int operation;
    cout << "Enter the Radius of the Circle: " << endl;
    cin >> radius;
    cout << "Choose the Operation to Perform: \n 1. Area of Circle \n 2. Perimeter of Circle " << endl;
    cin >> operation;

    switch(operation){
    case 1:
        result = 3.142 * radius * radius;
        cout << "Area of Circle is: " << result << endl;
        break;
    case 2:
        result = 3.142 * (radius + radius);
        cout << "Perimeter of Circle is: " << result << endl;
        break;
    default:
        cout << "Invalid Operation!... Please Try Again!.." << endl;
    }
}
