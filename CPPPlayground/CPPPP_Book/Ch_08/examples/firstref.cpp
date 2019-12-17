/*
 * Chapter 8: firstref.cpp - pg 383-384
 */

#include <iostream>

int main(void)
{
    using namespace std;

    int rats = 101;
    int & rodents = rats;

    cout << "rats = " << rats << endl;
    cout << "rodents = " << rodents << endl;
    
    rodents++;

    cout << "rats after rodents++ = " << rats << endl;
    cout << "rodents after rodents++ = " << rodents << endl;

    cout << "rats address = " << &rats << endl;
    cout << "rodents address = " << &rodents << endl;

    return 0;
}
