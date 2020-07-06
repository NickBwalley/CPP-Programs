#include <iostream>
#include "PinChecker.h"
using namespace std;

PinChecker::PinChecker()
{
    const int PIN = 1234;
    int pin;
    cout << "Enter 4-Digit PIN-NUMBER: " << endl;
    cin >> pin;
    while(pin != PIN){
        cout << "Incorrect PIN!.." << endl;
        cout << "-------------------------------" << endl;
        cout << "You have 3Trials Remaining..." << endl;
        cout << "-------------------------------" << endl;
    }
    while(pin == PIN){
        cout << "Phone unLocked!..." << endl;
        break;
    }









}
