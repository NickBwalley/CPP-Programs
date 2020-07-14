#include <iostream>
using namespace std;
//  Defining constants using the #define identifier value
#define LENGTH 10
#define WIDTH 15
#define NEWLINE '\n'

//function prototypes
void findArea();

int main()
{
        findArea();
}

//function declaration using the #define identifier value
void findArea(){
    int area;
    area = LENGTH * WIDTH;
    cout << "Area is: " << area;
    cout << NEWLINE;
}

//function declaration using the const keyword

