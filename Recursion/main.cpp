#include <iostream>
#include "NickyFactorial.h"
using namespace std;
// function prototype
int recursion(int x);

int main()
{
    int res;
    res = recursion(5);
    cout << res << endl;
//    NickyFactorial nick;
//    int result, num;
//    num = 5;
//    result = nick.NumberFactorial(num);
//    cout << "The Factorial of " << num << " is " << result << endl;
//    cout << "----------------" << endl;


}

int recursion(int x){
    if(x==1)
        return 1;
    else
        return x * recursion(x-1);

}
