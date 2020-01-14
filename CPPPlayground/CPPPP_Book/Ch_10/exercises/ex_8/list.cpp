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
    //Originally was set to MAX, but seems it "end", looks the reason to be
    //size of the list! duh! I was also a bit confused about Item &item params
    for (int i = 0; i < end; i++)
    {
        //My original answer
        //process(items[i]);
        //One I found online at: https://github.com/noahc66260/C-PrimerPlus/blob/master/Chapter10/list.cpp
        (*pf)(items[i]);
    }
}

//I also read the problem as not making this function as a member function
// found at: https://github.com/noahc66260/C-PrimerPlus/blob/master/Chapter10/list.cpp
void List::printList(void) const
{
    if (list_empty())
    {
        std::cout << "Nothing to return" << std::endl;
        return;
    }
    else
    {
        for (size_t i = 0; i < end; i++)
        {
            std::cout << "Item " << i + 1 << ": " << items[i] << std::endl;
        }
    }
}