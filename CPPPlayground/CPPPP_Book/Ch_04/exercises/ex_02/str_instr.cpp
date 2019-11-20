/*
 * Chapter 4: Exercise 2 - pg 127
 * Changed Listing 4.4 to sue string class
 * instead of c style character arrays
 */

#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    string name, dessert;

    cout << "Eneter your name:\n";
    getline(cin, name);

    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);

    cout << "I have some delicious " << dessert <<
        " for you, " << name << ".\n";

    return 0;
}
