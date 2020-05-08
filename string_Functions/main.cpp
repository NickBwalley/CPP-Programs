#include <iostream>

using namespace std;

int main()
{
    string s1("Oh My! I love Programming in Python!");
    cout << s1.substr(7,14) << endl; //prints element in the 7th index to the 14th index
    cout << "-----------------\n";
    string nxt("Charlotte ");
    string raw("lashley");
    cout << nxt << raw << endl;//prints out nxt then raw
    nxt.swap(raw);//swaps and prints out raw then nxt
    cout << nxt << " " << raw << endl;
    cout << "-----------------\n";
    string s4("ham is spam oh yes i am!");
    cout << s4.find("am") <<endl;//prints out the index of the first occurrence of "am"
    cout << s4.rfind("am") << endl;//prints out the index of the last occurrence of "am"

}

/*
1. sub-string function
2. swap function
3. Defined Function
*/
