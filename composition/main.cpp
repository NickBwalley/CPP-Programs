#include <iostream>
#include "people.h"
#include "birthday.h"
using namespace std;

int main()
//concept objects of another class as their members
//using objects of other classes within your class
{
    birthday birthObj(8,26,2000);
    people nickie("NickBwalley", birthObj);
    nickie.printInfo();
}
