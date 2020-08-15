#include <iostream>
#include "NickFury.h"
using namespace std;

class RandGenerator{
public:
    RandGenerator(){
        srand(time(0));
        for(int i = 1; i <= 10; i++){
            cout << rand()%10;
        }
    }

};

int main()
{
    RandGenerator biiy;
    RandGenerator *b = &biiy;
    b->RandGenerator();
//    NickFury nickie;
//    nickie.randomNumbers();

}
