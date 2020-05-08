#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream finn("players.txt");

    string name;
    int age;

    while (finn >> name >> age){
        cout << name  << age << endl;
    }
}
/*using the
ofstream is used to write data into a file
ifsteam is used to read data from a file
*/
