#include <iostream>
#include "arrays_one.h"
using namespace std;

arrays_one::arrays_one()//Constructor
{
    cout << "Welcome to This Game!.." << endl;
}

arrays_one::~arrays_one()//Deconstructor
{
    cout << "Thank You for Playing This Game!.." << endl;
}

void arrays_one::arrays()
{
    int arrSize;
    cout << "Declare the Size of Your array " << endl;
    cin >> arrSize;
    int myArray[arrSize];
    cout << "Enter Elements of Your Array: " << endl;
    for(int i = 0; i < arrSize; i++){
        cin >> myArray[i];
    }
    cout << "The Elements printed out are: " << endl;
    for(int z = 0; z < arrSize; z++){
        cout << "At index: " << z <<"  "<< myArray[z] << endl;
    }
}
