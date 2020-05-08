#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream finn("players.txt");

    string name;
    int age;

    cout << "Enter Player Name and Age" << endl;
    cout << "To quit and save press ctrl+D " << endl;

    while(cin >> name >> age){
            finn << name << "--" << age << ' ' << endl;
        }

}
