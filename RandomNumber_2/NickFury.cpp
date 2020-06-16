#include "NickFury.h"

void NickFury::randomNumbers(){
    srand(time(0));
    for(int i = 0; i < 10; i++){
        cout << rand()%100 << endl;
    }
}




