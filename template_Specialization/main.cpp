#include <iostream>
using namespace std;
//creating a function template to handle any type of data apart from char
template <class Z>
class nicky{
public:
    nicky(Z a){
        cout << a << " is not a character! " << endl;
    }
};
//creating a template specialization for only characters
template<>
class nicky <char>{
public:
    nicky(char a){
        cout << a << " is indeed a character! " << endl;
    }
};
int main(){
    nicky <int> brawn(79);
    nicky <double> strowman(99.799);
    nicky <char> alexa('q');
}
