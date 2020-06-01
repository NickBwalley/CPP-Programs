#include <iostream>

using namespace std;
//creating function prototype
void printSomething();

int main()
{
    printSomething();
    return 0;
}

//function printing certain if statements
void printSomething(){
    int a;
    int b;
    cout << "Enter First Number: " << endl;
    cin >> a;
    cout << "Enter Second Number: " << endl;
    cin >> b;
    if(a > b){
        cout << a << " is the greatest Number..." << endl;
    }else{
        cout << b << " is the greatest Number..." << endl;
    }
 }
