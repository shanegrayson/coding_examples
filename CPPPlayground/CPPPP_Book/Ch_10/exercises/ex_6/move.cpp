/**********************************************************
 * Chapter 10:
 * Exercise 6: move.cpp
 * Author: Shane Grayson
 * Created: 01/10/2020
 * Type: Surce Code File
 **********************************************************/
#include "move.h"

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    std::cout << "Current: x = " << x << ", y = " << y << std::endl;
}

Move Move::add(const Move &m) const
{
    Move *addedMove = new Move(m.x, m.y);
    return *addedMove;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}