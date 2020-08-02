#include <iostream>
#include "Nicky.h"
#include <fstream>
using namespace std;

// function prototypes
void customFileStructure();

int main(){
    //customFileStructure();
    Nicky magician;
    magician.customFileStructure();
}

void customFileStructure(){
    ofstream nicky("nicky.txt");
    string name;
    int age;
    cout << "Enter Your Name and Age: " << endl;
    while(cin >> name >> age){
        nicky << name << "\t" << age << endl;
    }
}
