/*
 * Chapter 7: recur.cpp - pg 359-360
 */

#include <iostream>

void countdown(int n);

int main(void)
{
    countdown(4);

    return 0;
}

void countdown(int n)
{
    using namespace std;

    cout << "Counting down ... " << n << endl;

    if (n > 0)
        countdown(n-1);

    cout << n << " BANG!" << endl;
}
