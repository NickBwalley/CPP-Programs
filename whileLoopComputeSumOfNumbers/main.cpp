#include <iostream>

using namespace std;

int main()
{
    int x = 1;//initializing the while loop to be equal to 1
    int num = 0;//initializing the number so be inputted by the user to be 0
    int total = 0;//initializing the total to be 0
    cout << "*********************************************\n";
    cout << "Program to Compute the Sum of 5Numbers:\n\n";
    cout << "*********************************************\n\n";
    while (x <= 5){
        cout << "Enter Number: " << endl << "\t";
        cin >> num;
        total += num;
        x++;
    }

    cout << "----------------------------------\n";
    cout << "The Total is: " << total << endl;
    cout << "Number of Loops: " << x << endl;

    return 0;
}
