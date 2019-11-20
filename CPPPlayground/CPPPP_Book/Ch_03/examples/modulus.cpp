/*
 * Chapter 3: modulus.cpp - pg 102
 * Uses the '%' to convert pounds to stones
 */
#include <iostream>

int main(void)
{
    const int lbs_per_stone = 14;
    int lbs;

    std::cout << "Enterr your weight in pounds: ";
    std::cin >> lbs;

    int stone = lbs / lbs_per_stone;
    int pounds = lbs % lbs_per_stone;

    std::cout << lbs << " pounds are " << stone << " stone, "
        << pounds << " pound(s).\n";

    return 0;
}
