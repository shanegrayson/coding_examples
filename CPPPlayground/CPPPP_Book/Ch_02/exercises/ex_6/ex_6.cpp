/*
 * Chapter 2: Exercise 6
 * Write a user defiend function that takes a distance
 * in light years as an arg and then returns the distance in
 * astronautical units.
 * 1 light year = 63240
 */

#include <iostream>

float convertLYtoAU(float);

int main(void)
{
    float usersAnswer;

    std::cout << "Please enter the number of light years: ";
    std::cin >> usersAnswer;

    std::cout << usersAnswer << " light years = " << convertLYtoAU(usersAnswer) <<
        " astronautical units." << std::endl;

    return 0;
}

float convertLYtoAU(float usersAnswer)
{
    return usersAnswer * 63240;
}
