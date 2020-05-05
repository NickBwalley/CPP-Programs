#include <iostream>
using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main()
{
//passingByReference >> passing the variables address
//passingByValue >> passing a copy of the variable address
    int nick = 49;
    int rikki = 14;

    passByValue(nick);
    passByReference(&rikki);

    cout << "The Value of Nick is: " << nick << endl;
    cout << "The Value of Rikki is: " << rikki << endl;

}

void passByValue(int x){
    x = 394;
}

void passByReference(int *x){
    *x = 799;
}


