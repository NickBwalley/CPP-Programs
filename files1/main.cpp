#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream nickyFiles;
    nickyFiles.open("nicky.txt");
    nickyFiles << "I love Chelsea! But Chelsea Doesn't love me! \n";
    nickyFiles << "I really wanna tell you that i really love you! \n";
    nickyFiles.close();
}
