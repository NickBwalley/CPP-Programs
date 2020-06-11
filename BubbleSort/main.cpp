#include <iostream>
using namespace std;

int main(){
    cout << "Declare the Size of Your Array: " << endl;
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the Elements of Your Array: " << endl;
    for(int x = 0; x < n; x++){
        cin >> arr[x];
    }

}
