/**********************************************************
 * Chapter 10:
 * Exercise 7: plorg.h
 * Author: Shane Grayson
 * Created: 01/10/2020
 * Type: Header File
 **********************************************************/
#ifndef PLORG_H_
#define PLORG_H_
#include <iostream>
#include <cstring>

const int MAX = 20;

class Plorg
{
private:
    char fullname[MAX];
    int containment_index;

public:
    Plorg(const char fn[] = "Plorga", const int ci = 50);
    ~Plorg();
    void ci_update(int ci);
    void report_plorg();
};

#endif