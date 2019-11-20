/*
 * Chapter 3: Exercise 6 - pg 112
 * Mile per Gallon and Driving
 */
#include <iostream>

int main(void)
{
    int miles_driven, gallons_used;
    float miles_per_gallon;

    std::cout << "How many miles have you driven? ";
    std::cin >> miles_driven;

    std::cout << "How many gallons of gasoline have you used? ";
    std::cin >> gallons_used;

    std::cout << std::endl;

    miles_per_gallon = float (miles_driven) / float (gallons_used);

    std::cout << "Miles per gallon your vehical has gotten: " << miles_per_gallon << std::endl;

    return 0;
}
