#include <iostream>
#include "Apples.h"
using namespace std;

Apples::Apples()
{

}

void Apples::sentinelProgram(){
    cout << "**********************************" << endl;
    cout << "** SENTINEL CONTROLLED PROGRAM! **" << endl;
    cout << "**********************************" << endl;
    cout << "Enter Your Numbers(Press -2 to QUIT and get TOTAL!..)" << endl;
    cin >> number;
    while(number != -2){
        total+=number;
        cin >> number;
        totalElements++;
    }

}

int Apples::printTotal(){
    return total;
}

int Apples::printElements(){
    return totalElements;
}
