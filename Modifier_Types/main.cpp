#include <iostream>
using namespace std;

int main()
{
    short int i; // signed short int
    short unsigned int j;   // unsigned short int

    j = 50000;
    i = j;
    cout << i << "\t" << j << endl;
//  The above result is because the bit pattern that represents 50,000 as a short
//  unsigned integer is interpreted as -15,536 by a short.
    return 0;
}

//C++ allows the char, int, and double data types to have modifiers preceding
//them. A modifier is used to alter the meaning of the base type so that it more
//precisely fits the needs of various situations.
