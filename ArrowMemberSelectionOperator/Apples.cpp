#include <iostream>
#include "Apples.h"
using namespace std;

Apples::Apples()
{
    //ctor
}

void Apples::AMSO(){
    cout << "This is the ArrowMemberSelectionOperator" << endl;
}

void Apples::Dot(){
    cout << "This is the Dot-Separator" << endl;
}
