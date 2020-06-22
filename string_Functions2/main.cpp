#include <iostream>

using namespace std;

int main()
{

    string s1("Hi my name is Nick Bwalley and i love game programming");
    cout << s1 << endl;
    //ERASE FUNCTION
    //the erase function which takes one parameter where you want your string to start be deleted from
    s1.erase(26);//'Y' is the 26th Element
    cout << s1 << endl;
    //REPLACE FUNCTION
    //the replace function which takes 3 parameters 1, which index you start replacing with,
    //2, is the length of that string to be replaced with
    cout << "---------------\n\n";
    cout << s1 << endl;
    s1.replace(14,12, "Bronze Bomber");//'N' is the 14th Character
    cout << s1 << endl;
    //INSERT FUNCTION
    cout << "---------------\n\n";
    cout << s1 << endl;
    s1.insert(14, "gypsy king ");
    cout << s1 << endl;

}
