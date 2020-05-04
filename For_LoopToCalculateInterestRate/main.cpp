#include <iostream>
#include <cmath>
using namespace std;

int main()
{
//simple program to calculate the interest rate in a month;
    float A;
    float P = 10000;
    float r = .04;
    cout << "Capital Money: $" << P << endl;
    for (int day = 1; day <=30; day++){
        A = P * pow(1+r, day);
        cout << "day: " << day << "---- $" << A << endl;
    }
}
