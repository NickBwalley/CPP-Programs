#include <iostream>

using namespace std;
// function prototypes
void variables();

int main()
{
    variables();
    return 0;
}

// CPP INTRODUCTION
void variables()
{
        /* CPP NAMING CONVENTIONS
    1. Variable name must be alphabets
    2. Avoid use of uppercase in denotation of the first Letter
    3. Use of underscores to denote a variable is good practice
    4. Variable name must not be a keyword like final, int
    5. Give meaningful variable name*/
    int age = 14; // instantiate the variable
    age = 18; // change the value of the instantiated variable to 18
    cout << age << endl;
}

// CPP LITERALS
void integerLiterals()
{
    // Decimals: 0, -9, 22
    // Octal: 021, 088 -> Note that octal numbers start with a 0 before they are initialized
    // hexadecimals: 0x7f, 0x2a; -> Hexadecimals start with 0x
}

void floatingPointLiterals()
{
    // Decimals: 0, -9, 22
    // Octal: 021, 088 -> Note that octal numbers start with a 0 before they are initialized
    // hexadecimals: 0x7f, 0x2a; -> Hexadecimals start with 0x
}
