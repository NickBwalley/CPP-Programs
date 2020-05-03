#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "What is your Age: \n\t";
    cin >> age;
    if(age >= 60){
        cout << "Wow You are Old!" <<endl;
        //nesting this if_statement
        if(age>100){
            cout << "Why are you Still Alive?" <<endl;
        }
    }
    else{
        cout << "You are Young go get a Job!" <<endl;
    }
    return 0;
}
