#include <iostream>

using namespace std;

//  global variable -> Global variables are automatically initialized by the system as compared to
//  local variables -> Local variables are not automatically initialized by the system as you must initialize them
    int z = 50;

int main()
{
    int g;
    int z = 49;
    cout << g << endl;
    cout << "Global-Variable: " << ::z << endl;
}
