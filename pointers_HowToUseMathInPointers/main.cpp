#include <iostream>

using namespace std;

int main()
{
//note that pointers do not change their memory addresses it only changes the address of which values it points to
    int nicky[6];

    int *n1 = &nicky[0];
    int *n2 = &nicky[1];
    int *n3 = &nicky[2];
    int *n4 = &nicky[3];


    cout << "n1 pointer is at: " << n1 <<endl;
    cout << "n2 pointer is at: " << n2 <<endl;
    cout << "n3 pointer is at: " << n3 <<endl;
    cout << "n4 pointer is at: " << n4 <<endl;

    n1 += 3;
    //concept to understand is that pointers do not change its address it only changes its pointer location
    cout << "n1 pointer is now at: " << n1 <<endl;
}
