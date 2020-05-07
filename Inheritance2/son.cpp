#include <iostream>
#include "mother.h"
#include "son.h"
#include "daddy.h"
using namespace std;

son::son()
{
}

void son::doSomething(){
    publicVariable = 1;
    protectedVariable = 79;

    cout << publicVariable <<endl;
    cout << protectedVariable <<endl;
}
