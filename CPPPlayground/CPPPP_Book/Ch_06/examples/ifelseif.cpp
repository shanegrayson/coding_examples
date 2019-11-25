/*
 * Chapter 6: ifelseif.cpp - pg 259
 */

#include <iostream>

const int Fav = 27;

int main(void)
{
    using namespace std;

    int n;

    cout << "Enter a number in the range of 1-100 ";
    cout << "to find my favorite number: ";

    do
    {
        cin >> n;
        if (n < Fav)
            cout << "Too low -- guess again: ";
        else if (n > Fav)
            cout << "Too high -- guess again: ";
        else
            cout << Fav << " is right!\n";
    } while (n != Fav);

    return 0;
}
