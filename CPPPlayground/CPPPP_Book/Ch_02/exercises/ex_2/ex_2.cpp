/*
 * Chapter 2: Exercise 2
 * Write a C++ program that asks for a distance
 * in furlongs and coverts to yards 
 * (furlong = 220 yards)
 */

#include <iostream>

int main(void)
{
    int userAnswer;

    std::cout << "Please enter a distance in Furlongs: ";
    std::cin >> userAnswer;
    std::cout << std::endl;
    std::cout << "You entered: " << userAnswer << std::endl;
    std::cout << "Converted: " << userAnswer * 220 << std::endl;

    std::cin.get();
    std::cin.get();

    return 0;
}
