/*
 * Chapter 9: Example 9.8: twofile2.cpp
 */

#include <iostream>
extern int tom;
static int dick = 10;
int harry = 200;

void remote_access(void)
{
    using namespace std;

    cout << "remote_access() reports the following addresses: " << endl;
    cout << "&tom = " << &tom << ", &dick = " << &dick;
    cout << ", &harry = " << &harry << endl;
}
