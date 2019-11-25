/*
 * Chapter 6: condit.cpp - pg 273
 */

#include <iostream>

int main(void)
{
    using namespace std;

    int a, b, c;

    cout << "Enter two ints: ";
    cin >> a >> b;
    cout << "The larger of " << a << " and " << b;

    c = a > b ? a : b;

    cout << " is " << c << endl;

    return 0;
}
