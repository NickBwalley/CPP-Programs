#include <iostream>
#include "PinChecker.h"
using namespace std;

PinChecker::PinChecker()
{
    const int PIN = 1234;
    int remaining = 3;
    int pin;
    cout << "Enter 4-Digit PIN-NUMBER: " << endl;
    cin >> pin;
    while(pin != PIN){
        cout << "Incorrect PIN!.." << endl;
        cout << "-------------------------------" << endl;
        cout << "You have 3Trials Remaining..." << endl;
        cout << "-------------------------------" << endl;
        for(int trials = 0; trials < 3; trials++){
            cout << "Re-Enter 4-Digit PIN: "<< endl;
            cin >> pin;
            if(pin == PIN){
                break;
            }
            else{
                cout << "Incorrect-Pin!..." << endl;
                cout << remaining - 1  << " Trials Remaining..." << endl;
                remaining--;
                cout << endl;
            }
        }
        cout << "Phone Locked!..." << endl;
        break;
    }
    while(pin == PIN){
        cout << "Phone unLocked!..." << endl;
        break;
    }









}
