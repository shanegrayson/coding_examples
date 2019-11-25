/*
 * Chapter 6: if.cpp - pg. 255
 */

#include <iostream>

int main(void)
{
    using std::cout;
    using std::cin;

    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);

    while (ch != '.')
    {
        if (ch == ' ')
            ++spaces;
        ++total;
        cin.get(ch);
    }

    cout << spaces << " sapces, " << total;
    cout << " ccharacters total in sentence\n";

    return 0;
}
