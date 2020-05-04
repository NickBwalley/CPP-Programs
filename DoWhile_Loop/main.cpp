#include <iostream>

using namespace std;

int main()
{
//the doWhile loop does an operation while a certain condition is fulfilled
    int x = 99;
    do{//a do while loop is a guarantee that your code will atleast run once
    //even if an operation in the while loop is not fulfilled
        cout << x << endl;
        x++;
    }while(x<10);
    cout << "*************\n";
    x = 10;
    do{
        cout << x << endl;
        x--;
    }while(x>0);

}
