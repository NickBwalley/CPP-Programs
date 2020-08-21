#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// function prototype
int randomNumberGenerator();
bool checkRandomNumber();

int main()
{
    cout << "Random Number: " << randomNumberGenerator() << endl;
    cout << "---------------------" << endl;
    cout << checkRandomNumber() << endl;
}

//function generate random Number
int randomNumberGenerator(){
    int randomNumber;
    srand(time(0));
    randomNumber = 1+rand()%300;
    return randomNumber;
}
//function check if random Number is Even or odd
bool checkRandomNumber(){
    int flag = 0;
    for(int i = 2; i < randomNumberGenerator()/2; i++){
        if(randomNumberGenerator()%i == 0){
            printf("%d is not a Prime Number", randomNumberGenerator());
            cout << endl;
            return false;
            break;
        }

    }
    if (flag == 0){
        printf("%d is a Prime Number", randomNumberGenerator());
        cout << endl;
        return true;
    }

}
