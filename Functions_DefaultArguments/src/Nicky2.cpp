#include <iostream>
#include "Nicky2.h"
using namespace std;

Nicky2::Nicky2()
{
    cout << "------------------------" << endl;
    cout << "DEFAULT-ARGUMENTS" << endl;
    cout << "------------------------" << endl;
}

double Nicky2::defaultArguments(double a, double b)
{
    double operation = a*b;
    return operation;
}
