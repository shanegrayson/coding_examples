/*
 * Chapter 2: Exercise 5
 * Create a program that feeds in a Celcius temp
 * and return a Fahrenheit temp
 */

#include <iostream>

int main(void)
{
    float celsius, fahrenheit;

    std::cout << "Please enter the temperature in Celcius: ";
    std::cin >> celsius;
    std::cout << std::endl;
    std::cout << "You entered " << celsius << " as your value." << std::endl;
    std::cout << "That value in Fahrenheit is " <<
        (1.8 * celsius) + 32.0 << std::endl;

    return 0;
}
