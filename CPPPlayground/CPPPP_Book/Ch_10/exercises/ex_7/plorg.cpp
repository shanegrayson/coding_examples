/**********************************************************
 * Chapter 10:
 * Exercise 7: plorg.cpp
 * Author: Shane Grayson
 * Created: 01/10/2020
 * Type: Source Code File
 **********************************************************/
#include "plorg.h"

Plorg::Plorg(const char fn[], const int ci)
{
    strncpy(fullname, fn, MAX);
    containment_index = ci;
}

Plorg::~Plorg()
{
}

void Plorg::ci_update(int ci)
{
    containment_index = ci;
}

void Plorg::report_plorg()
{
    std::cout << "Name: " << fullname << std::endl;
    std::cout << "CI: " << containment_index << std::endl;
}