#include <iostream>

using namespace std;

class cleo{
    public:
        cleo(){
            kim = 149;
            cout << "The value of Kim is at: " << kim <<endl;
        }
    private:
        int kim;

        friend void emma(cleo &emma);
};

void emma(cleo &emma){
    emma.kim = 79;
    cout << "The New value of Kim is set to be: " << emma.kim <<endl;
}
int main(){
    cleo rikki;
    emma(rikki);
}
