#include <iostream>
#include "mother .h"
#include "daughter.h"
using namespace std;

mother ::mother ()
{
    cout << "I am the Mother Constructor!" << endl;
    cout << "Properties of the mother!.." << endl;
}

mother ::~mother ()
{
    cout << "I am the Mother DeConstructor!" << endl;
    cout << "Mothers Properties Taken!.." << endl;
}
