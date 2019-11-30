/*
 * Chapter 7: calling.cpp - pg 306
 */

#include <iostream>

using namespace std;

void simple(void);

int main(void)
{
    cout << "Before we call a simple()..." << endl;
    simple();
    cout << "After we call a simple()..." << endl;

    return 0;
}

void simple(void)
{
    cout << "I'm but a simple function." << endl;
}
