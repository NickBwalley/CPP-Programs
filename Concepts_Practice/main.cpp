#include <iostream> //#include-> adding header files >> <iostream> means you include input output streams like cout cin

using namespace std;
//creating function prototype
void printSomething(int a, int b);

int main()
{
    printSomething(499,99);
    return 0;
}

//function printing certain if statements
void printSomething(int a, int b){
    if(a > b){
        cout << a << " is the greatest Number..." << endl;
    }else{
        cout << b << " is the greatest Number..." << endl;
    }
 }
