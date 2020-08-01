#include <iostream>

using namespace std;

int main()
{
//creating a multidimentional array visually
    int nick[3][3] = {
         {49,79,99},
         {30,40,50},
         {81,71,61}
    };
    //pictorial representation
    /*49, 79, 99
      30, 40, 50
      81, 71, 61
    */
    //printing this array
    for(int row = 0; row < 3; row++ ){
        for(int column = 0; column < 3; column++){
            cout << nick[row][column] << " ";
        }
        cout << endl;
    }
}
