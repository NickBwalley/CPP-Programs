#include <iostream>
#include "mother .h"
#include "daughter.h"
using namespace std;

daughter::daughter()
{
    cout << "I am the Daughter Constructor!" << endl;
    cout << " Properties of the Daughter!.." << endl;
}

daughter::~daughter()
{
    cout << "I am the Daugher DeConstructor!" << endl;
    cout << "Daughters Properties Taken!.." << endl;
}
