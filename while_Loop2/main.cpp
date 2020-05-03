#include <iostream>

using namespace std;

int main()
{
    int x = 1;
    int number;
    int total = 0;
    //creating a while loop to compute the total of 5Numbers
    while (x<=5){
        cin >> number;
        total += number;
        x++;
    }
    cout << "The Total is: " << total << endl;
    return 0;
}
