#include <iostream>
#include "OneDimensionalArray.h"
using namespace std;
//function prototype
void printArray();
void simpleArray();

int main()
{
    //printArray();
    simpleArray();
}

void printArray(){
    int arraySize, arrayElements;
    cout << "Enter the Size of the Array: " << endl;
    cin >> arraySize;
    int nicky[arraySize];
    cout << "Enter the Elements of Your Array: " << endl;
    for(int i = 0; i < nicky[arraySize]; i++){
        cin >> nicky[i];
    }
    cout << nicky[2] << endl;
}

void simpleArray(){
    int sizeOfArray;
    cout << "Enter the Size of your array: " << endl;
    cin >> sizeOfArray;
    int prickler[sizeOfArray];
    cout << "Enter the Elements of your Array: " << endl;
    for(int y = 0; y < prickler[sizeOfArray]; y++){
        cin >> prickler[y];
    }

}
