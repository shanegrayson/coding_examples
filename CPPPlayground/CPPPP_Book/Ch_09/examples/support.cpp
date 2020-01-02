/*
 * Chapter 9: Example 9.6: support.cpp
 */

#include <iostream>

using std::cout;
using std::endl;

extern double warming;

void update(double dt);
void local(void);

void update(double dt)
{
    extern double warming;
    
    warming += dt;

    cout << "\t\tUpdating Global Warming\t\t" << endl;
    cout << "Global warming has increased by: " << dt << "degrees. " << endl;
}

void local(void)
{
    double warming = 0.8;

    cout << "Local Warming = " << warming << " degrees." << endl;
    cout << "But global warming = " << ::warming << " degrees." << endl;
}
