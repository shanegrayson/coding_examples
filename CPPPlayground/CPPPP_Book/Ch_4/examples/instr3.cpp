/*
 * Chapter 4: instr3.cpp - pg. 129
 * Reading more than one word with get() & get()
 */

#include <iostream>

int main(void)
{
    using namespace std;

    const int AR_SIZE = 20;

    char name[AR_SIZE], dessert[AR_SIZE];

    cout << "Enter you name:\n";
    cin.get(name, AR_SIZE).get();

    cout << "Enter you favorite dessert:\n";
    cin.get(dessert, AR_SIZE).get();

    cout << "I have some delcious dessert " << dessert <<
        " for you, " << name << ".\n";

    return 0;
}
