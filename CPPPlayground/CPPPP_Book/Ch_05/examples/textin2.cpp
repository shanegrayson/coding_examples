/*
 * Chapter 5: texting1.cpp - pg 234-235
 * reading chars with a while loop
 */

#include <iostream>

int main(void)
{
    using namespace std;

    char ch;
    int count = 0;

    cout << "Enter characters; enter # to quit:\n";
    cin.get(ch);

    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }

    cout << endl << count << " characters read\n";

    return 0;
}
