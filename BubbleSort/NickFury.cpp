#include<iostream>
using namespace std;
#include "NickFury.h"

void NickFury::display(int *array, int size){
    cout << "The Elements of Your Array are: " << endl;
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
}

