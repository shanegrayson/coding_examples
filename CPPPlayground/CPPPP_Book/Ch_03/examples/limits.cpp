/*
 * Chapter 3: Listing 3.1
 * Example of climits and checking intger 
 * size on specific systems
 */

#include <iostream>
#include <climits>

int main(void)
{
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    //the operator sizeof() returns size of the type
    std::cout << "int is " << sizeof(int) << " bytes." << std::endl;
    std::cout << "short is " << sizeof n_short << " bytes." << std::endl;
    std::cout << "long is " << sizeof n_long << " bytes." << std::endl;
    std::cout << "long long is " << sizeof n_llong << " bytes." << std::endl;
    std::cout << std::endl;

    std::cout << "Maximum values:" << std::endl;
    std::cout << "int: " << n_int << std::endl;
    std::cout << "short: " << n_short << std::endl;
    std::cout << "long: " << n_long << std::endl;
    std::cout << "long long: " << n_llong << std::endl;
    
    std::cout << "Minimum int value = " << INT_MIN << std::endl;
    std::cout << "Bits per byte = " << CHAR_BIT << std::endl;

    return 0;
}
