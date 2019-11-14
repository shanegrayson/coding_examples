/*
 * Chapter 3: bondini.cpp - pg 86
 */
#include <iostream>

int main(void)
{
    std::cout << "\aOperation \"HyperHype\" is now activated!\n";
    std::cout << "Enter your Agent Code:__________\b\b\b\b\b\b\b";

    long code;
    std::cin >> code;

    std::cout << "\aYou entered " << code << "...\n";
    std::cout << "Code verified! Do stuff!\n";

    return 0;
}
