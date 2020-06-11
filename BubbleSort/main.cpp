#include <iostream>

using namespace std;
//function prototype
void display()

int main()
{
    int n;
    cout << "Declare the Size of Your Array: " << endl;
    cin >> n;
    int nick[n];
    cout << "Enter the Elements of Your Array: " << endl;
    for(int i = 0; i < n; i++){
        cin >> nick[i];
    }
    display(nick, n);
    bubbleSort(nick, n);

}
//function to print out the elements inside the user defined array
void display(*Array, n){
    for(int z = 0; z < n; z++)
        cout << Array[z] << " ";
    cout << endl;
}
