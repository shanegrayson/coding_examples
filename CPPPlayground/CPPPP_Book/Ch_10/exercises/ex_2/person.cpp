/***************************************
 * Author: Shane Grayson
 * Date: 01/08/2020
 * Program: person.cpp
 * Purpose: Member Function file
 * ************************************/
#include "person.h"

Person::Person(const std::string &ln, const char *fn)
{
    std::cout << "::Constructor Called::" << std::endl;
    lname = ln;
    strncpy(fname, fn, LIMIT);
}

void Person::Show() const
{
    std::cout << "::Show() Member Function Called::" << std::endl;
    std::cout << "First Name: " << fname << std::endl;
    std::cout << "Last Name: " << lname << std::endl;
}
void Person::FormalShow() const
{
    std::cout << "::FormalShow() Member Function Called::" << std::endl;
    std::cout << "First Name: " << fname << std::endl;
    std::cout << "Last Name: " << lname << std::endl;
}