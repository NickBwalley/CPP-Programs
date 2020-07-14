#include <iostream>
using namespace std;
//  Defining constants using the #define identifier value
#define LENGTH 10
#define WIDTH 15
#define NEWLINE '\n'

//function prototypes
void findArea();
void findSum();
int main()
{
        findArea();
        findSum();
}

//function declaration using the #define identifier value
void findArea(){
    // #define identifier value
    int area;
    area = LENGTH * WIDTH;
    cout << "Area is: " << area;
    cout << NEWLINE;
}

//function declaration using the const type variable = value;
void findSum(){
    // const type variable = value;
    const int L = 10;
    const int W = 20;
    const char NEW = '\n';
    int area;

    area = L + W;
    cout << "Sum is: " << area;
    cout << NEW;
}
