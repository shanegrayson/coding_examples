/*
 * Chapter 8: secref.cpp - pg 385
 */

#include <iostream>

int main(void)
{
    using namespace std;

    int rats = 101;
    int & rodents = rats;

    cout << "rats = " << rats << 
        ", rodents = " << rodents << endl;

    cout << "rats address = " << &rats << 
        ", rodents address = " << &rodents << endl;

    int bunnies = 50;

    rodents = bunnies;
    
    cout << "\n\n-----AFTER BUNNIES-----\n\n";

    cout << "rats = " << rats << 
        ", rodents = " << rodents <<
        ", bunnies = " << bunnies << endl;

    cout << "rats address = " << &rats << 
        ", rodents address = " << &rodents << 
        ", bunnies address = " << &bunnies << endl;

 
    return 0;
}
