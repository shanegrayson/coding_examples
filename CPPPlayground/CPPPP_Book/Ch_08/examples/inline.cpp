/*
 * Chapter 8: inline.cpp - pg 381-382
 */

#include <iostream>

inline double square(double x)
{
    return x * x;
}

int main(void)
{
    using namespace std;

    double a, b, c;
    
    a = square(5.0);
    b = square(4.5 + 7.5);
    c = 13.0;

    cout << "a = " << a << ", b = " << b;
    cout << ", c = sqrt(" << c << "++) = " << square(c++);
    cout << "c now = " << c << endl;

    return 0;
}
