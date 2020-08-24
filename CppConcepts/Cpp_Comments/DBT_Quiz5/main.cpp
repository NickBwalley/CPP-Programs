#include <iostream>

using namespace std;
//question 4(a)(i)
double hptTri(double s1, double s2)
{
    float res1 = (double)s1;
    float res2 = (double)s2;
    float results = res1 + res2;
    return results;

}
//question 4(a)(ii)
int smallNum(int a, int b, int c)
{
    return a;
}
//question 4(a)(iii)
void myName()
{
    cout << "This is a function that returns null value and expects null arguments " << endl;
}
//question 4(a)(iv)
double myConverter(int a)
{
    return a;
}
int main()
{
    cout << hptTri(3.4, 9.44) << endl;
    cout << smallNum(4, 5, 6) << endl; // returns 4
    myName();
    cout << myConverter(44) << endl;

    return 0;
}
