/*
 * Chapter 3: morechar.cpp - pg 82
 */
#include <iostream>

int main(void)
{
    char ch = 'M';
    char ch_a = '\a';
    int i = ch;
    std::cout << "The ascii code for " << ch << " is " << i << std::endl;

    std::cout << "Adding 1 to the character code: " << std::endl;
    ch += 1;
    i = ch;
    std::cout << "The ascii code for " << ch << " is " << i << std::endl;

    std::cout << "Using the cout.put() function." << std::endl;
    std::cout.put(ch) << std::endl;

    std::cout << "Using the cout.put() function to display a char constant." << std::endl;
    std::cout.put('!') << std::endl;

    std::cout << "Done." << ch_a << std::endl;
    std::cin.get();

    return 0;
}
