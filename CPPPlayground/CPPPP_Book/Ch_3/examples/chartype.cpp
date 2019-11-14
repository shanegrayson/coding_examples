/*
 * Chapter 3: chartype.cpp - pg. 81
 */
#include <iostream>

int main(void)
{
    char ch;

    std::cout << "Enter a character: " << std::endl;
    std::cin >> ch;
    std::cout << "Hola! ";
    std::cout << "Thank you for the " << ch << " character." << std::endl;

    return 0;
}
