/*
 * Chapte 5: formore.cpp - pg 203-204
 * More looping with for loops
 */

#include <iostream>

const int ArSize = 16;

int main(void)
{
    long long factorials[ArSize];

    factorials[1] = factorials[0] = 1LL;

    for (int i = 2; i < ArSize; i++)
        factorials[i] = factorials[i-1] * i;

    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;

    return 0;
}
