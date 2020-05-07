#include <iostream>
using namespace std;

template <class N>//function template
class nicky{
    N first, second;
public:

    nicky(N x, N y){//This is a constructor
        first = x;
        second = y;
    }

    N bigger();
};

template <class N>//redefining our function template
N nicky <N> ::bigger(){
    return (first>second?first:second);
}

int main(){
    nicky <int> biiy(299,190);
    cout << "The biggest number is: " << biiy.bigger() <<endl;
}
