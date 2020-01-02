/*
 * Chapter 9: Example 9.5: external.cpp
 */

#include <iostream>

using namespace std;

double warming = 0.3;

void update(double dt);
void local(void);

int main(void)
{
    cout << "Global Warming is " << warming << " degrees." << endl;
    update(0.1);
    cout << "Global Warning is " << warming << " degrees." << endl;
    local();
    cout << "Global Warning is " << warming << " degrees." << endl;

    return 0;
}
