#include <iostream>
#include "arrays_one.h"
using namespace std;
//function prototype
void printArray();
void simpleArray();

int main()
{
    //printArray();
    //simpleArray();
    arrays_one nick;
    nick.arrays();

}

void printArray(){
    int arraySize;
    cout << "Enter the Size of the Array: " << endl;
    cin >> arraySize;
    int nicky[arraySize];
    cout << "Enter the Elements of Your Array: " << endl;
    for(int i = 0; i < arraySize; i++){
        cin >> nicky[i];
    }
    cout << "The Elements of your Arrays are: " << endl;
    for(int z = 0; z < arraySize; z++){
        cout << "index " << z << " Element = " << nicky[z] << endl;
    }
}

void simpleArray(){
    int sizeOfArray;
    cout << "Enter the Size of your array: " << endl;
    cin >> sizeOfArray;
    int prickler[sizeOfArray];
    cout << "Enter the Elements of your Array: " << endl;
    for(int y = 0; y < sizeOfArray; y++){
        cin >> prickler[y];
    }
    cout << "These are the Elements inside Your Array: " << endl;
    for(int z = 0; z < sizeOfArray; z++){
        cout << "At Index "<<z << " Element = " << prickler[z] << endl;
    }

}
