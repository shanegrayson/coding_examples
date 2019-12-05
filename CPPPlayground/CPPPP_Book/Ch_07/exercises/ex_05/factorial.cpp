/*
 * Chapter 7: Exercise 5:
 * Factorial using recurssion
 */

#include <iostream>

using namespace std;

int factorial(int value);

int main(void)
{
    int total, val;

    cout << "Enter a value to see it's factorial (negative value to quit): ";
    cin >> val;

    while (val >= 0)
    {
        total = factorial(val);
        cout << "Total: " << total << endl;
        
        cout << "Enter a value to see it's factorial (-1 to quit): ";
        cin >> val;
    }

    cout << "Buh-Bye!" << endl;

    return 0;
}

int factorial(int value)
{
    if (value == 0 || value == 1)
        return value;
    else      
        return value * factorial(value - 1);
}
