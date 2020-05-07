#include <iostream>

using namespace std;

int main()
{
    try{
        int num1;
        cout << "Enter first Number: " << endl;
        cin >> num1;

        int num2;
        cout << "Enter the second Number: " << endl;
        cin >> num2;

        if(num2 == 0){
            throw 0;
        }

        cout << "Result is: " << num1/num2 << endl;

    }catch(int x){
        cout << "You can't divide the number by " << x << endl;
    }
}
