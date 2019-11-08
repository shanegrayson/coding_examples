#include <iostream>

/*
 * Program to test out CPP IO and variables.
 */
int main()
{
    int my_carrots, your_carrots;

    my_carrots = 25;

    std::cout << "I have this many carrots: " << my_carrots << std::endl;

    my_carrots -= 1;

    std::cout << "I jsut ate one, and now I have: " << my_carrots << std::endl;
    std::cout << "How many carrots do YOU have?" << std::endl;

    std::cin >> your_carrots;

    std::cout << "Wow, you have " << your_carrots << " carrots? Okay!" << std::endl;
    your_carrots++;

    std::cout << "Here I gave you one, now you should have +1 of your carrots: " << your_carrots << std::endl;

    std::cin.get();

    return 0;
}
