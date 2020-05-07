#include <iostream>
#include "nicky.h"
using namespace std;

nicky::nicky()
{

}

nicky::nicky(int a)
{
    num = a;
}

nicky nicky::operator+(nicky aso){
    nicky brandNew;
    brandNew.num = num + aso.num;
    return(brandNew);
}
