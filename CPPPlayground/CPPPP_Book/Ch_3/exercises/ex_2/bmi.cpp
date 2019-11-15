/*
 * Chapter 3: Exercise 2 - pg.112
 * Body Mass Index Program
 */
#include <iostream>

int main(void)
{
    int feet, inches, lbs;
    float height_in_inches, height_in_meters, kilograms_in_lbs;
    float BMI;
    const int inches_per_foot = 12;
    const float meters_per_inch = 0.0254;
    const float kilograms_per_lbs = 2.2;

    std::cout << "Please enter you height in feet:___\b\b\b";
    std::cin >> feet;

    std::cout << "Please enter you height in inches:___\b\b\b";    
    std::cin >> inches;

    std::cout << "Please enter you weight in lbs:___\b\b\b";
    std::cin >> lbs;

    /* First convert height in feet to inches */
    height_in_inches = (feet * inches_per_foot) + inches;

    /* The convert height into meters by multiplying 0.0254 */
    height_in_meters = float (height_in_inches) * meters_per_inch;

    /* The convert weight in lbs into kilograms by dividing lbs by 2.2 */
    kilograms_in_lbs = lbs / kilograms_per_lbs;

    /* Compute BMI by divinding mass in kilos by the square of height in meters */
    BMI = kilograms_in_lbs / (height_in_meters * height_in_meters);

    std::cout << "Your final BMI is: " << BMI;
    
    std::cin.get();
    std::cin.get();

    return 0;
}
