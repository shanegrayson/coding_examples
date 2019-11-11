#include <iostream>
#include <cmath>

/*
 * Testing out inline function prototypes
 * and calling the original C math.h file
 */
int main()
{
    double number, numberSquared;

    std::cout << "Please enter a number to be square rooted: ";
    std::cin >> number;
    std::cout << "You have entered the number: " << number << std::endl;
    std::cout << "Now calculating the square root of " << number << std::endl;

    /* I am choosing 2 different names to maintain the original value */
    numberSquared = sqrt(number);

    std::cout << "The square root of " << number << " is " << numberSquared << "."
        << std::endl;
    
    std::cin.get();
    std::cin.get();

    return 0;
}
