#include <iostream>
#include "Prickler.h"
using namespace std;

//creating function prototype
void printSomething();
int sumNumbers(int a , int b);

//creating a class
class birthday{
private:
    string name;
    string age;
public:
    birthday(string n, string a){
        setName(n, a);
    }
    //creating a setter and a getter methods
    void setName(string myName, string myAge ){
        name = myName;
        age = myAge;
    }

    string getName(){
        return name;
    }
    string getAge(){
        return age;
    }



};


int main()
{
    //printSomething();     //if Statement to print out the larger of two numbers
    //cout << sumNumbers(4,5) << endl;    //function adds 2 Numbers
    /******************************/
    /*creating an object of a class*/
//    birthday myBirthday("Allan", "smith");
//    myBirthday.setName("Nicholas", "20");
//    cout << "Your name is: " << myBirthday.getName() << " You are " << myBirthday.getAge() << endl;
//    cout << "------------------------" << endl;
//    birthday nickie("Jay", "Z");//constructor is called as soon as you create an instance of an object of that class
//    cout << nickie.getName() << " " << nickie.getAge() << endl;
//    birthday rikki("Andrew", "Jackson");
//    int result = sumNumbers(47, 91);
//    cout << result << endl;
//    printSomething();


    /******************************/
    /*external classes*/
    Prickler po;
    /******************************/

    return 0;
}

//function printing certain if statements
void printSomething(){
    int a;
    int b;
    cout << "Enter First Number: " << endl;
    cin >> a;
    cout << "Enter Second Number: " << endl;
    cin >> b;
    if(a > b){
        cout << a << " is the greatest Number..." << endl;
    }else{
        cout << b << " is the greatest Number..." << endl;
    }
 }

 int sumNumbers(int a, int b){
    int answer = a + b;
    return answer;
 }
