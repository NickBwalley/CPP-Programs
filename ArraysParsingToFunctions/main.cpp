#include <iostream>

using namespace std;

void printNumbers(int theArray[], int sizeOfArray);
void printArray(int myArray[], int mySize);

int main()
{
    int nickie[5] = {23,39,33,79,298};
    int chelsea[7] = {29,39,48,71,188,189,169};

    printNumbers(nickie, 5);
    cout << "****************" << endl;
    printArray(chelsea, 7);
}

void printNumbers(int theArray[], int sizeOfArray){

    for(int x = 0; x < sizeOfArray; x++){
        cout << theArray[x] <<endl;
    }

}

void printArray(int myArray[], int mySize){
    for(int z = 0; z < mySize; z++){
        cout << myArray[z] << endl;
    }
}
