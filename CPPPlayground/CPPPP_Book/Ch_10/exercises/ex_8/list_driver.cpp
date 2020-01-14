/**********************************************************
 * Chapter 10:
 * Exercise 8: list_driver.cpp
 * Author: Shane Grayson
 * Created: 01/10/2020
 * Type: Main Driver File
 * Note: I completely thought this file was supposed to
 *  do something else.
 **********************************************************/
#include "list.h"

//omg, it was because I had the wrong typedef in the header file
inline void square(unsigned long &x) { x = x * x; }

int main (void)
{
    /*
     * I complete misunderstood what this was asking
     * and needed to get help online.
     */
    std::cout << "Creating new list..." << std::endl;
    List *list1 = new List();

    std::cout << "Adding an item..." << std::endl;
    list1->list_add(22);
    list1->peek();

    std::cout << "Adding an item..." << std::endl;
    list1->list_add(11);
    list1->peek();

    std::cout << "Adding an item..." << std::endl;
    list1->list_add(7);
    list1->peek();

    //could tell I was misunderstanding the problem...
    //function traverses the list... w/e
    std::cout << "visiting second node..." << std::endl;
    list1->visit(square);
    list1->printList(); 

    return 0;
}