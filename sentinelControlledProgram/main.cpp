#include <iostream>

using namespace std;

int main()
{
    //creating a sentinel controlled program
    int age;
    int ageTotal = 0 ;
    int numberOfPeopleEntered = 0;

    cout << "Enter Person's Age: (or Press '-1' to Quit) " << endl;
    cin >> age;

    while(age != -1 ){
        ageTotal += age;
        numberOfPeopleEntered++;
        cout << "Enter Person's Age: (or Press '-1' to Quit) " << endl;
        cin >> age;

    }

    cout << "Number Of People Entered: " << numberOfPeopleEntered << endl;
    cout << "Average of their Ages: " << ageTotal/numberOfPeopleEntered << endl;

    return 0;
}
