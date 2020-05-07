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
    cout << "Daddys class: " << publicVariable <<endl;
}
