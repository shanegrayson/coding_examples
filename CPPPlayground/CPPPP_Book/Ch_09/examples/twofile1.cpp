/*
 * Chapter 9: Example 9.7: twofile1.cpp
 */

#include <iostream>

int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access(void);

int main(void)
{
    using namespace std;

    cout << "main() reports the following addresses:" << endl;
    cout << "&tom = " << &tom << ", &dick = " << &dick;
    cout << ", &harry = " << &harry << endl;

    remote_access();

    return 0;
}
