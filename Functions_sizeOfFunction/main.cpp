#include <iostream>

using namespace std;

int main()
{
    //main concept is to figure out how to calculate the size of a certain variable stored
    double nicky[10];
    cout << "size of this array: " << sizeof(nicky) << endl;
    cout << "Number of Elements is Array: " << sizeof(nicky) / sizeof(nicky[0]) <<endl;
}
