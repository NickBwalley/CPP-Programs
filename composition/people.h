#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include "birthday.h"
using namespace std;

class people
{
    public:
        people(string x, birthday dob);
        void printInfo();

    private:
        string name;
        birthday dateOfBirth;
};

#endif // PEOPLE_H
