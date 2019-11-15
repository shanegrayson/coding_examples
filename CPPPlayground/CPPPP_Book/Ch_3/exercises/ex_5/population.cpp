/*
 * Chapter 3: Exercise 5 - pg 112
 * Population problem
 */
#include <iostream>

int main(void)
{
    long long world_pop, region_pop;
    double region_world_percent;

    std::cout << "Please enter the current World Population: ";
    std::cin >> world_pop;
    std::cout << std::endl;
    std::cout << "Please enter you current Regions Population: ";
    std::cin >> region_pop;
    std::cout << std::endl;

    region_world_percent = 100* ( double (region_pop) / double (world_pop));

    std::cout << "The population of your region is " << region_world_percent << "\% of the world.\n";

    return 0;
}
