#include <iostream>
#include "brawn.h"
using namespace std;

int main()
{
    brawn a(27);
    brawn b(79);
    brawn c;

    c= a+b;

    cout <<"The result is: " << c.num << endl;
}
