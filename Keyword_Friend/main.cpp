#include <iostream>

using namespace std;

class nicky{
    public:
        nicky(){
            rikki = 0;
        }
    private:
        int rikki;
    friend void cleoSattori(nicky &cleo);
};

    void cleoSattori(nicky &cleo){
        cleo.rikki = 99;
        cout << "The value is now: " << cleo.rikki <<endl;
    }

int main()
{
    nicky bob;
    cleoSattori(bob);
}
