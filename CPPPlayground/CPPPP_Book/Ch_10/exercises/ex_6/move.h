/**********************************************************
 * Chapter 10:
 * Exercise 6: move.h
 * Author: Shane Grayson
 * Created: 01/10/2020
 * Type: Header File
 **********************************************************/
#ifndef MOVE_H_
#define MOVE_H_
#include <iostream>

class Move
{
private:
    double x;
    double y;

public:
    Move(double a = 0.0, double b = 0.0);
    void reset(double a = 0.0, double b = 0.0);
    void showmove() const;
    Move add(const Move &m) const;
};

#endif