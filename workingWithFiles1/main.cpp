#include <iostream>
#include <fstream>
using namespace std;
//function prototypes
int getChoice();
void displayItems(int x);
//main method
int main(){

    int userChoice;
    userChoice = getChoice();

    while (userChoice != 4){
        //userChoice = getChoice();
        switch(userChoice){
        case 1:
            displayItems(1);
            break;
        case 2:
            displayItems(2);
            break;
        case 3:
            displayItems(3);
            break;
        }
        userChoice = getChoice();
    }
}
//function getChoice
int getChoice(){
    int choice;
    cout << "1 - Crazy Stuff! " << endl;
    cout << "2 - Interesting Stuff! " << endl;
    cout << "3 - Amazing Stuff! " << endl;
    cout << "4 - QUIT PROGRAM! " << endl;

    cin >> choice ;

    return choice;
}

//function displayItems
void displayItems(int x){
    ifstream nickyFiles("objects.txt");

    string name;
    int power;

    if(x==1){
        while(nickyFiles >> name >> power){
            if(power == 0){
                cout << "-----------------------" <<endl;
                cout << name << " " << power << endl;
                cout << "-----------------------" <<endl;
            }
        }
    }

    if (x==2){
        while(nickyFiles >> name >> power){
            if(power == 2){
                cout << "-----------------------" <<endl;
                cout << name << " " << power << endl;
                cout << "-----------------------" <<endl;
            }
        }
    }

    if (x==3){
        while(nickyFiles >> name >> power){
            if(power == 5){
                cout << "-----------------------" <<endl;
                cout << name << " " << power << endl;
                cout << "-----------------------" <<endl;
            }
        }
    }
}
