#include <iostream>
#include "mother.h"
#include "daughter.h"
using namespace std;

int main()
{
    mother mom;
    mom.sayName();

    daughter siz;
    daughter *mySiz = &siz;
    mySiz->sayName();
}
