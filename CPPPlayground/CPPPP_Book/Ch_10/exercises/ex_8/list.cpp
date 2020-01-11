/**********************************************************
 * Chapter 10:
 * Exercise 8: list.cpp
 * Author: Shane Grayson
 * Created: 01/10/2020
 * Type: Source Code File
 **********************************************************/
#include "list.h"

List::List()
{
    end = 0;
}

List::~List()
{

}

bool List::list_add(const Item &item)
{
    if (end < MAX)
    {
        items[end] = item;
        ++end;
        return true;
    }
    else
    {
        return false;
    }
}

bool List::list_full() const
{
    return end == MAX;
}

bool List::list_empty() const
{
    return end == 0;
}

void List::peek()
{
    std::cout << "end:   " << end - 1 << std::endl;
    std::cout << "value: " << items[end - 1] << std::endl;
}

void List::visit(void (*pf)(Item &item))
{
    for (int i = 0; i < MAX; i++)
    {
        process(items[i]);
    }
}

void process(Item &item)
{
    std::cout << "Enter a new value: ";
    std::cin >> item;
}