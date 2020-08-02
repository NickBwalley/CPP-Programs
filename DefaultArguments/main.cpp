#include <iostream>

using namespace std;
//create a function prototype
int volumeOfCube(int l=1, int w=1, int h=1);
int areaOfCircle(int r = 1);
//Note that default arguments are passed inside the function prototype and not in the main function
int main(){

    cout << "Volume: " << volumeOfCube(5) << endl;
    cout << "Area of Circle is: " << areaOfCircle() << endl;
}

int volumeOfCube (int l, int w, int h){
    return l*w*h;
}

int areaOfCircle(int r){
    int radius;
    float result;
    radius = r;
    result = 22/7 * radius * radius;
    return result;
}
