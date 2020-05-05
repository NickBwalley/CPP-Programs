#include "nicky.h"
#include <iostream>

using namespace std;

nicky::nicky(int a, int b)
:   regVar(a),
    constVar(b)
{
}

void nicky::print(){
    cout << "The Regular Varible is: " << regVar << endl;
    cout << "The Constant Varible is: " << constVar << endl;
}
