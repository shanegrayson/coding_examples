/***************************************
 * Author: Shane Grayson
 * Date: 01/08/2020
 * Program: person.h
 * Purpose: Header file
 * ************************************/
#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <string>
#include <cstring>

class Person
{
private:
    static const int LIMIT = 25;
    std::string lname;
    char fname[LIMIT];
public:
    Person() { lname = ""; fname[0] = '\0'; std::cout << "::Default Constructor Called::" << std::endl; }
    Person(const std::string &ln, const char *fn = "Heyyou");
    void Show() const;
    void FormalShow() const;
};

#endif