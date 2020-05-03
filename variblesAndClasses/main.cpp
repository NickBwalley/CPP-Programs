#include <iostream>
#include <string>
using namespace std;

class heavyWeights{
    public:
        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }
    private:
        string name;
};


int main (){
    heavyWeights winner;
    winner.setName("Tyson Fury");
    cout << "THE WINNER IS: "<< winner.getName() <<endl;

    return 0;
}
