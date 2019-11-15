/*
 * Chapter 3: Programming Exercise 1 - pg 111
 */
#include <iostream>

int main(void)
{
    int height;
    float remainder;
    const int inches_per_foot = 12;

    std::cout << "What is your height in inches?___\b\b\b";
    std::cin >> height;
    
    std::cout << "Your height in feet is " << height / inches_per_foot;

    remainder = height % inches_per_foot;

    std::cout << " and " << remainder << " inches." << std::endl;

    return 0;
}
