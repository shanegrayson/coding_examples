/*
 * Chapter 5: waiting.cpp - pg 229-230
 * using clock() in a time-delay loop
 */

#include <iostream>
#include <ctime> // describes clock() func, clock_t type

int main(void)
{
    using namespace std;

    cout << "Enter the dealy time in seconds: ";
    float secs;
    cin >> secs;

    //CLOCKS_PER_SEC is a symbolic const provided by ctime
    clock_t delay = secs * CLOCKS_PER_SEC;

    cout << "Starting\a\n";

    clock_t start = clock();
    while (clock() - start < delay)
        ;
    cout << "DONE\n";

    return 0;
}
