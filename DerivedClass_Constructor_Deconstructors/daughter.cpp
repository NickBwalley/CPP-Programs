#include <iostream>
#include "mother .h"
#include "daughter.h"
using namespace std;

daughter::daughter()
{
    cout << "I am the Daughter Constructor!" << endl;
}

daughter::~daughter()
{
    cout << "I am the Daugher DeConstructor!" << endl;
}
