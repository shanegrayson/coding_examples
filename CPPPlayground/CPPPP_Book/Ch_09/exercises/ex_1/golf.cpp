/**********************************************************
 * Chapter 9:
 * Exercise 1: golf.cpp
 * Author: Shane Grayson
 * Created: 01/04/2020
 * Type: Main driver file
 **********************************************************/
#include "golf.h"
#include "golf_func.cpp"

#include <iostream>

/*
 * Main driver funciton.
 */
int main(void)
{
    /*
     * Create sinlge structure calling setGolf() function from
     * golf_func.cpp file.
     */
    golf ann;
    setGolf(ann, "Ann Hild", 13);
    showGolf(ann);
    handicap(ann, 15);
    showGolf(ann);

    golf members[3];

    /*
     * Create multuiple structures calling the overloaded setGolf() 
     * function from golf_func.cpp file.
     * (I think this is a good example of polymorphism.)
     */
    int test = 1;
    int i = 0;
    for (i = 0; i < 3 && test == 1; i++)
    {
        using namespace std;
        test = setGolf(members[i]);
        cout << "Test: " << test << endl;
    }

    /*
     * This condition is to set default structs that are not entered
     * if the user exits early.
     */
    if (i < 3)
    {
        i -= 1;
        while (i < 3)
        {
            members[i].fullName[0] = '\0';
            members[i].handicap = -1;
            i++;
        }
    }

    /*
     * Prints all the members int he struct array
     */
    for (int i = 0; i < 3; i++)
        showGolf(members[i]);

    return 0;
}
