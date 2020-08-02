#include <iostream>
using namespace std;

//function prototypes
void ifStatement();
void elseIf();
void switchStatement();
void forLoop();
void whileLoop();
void nestedWhileLoop();
void doWhileLoop();
void breakStatement();
void continueStatement();
void gotoStatement();

int main()
{
    //ifStatement();
    //elseIf();
    //switchStatement();
    //forLoop();
    //whileLoop();
    //nestedWhileLoop();
    //doWhileLoop();
    //breakStatement();
    //continueStatement();
    gotoStatement();
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

void switchStatement(){
    int age;
    cout << "Enter Your Age: " << endl;
    cin >> age;
    switch(age){
    case 18:
        cout << "Your are Fit to have an ID.." <<endl;
        break;
    case 19:
        cout << "You are Fit to start a Family... " << endl;
        break;
    case 20:
        cout << "You are Fit to Start Driving Lessons... " << endl;
        break;
    default:
        cout << "Your are still a child go back to school \n and Learn!.." << endl;
        break;
    }
}

void forLoop(){
    //  printing values from 1 - 10
    for(int i = 0; i < 10; i++){
        cout << i << endl;
    }
}

void whileLoop(){
    //  printing values from 1 - 10
    int counter = 1;

    while(counter <= 10){
        cout << counter << endl;
        counter++;
    }

}

void nestedWhileLoop(){
    int i = 1;
    while (i <= 3){
        int j = 1;
        while(j <= 3){
            cout << i << " " << j << endl;
            j++;
        }
        i++;
    }
}

void doWhileLoop(){
     int i = 14;
     do{
        cout<<i<<"\n";
        i++;
     } while (i <= 10) ;
}

void breakStatement(){
    int i;
    for(i = 1; i <= 10; i++){
        if (i == 5){
            break;
        }
        cout<<i<<"\n";
    }
}

void continueStatement(){
    int i;
    for(i = 1; i <= 10; i++){
        if (i == 5){
            continue;
        }
        cout<<i<<"\n";
    }
}

void gotoStatement(){
//  It can be used to transfer control from deeply nested loop or switch case label.

    int age;
    cout << "Enter Your Age: " << endl;
    cin >> age;
    if(age < 18)
        goto ineligible;
    else
        goto eligible;

    ineligible:
        cout<< "You are in-eligible to vote!.." << endl;
    eligible:
        cout << "You are Eligible to Vote!.." << endl;

}
