
/**********************************************************
 * Chapter 10:
 * Exercise 5: customer.cpp
 * Author: Shane Grayson
 * Created: 01/10/2020
 * Type: Main Driver File
 **********************************************************/
#include "stack.h"

int main(void)
{
    Stack *stack = new Stack();

    Customer me[3] = 
    { 
        {"Shane", 235.33},
        {"Anddrew", 1231.69},
        {"Robert", 2456.09}
    };

    for (int i = 0; i < 3; i++)
        stack->push(me[i]);

    double tot = stack->get_total_val();
    std::cout << "Total of people pushed: " << tot << std::endl;

    for (int i = 0; i < 4; i++)
    {
        std::cout << "Popping Top customer off: ";
        stack->peek();
        stack->pop();
        tot = stack->get_total_val();
        std::cout << "Total of people pushed: " << tot << std::endl;
    }

    return 0;
}