/*
 * Chapter 5: Exercise 1: Ranged Sum - pg. 251
 */

#include <iostream>

int main(void)
{
    using namespace std;

    cout << "Please enter a range for a calculated sum: " << endl;
    
    int low, temp, high;
    cout << "Low range: " << endl;
    cin >> low;
    temp = low;

    cout << "High range: " << endl;
    cin >> high;

    //jsut adding this for fun
    if (low > high)
    {
        cout << "No dumb-dumb, that is not how it works!" << endl;
        return 1;
    }

    /*
     * We start the sum at 0
     * We want to have our initalizer set to the low value
     * We want to keep cycling up to and including high
     * Just sum up easy low
     */
    int sum = 0;
    for (int i = low; low <= high; low++)
        sum += low;

    cout << "The sum of range: " << temp << " to " << high <<
        " is " << sum << endl;

    return 0;
}
