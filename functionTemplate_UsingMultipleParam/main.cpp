#include <iostream>

using namespace std;

template <class FIRST, class SECOND>
FIRST smaller(FIRST a, SECOND b){
    return (a>b?b:a);
}

int main()
{
    double x = 49.1789;
    double y = 79.99;

    cout << "The Smaller is: "<<smaller(x, y) << endl;
}
