/*
 * Chapter 6: ifelse.cpp - pg 257
 */

#include <iostream>

int main(void)
{
    char ch;

    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);

    while (ch != '.')
    {
        if (ch == '\n')
            std::cout << ch;
        else
            std::cout << ++ch;
        std::cin.get(ch);
    }

    std::cout << "\nPlease excuse the slight confusion";

    return 0;
}
