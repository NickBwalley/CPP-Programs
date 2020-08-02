#include <iostream>
#include "Const_Def.h"
using namespace std;
// defining of constants using: #define >> identifier >> value
#define LENGTH  20
#define WIDTH  30
#define NEWLINE  '\n'

Const_Def::Const_Def()
{
    // constructor
}

void Const_Def::areaOfRectangle(){
    int result;
    result = LENGTH * WIDTH;
    cout << "Area of Rectangle is: " << result;
    cout << NEWLINE;
}
