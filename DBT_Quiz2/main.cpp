#include <iostream>

using namespace std;

int main()
{
    int x, y, p, q;
    p = 7;
    q = p;
    x = ++p;
    y = q++;

    cout <<"Value P: " << p << endl;
    cout <<"Value q: "<< q << endl;
    cout <<"Value x: "<< x << endl;
    cout <<"Value y: "<< y << endl;

    return 0;
}
