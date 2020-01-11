/**********************************************************
 * Chapter 10:
 * Exercise 8: list_driver.cpp
 * Author: Shane Grayson
 * Created: 01/10/2020
 * Type: Main Driver File
 **********************************************************/
#include "list.h"

int main (void)
{
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

    list1->visit(process);

    return 0;
}