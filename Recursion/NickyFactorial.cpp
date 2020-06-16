#include <iostream>
#include "NickyFactorial.h"
using namespace std;

int NickyFactorial::NumberFactorial(int x){
    if(x==1)
        return 1;
    else
        return x*NumberFactorial(x-1);
}

void NickyFactorial::bestAward(char y, int n){
    cout << string(y,n) << endl;
}
