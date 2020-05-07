#include <iostream>
#include "nicky.h"
using namespace std;

int main()
{
    nicky bronze(23);
    nicky bomber(45);
    nicky gypsy;

    gypsy = bronze + bomber;
    cout << gypsy.num << endl;
}
