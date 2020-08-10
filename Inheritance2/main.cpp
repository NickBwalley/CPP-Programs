#include <iostream>
#include "mother.h"
#include "son.h"
#include "daddy.h"
using namespace std;

int main()
{
    son nicky;
    nicky.doSomething();

    daddy moses;
    daddy *myDad = &moses;
    myDad->daddys();

}
