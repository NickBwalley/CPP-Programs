#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your Age: \n\t";
    cin >> age;

    switch (age){
        case 18:
            cout << "Hey you can now apply for an ID!" <<endl;
            break; // A break statement saves you the time or agony for you going through the whole loop
            //after the condition is fulfilled lets say 18 if you enter 18 then the program will terminate
            //after printing the cout above
        case 21:
            cout << "Hey you can now drive a small-car!" << endl;
            break;
        case 35:
            cout << "Hey you can now drive a Tractor!" << endl;
            break;
        default:
            cout << "You are a Kid... Go back to school and learn!" << endl;
    }
}
