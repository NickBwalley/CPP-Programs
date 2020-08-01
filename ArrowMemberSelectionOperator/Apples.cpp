#include <iostream>
#include "Apples.h"
using namespace std;

Apples::Apples()
{
    cout << "This is a Constructor for the Apples Class !.." << endl;
}
Apples::~Apples(){
    cout << "This is a de-constructor for the Apples Class !.." << endl;
}

void Apples::AMSO(){
    cout << "This is the ArrowMemberSelectionOperator" << endl;
}

void Apples::Dot(){
    cout << "This is the Dot-Separator" << endl;
}
