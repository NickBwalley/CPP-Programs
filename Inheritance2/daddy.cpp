#include <iostream>
#include "mother.h"
#include "son.h"
#include "daddy.h"
using namespace std;

daddy::daddy()
{
    //ctor
}

void daddy::daddys(){
    publicVariable = 81;
    cout << "Daddys public variable (In mothers): " << publicVariable <<endl;
    protectedVariable = 99;
    cout << "Daddys protected Variable(In mothers): " << protectedVariable << endl;
}
