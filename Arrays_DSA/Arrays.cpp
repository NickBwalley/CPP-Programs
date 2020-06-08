#include <iostream>
#include "Arrays.h"
using namespace std;

Arrays::Arrays()
{

}
//function print days of the week using an array
void Arrays::printDaysOfWeek(){
    string Arr[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    for(int i = 0; i < 7; i++){
        cout << Arr[i] << endl;
    }
}
