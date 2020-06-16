#include "NickyFactorial.h"

int NickyFactorial::NumberFactorial(int x){
    if(x==1)
        return 1;
    else
        return x*NumberFactorial(x-1);
}
