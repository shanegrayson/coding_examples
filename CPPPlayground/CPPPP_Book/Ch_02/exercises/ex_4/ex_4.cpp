/*
 * Chapter 2: Exercise 4
 * Write a program that asks the user to enter
 * his/her age. The prog should display age
 * and age in months.
 */

#include <iostream>

int main(void)
{
    int age;

    std::cout << "Please enter your age: ";
    std::cin >> age;
    std::cout << std::endl;

    std::cout << "Your age in months (no leap-year) is: " << age * 12 << std::endl;

    return 0;
}
