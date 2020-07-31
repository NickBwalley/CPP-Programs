#include <iostream>
using namespace std;
//function prototype
void passByValue(int value);
int main()
{
    int x, y;
    x = 39;
    passByValue(x);
    cout << "PassByValue outside the function  is: " << x << endl;

    return 0;
}

//pass(call) by value -> Original value of the function is not modified in the function;
void passByValue(int value){
    value = 49;
    cout << "value inside the function is: " << value << endl;
}

// pass(call) by reference -> Original value is modified because we pass reference(address of the value)
void passByReference(int value){

}
