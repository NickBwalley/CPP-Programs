#include <iostream>
using namespace std;
int main()
{
    mercy:
        cout << "You are an adult!.." << endl;

        int age;
        cout << "Enter Your Age: " << endl;
        cin >> age;
        while(age >= 18){
            goto mercy;
        }

        return 0;

}
