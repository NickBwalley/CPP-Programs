#include <iostream>
using namespace std;

//function prototypes
void ifStatement();
void elseIf();

int main()
{
    //ifStatement();
    elseIf();
}

//function definitions
void ifStatement(){
    int num;
    cout << "Enter a Number: " << endl;
    cin >> num;
    if(num % 2 == 0){
        cout << num << " is an Even Number..." << endl;
    }
    else{
        cout << num << " is an Odd Number..." << endl;
    }
}

void elseIf(){
    int num;
    cout<<"Enter a number to check grade:" << endl;
    cin>>num;
    if (num <0 || num >100)
    {
        cout<<"wrong number" << endl;
    }
    else if(num >= 0 && num < 50){
        cout<<"Fail" << endl;
    }
    else if (num >= 50 && num < 60)
    {
        cout<<"D Grade" << endl;
    }
    else if (num >= 60 && num < 70)
    {
        cout<<"C Grade" << endl;
    }
    else if (num >= 70 && num < 80)
    {
        cout<<"B Grade" << endl;
    }
    else if (num >= 80 && num < 90)
    {
        cout<<"A Grade" << endl;
    }
    else if (num >= 90 && num <= 100)
    {
        cout<<"A+ Grade" << endl;
    }
}
