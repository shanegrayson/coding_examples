/*
 * Chapter 3: Exercise 7 - pg 113
 * European to US gasoline conversion problem
 */
#include <iostream>

int main(void)
{
    float euro_gcf, euro_to_us, gallons, miles, conversion;
    const float kilo_to_mile = 0.6213712;
    const float liter_to_gallon = 3.7854118;

    /* i.e. a vehical lpk (liters/kilometer) similar to mpg */
    std::cout << "Enter European Fuel Economy? ";
    std::cin >> euro_gcf;

    /* We are just taking the value since it is liter per something */
    gallons = euro_gcf / liter_to_gallon;

    /* now get miles */
    miles = 100 * kilo_to_mile;

    /* Not convert miles per gallon */
    conversion = miles / gallons;

    std::cout << "The conversion is from Euro to US is " << conversion << std::endl;

    return 0;
}
