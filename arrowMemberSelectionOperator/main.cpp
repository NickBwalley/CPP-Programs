#include <iostream>
#include "nicky.h"
using namespace std;

int main()
{
    /*There are two ways of how to access functions inside classes
        1. creating an object and using the dot notation to invoke the function
        2. creating a pointer and accessing the address of that object then you use the
            arrowMemberSelectionOperator to access the function inside that class
    */

    nicky nickyObject;//1st method
    nicky *nickyPointer = &nickyObject;//2nd method

    nickyPointer->survivorSeries();
    nickyObject.survivorSeries();

}
