#include <iostream>

using namespace std;
//function prototype
void addNumber();
void multiplyNumbers();
void printValues();
void printArray();

int main()
{
    //addNumber();
    //multiplyNumbers();
    //printValues();
    printArray();
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

//function to multiply number using pointers
void multiplyNumbers(){
    int p, q, res;
    cout << "Enter firstNumber: " << endl;
    cin >> p;
    cout << "Enter secondNumber: " << endl;
    cin >> q;

    int *a, *b, *c;
    a = &p;
    b = &q;
    c = &res;

    *c = *a * *b;
    cout << "Result is: " << *c << endl;

}

//function printTable of One
void printValues(){
    int x = 1;
    int *p = &x;

    while (*p <= 10){
        cout << *p << endl;
        (*p)++;
    }
}

//function to print elements of an array;
void printArray(){
    int arr[5] = {29,39,49,79,99};

    for(int y = 0; y < 5; y++){
        cout << *(arr+y) << endl;
    }

}
