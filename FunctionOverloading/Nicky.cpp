#include <iostream>
#include "Nicky.h"
using namespace std;

void Nicky::overloaded(double x){
    cout << x << " is a Float variable.." << endl;
}

void Nicky::overloaded(int x){
    cout << x << " is an Integer variable.." << endl;
}

void Nicky::overloaded(char x){
    cout << x << " is an Character variable.." << endl;
}

void Nicky::overloaded(bool x){
    cout << x << " is an Boolean variable.." << endl;
}

void Nicky::overloaded(long x){
    cout << x << " is an Long variable.." << endl;
}
