/*
 * Chapter 3: hexoct2.cpp - pg 79
 */
#include <iostream>

int main(void)
{
    int chest, waist, inseam;
    chest = waist = inseam = 42;

    std::cout << "Monsiuer cuts a striking figure!" << std::endl;
    std::cout << "Chest = " << chest << " (decimal for 42)" << std::endl;
    std::cout << std::hex;
    std::cout << "Waist = " << waist << " (hex for 42)" << std::endl;
    std::cout << std::oct;
    std::cout << "Inseam = " << inseam << " (oct for 42)" << std::endl;

    return 0;
}
