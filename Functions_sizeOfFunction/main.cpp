#include <iostream>

using namespace std;

void sizeOfArray();
void sizeOfMore();

int main()
{
    //main concept is to figure out how to calculate the size of a certain variable stored
    sizeOfArray();
    //sizeOfMore();
}

void sizeOfArray(){
    int rikki[5] = {12,13,14,15,16};
    cout << "Size of Array: " << sizeof(rikki) << endl;
    cout << "Number of Elements: " << sizeof(rikki) / sizeof(rikki[0]);
}

void sizeOfMore(){
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
}
