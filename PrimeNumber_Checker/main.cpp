#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

void primeNumberChecker(){
    int n;
    int m = 0;
    bool flag = false;

    cout << "Enter A Positive Number: " << endl;
    cin >> n;
    m = n/2;
    for(int i = 2; i <= m; i++){
        if( n % i == 0){
            flag = true;
            break;
        }
    }

    if(flag == false){
        cout << n << " is a Prime Number.." << endl;

    }
    else
        cout << n << " is Not a Prime Number..." << endl;
}
