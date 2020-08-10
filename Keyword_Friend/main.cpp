#include <iostream>

using namespace std;

class mother{
private:
    int kim;    // variable definition
    friend void son(mother &son);
public:

    mother(){
        kim = 179;  // variable initialization
        cout << "value of mother is " << kim << endl;
    }

};

void son(mother &son){
    son.kim = 99;
    cout << "value of son is " << son.kim << endl;
}
int main(){
    mother s;
    son(s);
}
