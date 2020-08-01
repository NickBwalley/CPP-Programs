#include <iostream>
#include "Mango.h"
using namespace std;

Mango::Mango()
{
    cout << "This is a constructor for the Mango Class!.." << endl;
}

Mango::~Mango()
{
    cout << "This is a de-constructor for the Mango class!.. " << endl;
}

void Mango::dotOperator(){
    cout << "This is a dotOperator for the Mango Class!.." << endl;
}

void Mango::arrowMemberSelectionOperator(){
    cout << "This is a ArrowMemberSelectionOperator for the Mango Class!.." << endl;
}

