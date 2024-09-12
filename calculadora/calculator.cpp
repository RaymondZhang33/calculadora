/**
* Name: Raymond Zhang
* Program Name: Make a Calculator
* Date: 9/12/24
* Extra: I printed out the result after raising the first integer to the power of the second integer.
*/
#include <iomanip>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    int inty, inty2;
    cout << "Enter an integer: " << endl;
    cin >> inty;
    cout << "Enter a second integer: " << endl;
    cin >> inty2;
    cout << "The sum of the two integers is " << to_string(inty + inty2) << "." << endl;
    cout << "The difference of the two integers is " << to_string(inty - inty2) << "." << endl;
    cout << "The product of the two integers is " << to_string(inty * inty2) << "." << endl;
    float floaty = (float) inty;
    float floaty2 = (float) inty2;
    cout << "The quotient of the two integers is " << to_string(floaty / floaty2) << "." << endl;
    cout << "The remainder after dividing the two integers is " << to_string(inty % inty2) << "." << endl;
    cout << "The first integer incremented by 1 is " << to_string(++inty) << "." << endl;
    cout << "The second integer decremented by 1 is " << to_string(--inty2) << "." << endl;
    inty--;
    inty2++;
    /* Extra: */
    cout << "The first integer raised to the power of the second integer is " << to_string(pow(inty, inty2)) << "." << endl;
}