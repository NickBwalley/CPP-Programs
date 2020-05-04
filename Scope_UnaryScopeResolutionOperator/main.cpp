#include <iostream>

using namespace std;

int salmon = 79;
void NickBiiy();
int main()
{
    int salmon = 89;
    cout << ::salmon << endl;
    //the :: (the unary scope Resolution Operator) is used to access variables outside
    //the main method and denoted as ::
    NickBiiy();
}

void NickBiiy(){
    int salmon = 99;
    cout << salmon << endl;
}

