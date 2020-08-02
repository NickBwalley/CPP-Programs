#include <iostream>
#include <fstream>
#include "Nicky.h"
using namespace std;

Nicky::Nicky()
{
    cout << "This is a Constructor for the Nicky Class!.." << endl;
}

void Nicky::customFileStructure(){
    ofstream biiy("NickBiiy.txt");
    string name;
    int num = 0;
    cout << "Enter Your Name: " << endl;
    while(cin >> name ){
        biiy << num << "\t" << name << endl;
        num++;
    }
}
