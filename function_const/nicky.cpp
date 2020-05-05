#include "nicky.h"
#include <iostream>

using namespace std;

nicky::nicky()
{
//This is a constructor
}
//This is a  regular Function
void nicky::regularFuction(){
    cout << "I am a Regular Function!" << endl;
}

void nicky::constantFunction() const {
    cout << "I am a Constant Function!" << endl;
}
