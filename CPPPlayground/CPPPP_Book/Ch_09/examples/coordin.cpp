/*
 * Chapter 9: Example 9.2: coordin.cpp
 */

#include <iostream>
#include "coordin.h"

namespace my_output
{
    using std::cout;
    using std::cin;
}

int main(void)
{
    using namespace my_output;

    rect rplace;
    polar pplace;

    cout << "Enter c and y values: ";
    while (cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two coordinates (q to quit): ";
    }
    cout << "Bye.\n";

    return 0;
}
