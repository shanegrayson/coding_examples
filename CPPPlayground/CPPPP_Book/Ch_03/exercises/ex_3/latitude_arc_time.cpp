/*
 * Chapter 3: Exercise 3 - pg 112
 * Latitiude Arc Time
 *
 * Formula I found at: https://www.easycalculation.com/formulas/angle-subtraction-formula.html
 * A[1] = d[1] + (m[1] * 0.0166667) + (s[1] * 0.0002778)
 * or!
 * a[1] = d[1] + (m[1] / 60) + (s[1] / 3600)
 * where A[1] is lat angle, d[1] is lat degree, m[1] is lat minute, and s[1] is lat second
 */
#include <iostream>

int main(void)
{
    int degrees, minutes, seconds;
    float latitude_dec;

    std::cout << "Enter degrees:___\b\b\b";
    std::cin >> degrees;
    std::cout << std::endl;
    std::cout << "Enter minutes:___\b\b\b";
    std::cin >> minutes;
    std::cout << std::endl;
    std::cout << "Enter seconds:___\b\b\b";
    std::cin >> seconds;
    std::cout << std::endl;

    /*
     * There are 60 seconds of arc to a min
     * There are 60 minutes of arc to a degree
     * Represent with symbolic consts
     * Each degree is divided into 60 minutes
     * and each minute is divided into 60 seconds
     * So, looks like it's jsut
     */

    const float min_arc = float (minutes) / 60;
    const float sec_arc = float (seconds) / 3600;

    latitude_dec = min_arc + sec_arc;

    std::cout << degrees << " degrees, " << minutes << " minutes, " << seconds <<
        " seconds =  " << degrees + latitude_dec << " latitude." << std::endl;

    return 0;
}
