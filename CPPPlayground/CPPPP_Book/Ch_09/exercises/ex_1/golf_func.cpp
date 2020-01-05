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

using std::cout;
using std::cin;
using std::endl;

int setGolf(golf &g)
{
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

void setGolf(golf &g, const char *name, int hc)
{
    strcpy(g.fullName, name);
    g.handicap = hc;
}

void handicap(golf &g, int hc)
{
    g.handicap = hc;
}

void showGolf(const golf &g)
{
    cout << "Golfer's Name:-----" << g.fullName << endl;
    cout << "Golfer's Handicap:-" << g.handicap << endl;
}