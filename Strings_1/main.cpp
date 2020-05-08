#include <iostream>
#include <string> //gives you string functions
using namespace std;
//string are basically an array of characters
int main()
{
 /*   string myDetails;
    getline(cin, myDetails);
    cout << "My Name is :" << myDetails <<endl; */

    string s1("NickBwalley ");
    string s2;
    string s3;

    s2 = s1; //first way of copying a string
    s3.assign(s1); //alternative way of copying a string

    cout << s1 << s2 << s3 << endl;
    cout << s1.at(3) <<endl;

    for(int x = 0; x < s1.length(); x++){
        cout << s1.at(x) << endl;
    }

    //strings are arrays of characters
}
