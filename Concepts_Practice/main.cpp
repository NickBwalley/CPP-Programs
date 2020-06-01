#include <iostream>

using namespace std;
//creating function prototype
void printSomething();
int sumNumbers(int a , int b);


int main()
{
    //printSomething();     //if Statement to print out the larger of two numbers
    cout << sumNumbers(4,5) << endl;    //function adds 2 Numbers
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

 int sumNumbers(int a, int b){
    int answer = a + b;
    return answer;
 }
