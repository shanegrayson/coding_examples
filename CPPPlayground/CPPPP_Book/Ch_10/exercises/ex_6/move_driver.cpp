/**********************************************************
 * Chapter 10:
 * Exercise 6: move_driver.cpp
 * Author: Shane Grayson
 * Created: 01/10/2020
 * Type: Main Driver File
 **********************************************************/
#include "move.h"

int main(void)
{
    std::cout << "Creating a Move 1..." << std::endl;
    Move *move1 = new Move(3.7, 2.4);
    move1->showmove();
    move1->reset();
    move1->showmove();

    std::cout << "Creating a Move 2..." << std::endl;
    Move *move2 = new Move(7.3, 1.9);
    move2->showmove();

    std::cout << "adding Move 1 to Move 2 into Move 3" << std::endl;
    Move *move3 = new Move();
    *move3 = move1->add(*move2);

    std::cout << "Creating a Move 3..." << std::endl;
    move3->showmove();

    return 0;
}