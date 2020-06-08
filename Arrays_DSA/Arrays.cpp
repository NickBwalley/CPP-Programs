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

//function Sentinel controlled program to sum numbers until user enters a terminating operation
void Arrays::sentinelControlledProgram(){
    int number;
    int total = 0;
    int Elements = 0;

    cout << "Enter Your Numbers: (PRESS -1 TO QUIT): " << endl;
    cin >> number;

    while(number != -1){
        total+=number;
        cin >> number;
        Elements++;
    }

    cout << "TOTAL = " << total << endl;
    cout << "Number of Elements: " << Elements << endl;
}

//function  print even numbers inside an array
void Arrays::printEvenNumbers(){
    int num;
    cout << "Declare Array Size: " << endl;
    cin >> num;
    int nicky[num];
    cout << "Enter Elements of Your Array: " << endl;
    for(int i = 0; i < num; i++){
        cin >> nicky[i];
    }
    cout << "Even Numbers are: " << endl;
    for (int x = 0; x < num; x++){
        if(nicky[x]%2 == 0){
            cout << nicky[x] << endl;
        }
    }

}

//function to Enter multidimensional Array
void Arrays::MultidimensionalArray(){
    int nicky[4][3] = {
        {22,23,24},
        {25,26,27},
        {28,29,30},
        {31,32,33}
        };
    for(int i = 0; i < 4; i++ ){
        for(int j = 0; j < 3; j++){
            cout << "[" << i << " " << j << "]" << nicky[i][j] << endl;
        }

    }
}
