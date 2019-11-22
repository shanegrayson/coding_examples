/*
 * Chapter 5: Exercise 2 - pg 251
 * Also, formore.cpp - pg 203-204
 */

#include <iostream>
#include <array>

const int ArSize = 100;

int main(void)
{
    using namespace std;

    array<long double, ArSize> factorials;
    factorials.at(1) = factorials.at(0) = 1;

    for (int i = 2; i < ArSize; i++)
        factorials.at(i) = i * factorials.at(i-1);

    for (int i = 0; i < ArSize; i++)
        cout << i << "! = " << factorials.at(i) << endl;

    return 0;
}
