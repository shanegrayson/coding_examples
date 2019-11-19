/*
 * Chapter 4: instr1.cpp - pg 125
 * Reading more than 1 string
 */

#include <iostream>

int main(void)
{
    using namespace std;

    const int ARRAY_SIZE = 20;

    char name[ARRAY_SIZE];
    char dessert[ARRAY_SIZE];

    cout << "Enter your name:\n";
    cin >> name;

    cout << "Enter your favorite dessert:\n";
    cin >> dessert;

    cout << "I have some delcious dessert " << dessert
        << " for you, " << name << endl;

    return 0;
}
