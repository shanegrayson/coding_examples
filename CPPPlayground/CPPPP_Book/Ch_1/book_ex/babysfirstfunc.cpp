/*
 * babysfirstfunc.cpp
 *
 * This program is used for testing out function
 * calls in C++
 */

#include <iostream>

void situpCount(int);

int main()
{
    int situps;
    
    std::cout << "How many sit ups do you plan on doing?" << std::endl;
    
    std::cin >> situps;

    situpCount(situps);

    std::cout << "Back in main..." << std::endl;

    std::cin.get();
    std::cin.get();

    return 0;
}

void situpCount(int howManySitups)
{
    std::cout << "This is being called from the situps func" << std::endl;
    std::cout << "You want to do " << howManySitups << "! WOW!" << std::endl;
    std::cout << "Now leaving situp func..." << std::endl;
}
