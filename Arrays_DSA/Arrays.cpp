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

//function to print out the largest element inside an array
void Arrays::largestNumber(){
    int number, Max;
    cout << "Enter Size of Your Array: " << endl;
    cin >> number;
    int nicky[number];
    cout << "Enter Elements of Your Array: " << endl;
    for(int i = 0; i < number; i++){
        cin >> nicky[i];
    }

    Max = nicky[0];
    for(int z = 0; z < number; z++){
        if(nicky[z] > Max){
            Max = nicky[z];
        }
    }
    cout << "The Largest Number is: " << Max << endl;

}

//function to check an element inside our array
bool Arrays::checkElement(){
int number;
int nicky[9] = {10,20,30,40,50,60,70,80,90};
cout << "Enter Your Number to Check: " << endl;
cin >> number;
    for(int i = 0; i < 9; i++){
        if(number == nicky[i]){
            return true;
        }
    }
    return false;
}
