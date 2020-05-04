#include <iostream>

using namespace std;
//factorialFinder using recursive function
int factorialFinder(int x){
    if(x==1){
        return 1;
    }
    else{
        return x*factorialFinder(x-1);
    }
}
int main()
{
    cout << "Factorial: " << factorialFinder(5)<<endl;
}
