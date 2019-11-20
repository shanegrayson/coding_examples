/*
 * Chapter 3: hexoct1.cpp
 */
#include <iostream>

int main(void)
{
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    std::cout << "Monsieur cuts a striking figure!" << std::endl;
    std::cout << "Chest: " << chest << std::endl;
    std::cout << "Waist: " << waist << std::endl;
    std::cout << "Inseam: " << inseam << std::endl;

    return 0;
}
