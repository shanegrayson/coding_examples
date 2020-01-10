/**********************************************************
 * Chapter 10:
 * Exercise 5: stack.h
 * Author: Shane Grayson
 * Created: 01/10/2020
 * Type: Header File
 **********************************************************/
#ifndef STACK_H_
#define STACK_H_

#include <iostream>

struct Customer
{
    char fullname[35];
    double payment;
};

typedef Customer Item;

class Stack
{
    private:
        enum {MAX = 10};
        Item items[MAX];
        int top;
        double val;
        double total_val;
        double set_tot() { total_val += val; }

    public:
        Stack();
        ~Stack();
        bool isempty() const;
        bool isfull() const;
        bool push(const Item &item);
        bool pop();
        void peek();
        double get_total_val() { return total_val; }
};

#endif