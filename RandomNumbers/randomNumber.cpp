#include "randomNumber.h"

void randomNumber::printRandom(){
    int res;
    srand(time(0));
    for(int i = 0; i < 10; i++){
        res = rand()%100;
        cout << res << endl;
    }
}

void randomNumber::printRandom2(){
    int res2;
    srand(time(0));
    for(int i = 0; i < 5; i++){
        res2 = random()%50;
        cout << res2 << endl;
    }
}

