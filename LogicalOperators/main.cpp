#include <iostream>

using namespace std;

int main()
{
    int age = 18;
    int money = 500;

    if (age >=18 && money >=500){ // with the && logical operator all conditions have to be true for the code to run
        cout << "Hey! You are allowed in...." << endl;
    }

    if (age >=18 || money >= 500){ // with the || logical operator look at only if one condition is met then line code
        cout << "You are allowed in.... " << endl;
    }
}
