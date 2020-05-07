#include <iostream>

using namespace std;
//building up a template function which is more of a generic type of data and you will use that generic type of data;
template <class nicky> //making a generic type of data therefore it is not limited to only one type of data
//so this generic name just acts like a substitute to the datatype that we are going to use
//and so it will see nicky is defined how so if it is a double it will substitute nicky to double
//as well as it is defined as int in the main method then it will substitute with int
nicky addCrap(nicky a, nicky b){
    return a+b;
}

int main()
{
    double x=49.79;
    double y=50.99;
    double z;

    z = addCrap(x,y);
    cout << z << endl;
}
