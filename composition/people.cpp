#include "people.h"
#include "birthday.h"
#include <iostream>

using namespace std;

people::people(string x, birthday dob)
: name(x), dateOfBirth(dob)
{
}

void people::printInfo(){
    cout << name << " was born on ";
    dateOfBirth.printDate();
}
