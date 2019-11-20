/*
 * Chapter 4: Exercise 10 - pg 193
 * Average 40 yard dash
 */

#include <iostream>

using namespace std;

int main(void)
{
    int val1, val2, val3;

    cout << "Please enter three instances of your 40 uard dash: " << endl;
    cin >> val1;
    cin >> val2;
    cin >> val3;

    cout << "Val1 = " << val1 << "\nVal2 = " << val2 << "\nVal3 = " << val3 << endl;

    cout << "Average of the runs is: " << ((val1 + val2 + val3) / 3) << endl;

    return 0;
}
