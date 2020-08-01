#include <iostream>

using namespace std;
//creating a class and invoking the function inside the class in the main method

class boxersRecord{
    public:
        void gypsyKing(){
            cout << "NAME: TYSON FURY: aka(gypsyKing) \n";
            cout << "RECORD: 31FIGHTS >> 30WINS OLOSSES 1DRAW 20KO's \n";
            cout << "\n\n\n";
        }
        void bronzeBomber(){
            cout << "NAME: DEONTAY WILDER: aka(bronzeBomber) \n";
            cout << "RECORD: 44FIGHTS >> 42WINS 1LOSSES 1DRAW 41KO's \n";
            cout << "\n\n\n";
        }

};
int main()
{
    boxersRecord boxersResult;
    boxersResult.gypsyKing();
    cout << "----------------------------------" << endl;
    // using an arrow member selection operator to locate the bronzeBomber function
    boxersRecord *biiy = &boxersResult;
    biiy->bronzeBomber();
    return 0;
}
