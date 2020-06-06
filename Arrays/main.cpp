#include <iostream>
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
    int arraySize;
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
    for(int y = 0; y < sizeOfArray; y++){
        cin >> prickler[y];
    }
    cout << "These are the Elements inside Your Array: " << endl;
    for(int z = 0; z < sizeOfArray; z++){
        cout << "At Index "<<z << " Element = " << prickler[z] << endl;
        cout << endl;
    }

}
