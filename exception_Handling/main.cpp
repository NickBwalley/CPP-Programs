#include <iostream>

using namespace std;

int main()
{
    try{
        int MomsAge = 42;
        int sonsAge = 50;

        if(sonsAge > MomsAge){
            throw 99;
        }
    }catch(int x){
        cout << "Son's age cannot exceed mom's age...ERROR NUMBER: " << x << endl;
    }
}
