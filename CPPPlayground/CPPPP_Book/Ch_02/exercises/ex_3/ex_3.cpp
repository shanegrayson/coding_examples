/*
 * Chapter 2: Exercise 3
 * Write a C++ program that uses 3 user-defined
 * functions and produces the output:
 *  three blind mice
 *  three bline mice
 *  see how they run
 *  see how they run
 */

#include <iostream>

void tbm(void);
void shtr(void);

int main(void)
{
    tbm();
    tbm();
    shtr();
    shtr();

    return 0;
}

void tbm(void)
{
    std::cout << "three blind mice" << std::endl;
}

void shtr(void)
{
    std::cout << "see how they run" << std::endl;
}
