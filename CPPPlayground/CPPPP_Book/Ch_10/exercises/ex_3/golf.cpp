/***************************************
 * Author: Shane Grayson
 * Date: 01/08/2020
 * Program: person.cpp
 * Purpose: Class Member Function file
 * ************************************/
#include "golf.h"

/*
 * This default constructor is very similar to the Golf
 * method found in ex1 of chapter 9. Essentially, if an
 * empty constructer is instatiated, we then ask the user
 * to put in the needed informaiton.
 */
Golf::Golf()
{
    std::cout << "Please enter Golfer's Name: ";
    std::cin.getline(fullName, LEN);

    if (fullName[0] != '\0')
    {
        std::cout << "Please enter Golfer's Handicap: ";
        std::cin >> handicap;
        std::cin.get();
    }
    else
    {
        handicap = 0;
    }
    
}

/* Typical explicite constructor. */
Golf::Golf(const char *fn, int hc)
{
    strncpy(fullName, fn, LEN);
    handicap = hc;
}

/* Noisy destructor */
Golf::~Golf()
{
    std::cout << "::Descructor Called::" << std::endl;
}

/* Member funciton that allows user to change the handicap */
void Golf::Handicap(int hc)
{
    handicap = hc;
}

/* Member function that allows user to change the name */
void Golf::FullName(const char *fn)
{
    strncpy(fullName, fn, LEN);
}

/* Member funciton to print Golfer's informaiton */
void Golf::Show() const
{
    using std::cout;
    using std::endl;

    cout << "Golfer's Name:-----" << fullName << endl;
    cout << "Golfer's Handicap:-" << handicap << endl;
}