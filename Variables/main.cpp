#include <iostream>

using namespace std;

//  global variable -> Global variables are automatically initialized by the system as compared to
//  local variables -> Local variables are not automatically initialized by the system as you must initialize them
    int  g;
int main()
{
    int g = 40;
    cout << g << endl;
}
