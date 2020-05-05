#include "nicky.h"
#include <iostream>

using namespace std;
/* : denotes c++ that we are going to use memebersInitializersSyntax*/
nicky::nicky(int a, int b)
: regVar(a),
constVar(b)
{
}

void nicky::print(){
    cout << "Regular Variable: " << regVar << "\n" << "Constant Variable: " << constVar <<endl;
}
//to initialize constants we have to use a special syntax called the member syntax
