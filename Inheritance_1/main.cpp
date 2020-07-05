#include <iostream>
#include "Fruits.h"
#include "Mango.h"
#include "Bitter.h"
using namespace std;

int main()
{
    Fruits fruit;
    fruit.juicy();
    Mango mango;
    mango.juicy();
    mango.veryBitter();

}
