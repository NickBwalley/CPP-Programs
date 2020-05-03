#include <iostream>
#include <string>
using namespace std;
class heavyWeight{
    public:
        //creating a constructor and assign a value to it
        heavyWeight(string z){
            setName(z);
        }

        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }

    private:
        string name;
};

int main()
{
    heavyWeight winner("The Winner is Tyson Fury!");
    cout << winner.getName() << endl;
    return 0;
}
