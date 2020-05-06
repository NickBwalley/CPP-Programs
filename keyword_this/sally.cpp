#include "sally.h"
#include <iostream>

using namespace std;

sally::sally(int x, int y)
:x(x), y(y)
{
}

void sally::printCrap(){
//there are three ways you can print the x & y variable
    cout << " xy = " << x <<" "<< y << endl;
    cout << " this->xy = " << this->x <<" "<< this->y << endl;
    cout << "(*this).xy = " << (*this).x <<" "<< (*this).y << endl;

}
