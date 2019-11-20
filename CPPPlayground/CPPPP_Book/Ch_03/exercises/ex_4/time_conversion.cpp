/*
 * Chapter 3: Exercise 4 - pg 112
 * Time conversion
 */
#include <iostream>

int main(void)
{
    const int hours_in_day = 24;
    const int mins_in_hour = 60;
    const int secs_in_min = 60;

    int days, hours, minutes;
    long long seconds;

    std::cout << "Enter the number of seconds: ";
    std::cin >> seconds;

    std::cout << seconds << " seconds = ";

    days = seconds / (hours_in_day * mins_in_hour * secs_in_min);
    seconds -= (days * hours_in_day * mins_in_hour * secs_in_min);
    
    std::cout << days << " days, ";

    hours = seconds / (mins_in_hour * secs_in_min);
    seconds -= (hours * mins_in_hour * secs_in_min);

    std::cout << hours << " hours, ";

    minutes = seconds / (secs_in_min);
    seconds -= (minutes * secs_in_min);

    std::cout << minutes << " minutes, " << seconds << " seconds." << std::endl;

    return 0;
}
