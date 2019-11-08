/*
 * Chapter 2: Exercise 7
 * Write a prog that asks the user to enter an hour value and a min value. The
 * main() func should then pass these two values to a type void func that displays
 * the two values in the format:
 *  hours: 9; min: 23; time: 9:23
 */

#include <iostream>

void concatTime(int, int);

int main(void)
{
    int hour, min;

    std::cout << "Enter the number of hours: " << std::endl;
    std::cin >> hour;
    std::cout << "Enter the number of mins: " << std::endl;
    std::cin >> min;

    concatTime(hour, min);

    return 0;
}

void concatTime(int hour, int min)
{
    std::cout << hour << ":" << min << std::endl;
}
