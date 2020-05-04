#include <iostream>

using namespace std;

int main()
{
    int nickie[5] = {79,99,1447,1533,1697};
    int sum = 0;

    for (int x = 0; x < 5; x++){
        sum += nickie[x];
        cout << sum << endl;
    }
}
