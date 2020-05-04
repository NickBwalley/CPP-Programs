#include <iostream>

using namespace std;
//Function overloading is basically creating a value which can take multiple datatypes
void printNumber(int x){
    cout << "We are passing an Integer: " << x << endl;
}
void printNumber(float x){
    cout << "This time we are passing a float: " << x << endl;
}

int main()
{
    int a = 79;
    float b = 79.398439;

    printNumber(a);
    printNumber(b);
}
