#include <iostream>

using namespace std;

int main()
{
    cout << "Fundamental DataTypes" << endl;
    cout << 45E12 << endl; //means 45*10^12
    /* C++ Modified Data Types List
        Data Type	Size (in Bytes)	Meaning
        signed int	4	used for integers (equivalent to int)
        unsigned int	4	can only store positive integers
        short	    2	used for small integers (range -32768 to 32767)
        long	at least 4	used for large integers (equivalent to long int)
        unsigned long	4	used for large positive integers or 0 (equivalent to unsigned long int)
        long long	8	used for very large integers (equivalent to long long int).
        unsigned long long	8	used for very large positive integers or 0 (equivalent to unsigned long long int)
        long double	8	used for large floating-point numbers
        signed char	1	used for characters (guaranteed range -127 to 127)
        unsigned char	1	used for characters (range 0 to 255)*/
        long b = 4523232;
        long int c = 2345342;
        long double d = 233434.56343;
        short d = 3434233; // Error! out of range
        unsigned int a = -5;    // Error! can only store positive numbers or 0
    return 0;
}
