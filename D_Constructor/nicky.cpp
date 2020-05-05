#include "nicky.h"
#include <iostream>
using namespace std;
/*rules about a D_constructor
    1. It never has a return type;
    2. It will never have a parameter
    3. You can never have an overloading D-Constructor
*/
nicky::nicky()
{
   cout << "Iam the Constructor!!" <<endl;
}

nicky::~nicky()
{
    cout << "Iam the D-Constructor! " <<endl;
}

