#include "randomNumber.h"

void randomNumber::printRandom(){
    int res;
    srand(time(0));
    for(int i = 0; i < 10; i++){
        res = rand()%100;
        cout << res << endl;
    }
}



