#include <iostream>

using namespace std;

class nicky{
private:
    int number;
    int total = 0;
public:
    void sentinelProgram(){
        cout << "**SENTINEL CONTROLLED PROGRAM!..**" << endl;
        cout << "Enter Your Numbers(Press -1 to QUIT): " << endl;
        cin >> number;
        while(number != -1){
            cout << "Enter Another Number: (Press -1 QUIT and Get Total): " << endl;
            cin >> number;
            total+=number;
        }
        cout << "Total: " << total << endl;
    }
};

int main()
{
    nicky bwalley;
    bwalley.sentinelProgram();
}
