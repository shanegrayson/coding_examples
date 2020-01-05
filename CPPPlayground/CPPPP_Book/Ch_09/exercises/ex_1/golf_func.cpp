/**********************************************************
 * Chapter 9:
 * Exercise 1: golf_func.cpp
 * Author: Shane Grayson
 * Created: 01/04/2020
 * Type: Function containter file
 **********************************************************/
#include "golf.h"

#include <iostream>
#include <cstring>

/*
 * Funciton designed to be interactive with the user.
 * We ask for a name and handicap. If no name is 
 * enterd we exit with a status of 0, if there is 
 * text we exit with 1.
 */
int setGolf(golf &g)
{
    using std::cin;
    using std::cout;

    cout << "Please enter Golfer's Name: ";
    cin.getline(g.fullName, LEN);

    if (g.fullName[0] != '\0')
    {
        cout << "Please enter Golfer's Handicap: ";
        cin >> g.handicap;
        cin.get();
        return 1;
    }
    return 0;
}

/*
 * A non-interactive function for setting the 
 * golf structure.
 */
void setGolf(golf &g, const char *name, int hc)
{
    strcpy(g.fullName, name);
    g.handicap = hc;
}

/*
 * Function used to reset the structure handicap
 */
void handicap(golf &g, int hc)
{
    g.handicap = hc;
}

/*
 * Print function for the golf structure
 */
void showGolf(const golf &g)
{
    using std::cout;
    using std::endl;

    cout << "Golfer's Name:-----" << g.fullName << endl;
    cout << "Golfer's Handicap:-" << g.handicap << endl;
}