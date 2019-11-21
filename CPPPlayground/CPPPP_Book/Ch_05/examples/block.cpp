/*
 * Chapter 5: block.cpp - pg 212
 * Using a block statement
 */

#include <iostream>

int main(void)
{
    using namespace std;

    cout << "The Amazing Accounto will sum and average ";
    cout << "five numbers for you. \n";
    cout << "Please enter 5 values:\n";

    double num;
    double sum = 0.0;

    for (int i = 1; i <= 5; i++) {
        cout << "Value " << i << ": ";
        cin >> num;
        sum += num;
    }

    cout << "They sum up to: " << sum / 5 << endl;
    cout << "Thank you for using Amazing Accounto!" << endl;

    return 0;
}
