#include <iostream>
#include "OneDimensionalArray.h"
using namespace std;
//function prototype
void printArray();

int main()
{
//creating an array Initializing using elements
    int nickie[5] = {12,23,43,79,99};
    cout << nickie[4] << endl;
    printArray();
}

void printArray(){
    int arraySize, arrayElements;
    cout << "Enter the Size of the Array: " << endl;
    cin >> arraySize;
    cout << "Enter the Elements of Your Array: " << endl;
    int a[] = {0};
    for(int i = 0; i < arraySize; i++){
        cin >> a[arrayElements];
    }
    //print out the elements of the array
    cout << "These are the Elements you have Entered: " << endl;
    for(int x = 0; x < arraySize; x++){
        cout << x << " = " << a << endl;
    }

}
