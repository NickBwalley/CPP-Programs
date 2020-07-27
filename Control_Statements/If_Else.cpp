#include <iostream>
#include "If_Else.h"
using namespace std;

// constructor
If_Else::If_Else()
{
    int num;
    cout << "Enter a Number: " << endl;
    cin >> num;
    if(num % 2 == 0){
        cout << num << " is an Even Number..." << endl;
    }
    else{
        cout << num << " is an Odd Number..." << endl;
    }
}
