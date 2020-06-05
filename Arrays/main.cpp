#include <iostream>
#include "OneDimensionalArray.h"
using namespace std;
//function prototype
void printArray();

int main()
{
    printArray();
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
