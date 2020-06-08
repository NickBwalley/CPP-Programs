#include <iostream>

using namespace std;

class SentinelProgram{
private:
    int number;
    int total = 0;
    int totalElements = 0;
public:
    void sentinelControlledProgram(){
        cout << "**SENTINEL CONTROLLED PROGRAM!**" << endl;
        cout << "Enter Your Number:(Press -1 to QUIT and Get TOTAL:)>>" << endl;
        cin >> number;
        while(number != -1){
            total+=number;
            cin >> number;
            totalElements++;
        }
    }

    int printTotal(){
        return total;
    }
    int printElements(){
        return totalElements;
    }
};

int main()
{
    SentinelProgram nicky;
    nicky.sentinelControlledProgram();
    cout << "TOTAL IS: " << nicky.printTotal() << endl;
    cout << "Elements are: " << nicky.printElements()  << endl;
}
