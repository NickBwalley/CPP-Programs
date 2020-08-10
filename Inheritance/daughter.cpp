#include <iostream>
#include "mother.h"
#include "daughter.h"
using namespace std;

daughter::daughter()
{
}
void daughter::sayName(){
    cout << "Over-ridden say-Name() Function " << endl;
}
