#include <iostream>

using namespace std;

void sizeOfArray();
int main()
{
    //main concept is to figure out how to calculate the size of a certain variable stored
    sizeOfArray();
}

void sizeOfArray(){
    int rikki[5] = {12,13,14,15,16};
    cout << "Size of Array: " << sizeof(rikki) << endl;
    cout << "Number of Elements: " << sizeof(rikki) / sizeof(rikki[0]);
}
