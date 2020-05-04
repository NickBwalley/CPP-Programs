//creating a while_loop
#include <iostream>

using namespace std;

int main(){

int x = 1 ; //this is the number of operations to be performed in the while loop
int number = 0; //initializing the numbers to 0 so that we start incrementing in the while loop
int total = 0; //initializing the total to be 0 so that we start adding them as we move on the while loop
    cout << "********************************************\n";
    cout << "Program to Compute total of 5-Numbers: \n\n";
    cout << "********************************************\n\n";
 while (x <= 5){
    cout << "Enter Number: " <<endl <<"\t";
    cin >> number;
    total += number;
    x++;
 }
 cout << "Total is: " <<total << endl;
 cout << "Number of loops: " << x << endl;

return 0;
}
