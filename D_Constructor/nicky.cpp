#include "nicky.h"
#include <iostream>
using namespace std;
/*rules about a D_constructor
    1. It never has a return type;
    2. It will never have a parameter
    3. You can never have an overloading D-Constructor
*/
nicky::nicky()
{
    string name;
    int age;
    cout << "--------------------------------" << endl;
    cout << "Welcome to the Nicky's Company" << endl;
    cout << "--------------------------------" << endl;
    cout << "What is Your Name: " <<endl;
    cin >> name;
    cout << "What is Your Age: " << endl;
    cin >> age;
    cout << endl;
 }

nicky::~nicky()
{
    cout << "ThankYou For Registering with us! " <<endl;
}

