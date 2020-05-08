#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream nickysFile("nicky.txt");
    if(nickysFile.is_open()){//good programming practice-> make sure your file is associated with the object
        cout << "This file is open!" << endl;
    }
    else{
        cout << "This file is not open! " << endl;
    }
    nickysFile << "I love coding with C++ and JAVA and PYTHON! \n";
    nickysFile.close();
}
