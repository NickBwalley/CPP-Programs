#include <iostream>
#include <fstream>
using namespace std;

//function prototypes
int getUserDetails();
void displaySingers(int x);
//main method
int main(){
    int userDetails;

    userDetails = getUserDetails();

    while(userDetails != 4){
        switch(userDetails){
        case 1:
            displaySingers(1);
            break;
        case 2:
            displaySingers(2);
            break;
        default:
            cout << "Invalid Input Please Try again! " << endl;
        }
        userDetails = getUserDetails();
    }
}
    //getUserDetails method
int getUserDetails(){
    int choice;
    cout << "1. Singers below 50Playlists!" << endl;
    cout << "2. Singers above 50Playlists!" << endl;

    cin >> choice;
    return choice;
}
    //displaySingers method
void displaySingers(int x){
    string name;
    int songs;
    ifstream rikki("singers.txt");

    if(x==1){
        while(rikki >> name >> songs){
            if(songs == 49){
            cout << name << ", " << songs << endl;
            }

        }
    }

    if(x==2){
        while(rikki >> name >> songs){
            if(songs == 79){
                cout << name << ", " << songs << endl;
            }
        }
    }
}

