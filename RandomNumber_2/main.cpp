#include <iostream>
#include "NickFury.h"
using namespace std;

class RandGenerator{
public:
    RandGenerator(){
        srand(time(0));
        for(int i = 1; i <= 10; i++){
            cout << 1+rand()%10 << endl;
        }
    }

};

int main()
{
    RandGenerator biiy;
//    NickFury nickie;
//    nickie.randomNumbers();

}
