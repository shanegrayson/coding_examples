/**********************************************************
 * Chapter 10:
 * Exercise 5: stack.cpp
 * Author: Shane Grayson
 * Created: 01/10/2020
 * Type: Source Code File
 **********************************************************/
#include "stack.h"

Stack::Stack()
{
    top = 0;
    total_val = 0;
}

Stack::~Stack()
{
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item &item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
    {
        return false;
    }
}

bool Stack::pop()
{
    if (top > 0)
    {
        val = items[top - 1].payment;
        set_tot();
        items[--top];
        return true;
    }
    else
    {
        return false;
    }
}

void Stack::peek()
{
    std::cout << "Top of the stack" << std::endl;
    std::cout << "Full Name: " << items[top - 1].fullname << std::endl;
    std::cout << "Payment: " << items[top - 1].payment << std::endl;
}
