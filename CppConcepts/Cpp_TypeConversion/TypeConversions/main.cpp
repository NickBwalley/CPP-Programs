#include <iostream>

using namespace std;
// function prototypes
void implicitConversion();
void implicitConversion2();
void TypeCasting();

int main()
{
    implicitConversion();
    cout << "----------------" << endl;
    implicitConversion2();
    cout << "----------------" << endl;
    TypeCasting();

    /* TYPE CONVERSION OPERATORS
    1. static_cast
    2. dynamic_cast
    3. const_cast
    4. reinterpret_cast*/

    return 0;
}

// 1. Implicit conversions-> Done automatically by the compiler
void implicitConversion()
{
    int num_int = 9; // assigning an int value to num_int variable
    double num_double; // declaring a double type variable

    //implicit conversions
    //assigning int value to a double variable
    num_double = num_int;
    cout << "num_int = " << num_int << endl;
    cout << "num_double = " << num_double << endl;
}
void implicitConversion2()
{
    int num_int; // assigning an int value to num_int variable
    double num_double = 9.994; // declaring a double type variable

    //implicit conversions
    //assigning int value to a double variable
    num_int = num_double;
    cout << "num_int = " << num_int << endl;
    cout << "num_double = " << num_double << endl;
}

//EXPLICIT CONVERSION-> user manually changes data from one type to another (TypeCasting)
/*There are three types
1. C-Style-Type-Casting(cast notation)
2. Function notation
3. Type Conversion Operation
*/
void TypeCasting()
{
    //initializing a double variable
    double num_double = 3.142;
    cout << "num_double: " << num_double << endl;

    // C-style conversion from double to int
    int int_num1 = (int)num_double;
    cout << "int_num1: " << int_num1 << endl;

    //function-style conversion from double to int
    int int_num2 = (int)num_double;
    cout << "int_num2: " << int_num2 << endl;

}


