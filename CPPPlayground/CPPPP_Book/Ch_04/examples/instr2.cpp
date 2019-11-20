/*
 * Chapter 4: instr2.cpp - pg 127
 * Reading more than 1 word with getline()
 */

#include <iostream>

int main(void)
{
    using namespace std;

    const int AR_SIZE = 20;

    char name[AR_SIZE], dessert[AR_SIZE];

    cout << "Eneter your name:\n";
    cin.getline(name, AR_SIZE);

    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, AR_SIZE);

    cout << "I have some delicious " << dessert <<
        " for you, " << name << ".\n";

    return 0;
}
