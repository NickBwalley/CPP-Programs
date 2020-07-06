#include <iostream>
#include "PinChecker.h"
using namespace std;

PinChecker::PinChecker()
{
    const int PIN = 1234;
    int pin;
    cout << "Enter 4-Digit PIN-NUMBER: " << endl;
    cin >> pin;
    if(pin != PIN)
        cout << "Incorrect PIN!.." << endl;
        cout << "-------------------------------" << endl;
        cout << "You have 3Trials Remaining..." << endl;
        cout << "-------------------------------" << endl;

    for(int trials = 0; trials < 3; trials++){
        cout << "Enter a 4-Digit PIN-NUMBER: " << endl;
        cin >> pin;
    }



}
