#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// function prototype
int randomNumberGenerator();

int main()
{
    cout << randomNumberGenerator() << endl;
}

int randomNumberGenerator(){
    int rand;
    srand(time(0));
    rand = 1+rand()%300;
    return rand;
}
