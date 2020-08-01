#include <iostream>
#include "Apples.h"
#include "Mango.h"
using namespace std;

int main()
{
    Apples nicky; // New Object created and initialized using the dot Operator
    nicky.Dot();
    Apples *biiy = &nicky;  // New Object created and initialized using a pointer for the AMSO
    biiy->AMSO();
    cout << "*****************" << endl;
    Mango kibiy;
    kibiy.dotOperator();
    Mango *bwalley = &kibiy;
    bwalley->arrowMemberSelectionOperator();


}
