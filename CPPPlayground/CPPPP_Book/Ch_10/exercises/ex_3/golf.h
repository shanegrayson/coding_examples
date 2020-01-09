/***************************************
 * Author: Shane Grayson
 * Date: 01/08/2020
 * Program: person.h
 * Purpose: Header file
 * ************************************/
#ifndef GOLF_H_
#define GOLF_H_

#include <iostream>
#include <cstring>

const int LEN = 40;

class Golf
{
private:
    char fullName[LEN];
    int handicap;
public:
    Golf();
    Golf(const char *fn, int hc);
    ~Golf();
    void FullName(const char *fn);
    void Handicap(int hc);
    void Show() const;
};

#endif