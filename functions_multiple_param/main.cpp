//creating a function which has multiple parameters
#include <iostream>
using namespace std;

int addNumbers(int x, int y){
    int sum;
    sum = x + y;
    return sum;
}

int main()
{
    cout << "The Result is: " << addNumbers(79, 79);
    return 0;
}
