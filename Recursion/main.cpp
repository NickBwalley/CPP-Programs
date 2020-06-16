#include <iostream>
#include "NickyFactorial.h"
using namespace std;

int main()
{
    NickyFactorial nick;
    int result, num;
    num = 5;
    result = nick.NumberFactorial(num);
    cout << "The Factorial of " << num << " is " << result << endl;

}
