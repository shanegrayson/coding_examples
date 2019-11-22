/*
 * Chapter 5: Exercise 3 - pg 251
 * Sum live updating
 */

#include <iostream>

int main(void)
{
    using namespace std;

    int number = -1;
    int prev_number = 0;
    int * p_pn = &prev_number;

    cout << "Continue adding values to be summed and updated:" << endl;

    cin >> number;
    while (number != 0)
    {
        cout << number << " + " << prev_number << " = " <<
            number + prev_number << endl;

        number += prev_number;
        
        /*
         * I choose to use a pointer here becuase I want
         * to actually change the value at that memory loc
         * since life of values in loops last only
         * in the loops, called life cycle or something
         */
        *p_pn = number;

        cin >> number;
    }

    cout << "Final value is " << *p_pn << endl;
    
    return 0;
}
