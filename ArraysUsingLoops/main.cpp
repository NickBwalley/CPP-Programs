#include <iostream>

using namespace std;

int main()
{
    int nickie[9];

    cout << "Elements   ----   " << "values" <<endl;

    for(int x = 0; x <= 8; x++){
        nickie[x] = 99;
        cout << x << "----------------"<< nickie[x] << endl;
    }
}
