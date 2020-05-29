#include <iostream>

using namespace std;
//function prototype
void addNumber();
int main()
{
    addNumber();
}

//function add Numbers using pointers
void addNumber(){
 int a, b, res;
 cout << "Enter firstNumber: " << endl;
 cin >> a;
 cout << "Enter secondNumber: " << endl;
 cin >> b;
 int *x,*y,*z;
 x = &a;
 y = &b;
 z = &res;
 *z = *x+*y;
 cout << "Result is: " << *z << endl;

}
