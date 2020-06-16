#include <iostream>
#include "randomNumber.h"
using namespace std;

int main(){
    cout << "Random Number 1" << endl;
    cout << "------------------" << endl;
    randomNumber nicky;
    nicky.printRandom();
    cout << "------------------" << endl;
    cout << "Random Number 2" << endl;
    nicky.printRandom2();
    return 0;
}
