/*
 * Chapter 5: bigstep.cpp - pg 205-206
 * count as directed
 */

#include <iostream>

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    cout << "Enter an integer to step by: ";
    int by;
    cin >> by;
    cout << "Counting by: " << by << "s:\n";

    for (int i = 0; i < 100; i += by)
        cout << i << endl;

    return 0;
}
