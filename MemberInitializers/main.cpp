#include <iostream>
#include "nicky.h"
using namespace std;

class FormulaOne{
private:
    int red_bull;
    const int mercedes_benz;
public:
    FormulaOne(int a, int b): red_bull(a), mercedes_benz(b){
        cout << "red_bull: " << a << " KM/H" << endl;
        cout << "mercedes_benz: " << b << " KM/H"<< endl;
    }
};

int main()
{
    FormulaOne driver(300, 330);
//    nicky chelsea(79,99);
//    chelsea.print();

}
