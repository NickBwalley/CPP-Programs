#include <iostream>
#include "Nicky.h"
using namespace std;

Nicky::Nicky()
{
    cout << "----------------------------" << endl;
    cout << "FUNCTION OVERLOADING!.." << endl;
    cout << "----------------------------" << endl;
}

double Nicky::toSum(double b)
{
    cout << "The Double_Number is: ";
    return b;
}

int Nicky::toSum(int b)
{
    cout << "The Integer_Number is: ";
    return b;
}
