/*
 * Chapter 5: num_test.cpp - pg 198
 * use numeric test in for loop
 */

#include <iostream>

int main(void)
{
    using namespace std;
    int limit, i;

    cout << "Enter the starting countdown value: ";
    cin >> limit;

    for (i = limit; i; i--)
        cout << "i = " << i << endl;

    cout << "Countdown done!" << endl;

    return 0;
}
