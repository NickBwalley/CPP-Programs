#include <iostream>

using namespace std;

int main()
{
    //creating a pointer and pointing it to an address;
    int rikki = 79;
    &rikki; //obtaining the address of the variable rikki which contains a value 79
        cout << &rikki << endl;//print it out
    int *rikkisPointer;// creating a pointer and assign in a variable rikkisPointer
    rikkisPointer = &rikki; //assign the address of rikki to the rikkisPointer

        cout << rikkisPointer << endl;
}
