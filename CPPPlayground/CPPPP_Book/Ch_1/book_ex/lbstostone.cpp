/*
 * lbstostone.cpp
 * Simple program that converts US Pounds
 * to UK Stones (14 * Pounds)
 */

#include <iostream>

#define STONE 14

int lbstostone(int);
double stonetolbs(int);

int main(void)
{
    int lbs, stone;
    double stoneDouble;

    std::cout << "Please enter you weight in lbs to be converted: ";
    std::cin >> lbs;
    std::cout << std::endl;
    std::cout << "You entered " << lbs << " as your weight in lbs." << std::endl;
    std::cout << "Send infor to function lbstostones()..." << std::endl;

    stone = lbstostone(lbs);

    std::cout << "You converted weight to stones is " << stone << "." << std::endl;
    std::cout << "Now using stonetolbs() to get original lbs in weight back..." << std::endl;

    stoneDouble = stonetolbs(stone);

    std::cout << "The value converted back to lbs: " << stoneDouble << "." << std::endl;

    std::cin.get();
    std::cin.get();
    return 0;
}

int lbstostone(int lbs)
{
    return lbs * STONE;
}

//Choosing double since division is occuring
double stonetolbs(int stone)
{
    return stone / STONE;
}
