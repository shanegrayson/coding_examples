/*
 * Chapter 5: plus_one.cpp - pg 207-208
 * the increment operator
 */

#include <iostream>

int main(void)
{
    using std::cout;
    using std::endl;

    int a = 20;
    int b = 20;

    cout << " a = " << a << " : b = " << b << endl;
    cout << " a++ = " << a++ << " : ++b = " << ++b << endl;
    cout << " a = " << a << " : b = " << b << endl;

    return 0;
}
