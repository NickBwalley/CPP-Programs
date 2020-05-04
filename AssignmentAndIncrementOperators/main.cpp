#include <iostream>

using namespace std;

int main()
{
    int x = 78;
    cout << ++x << endl;//adds one before printing the value so it will be 79
    cout << x << endl;
    cout << x++ <<endl;//adds one after printing the value so it will still be 78
    cout << x << endl;//after the increment above now it will print out 79..

    cout  << --x << endl;
    cout << x << endl;
    cout << x-- << endl;
    cout << x << endl;


}
