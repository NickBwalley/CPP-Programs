#include <iostream>
#include "brawn.h"
using namespace std;

brawn::brawn()
{

}

brawn::brawn(int a)
{
    num = a;
}

brawn brawn::operator+(brawn strowman){
    brawn wyatt;
    wyatt.num = num + strowman.num;
    return wyatt;
}
