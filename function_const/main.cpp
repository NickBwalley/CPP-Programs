#include <iostream>
#include "nicky.h"
//adding the nicky.h header file for the file to be recognised before running the program
using namespace std;

int main()
{
    nicky regObject;
    regObject.regularFuction();

    const nicky constObj;
    constObj.constantFunction();
}
