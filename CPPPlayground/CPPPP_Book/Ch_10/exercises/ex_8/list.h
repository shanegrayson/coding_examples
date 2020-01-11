/**********************************************************
 * Chapter 10:
 * Exercise 7: plorg_driver.cpp
 * Author: Shane Grayson
 * Created: 01/10/2020
 * Type: Main Driver File
 **********************************************************/
#ifndef LIST_H_
#define LIST_H_
#include <iostream>

typedef unsigned long Item;

class List
{
private:
    enum { MAX = 3 };
    Item items[MAX];
    int end;
public:
    List();
    ~List();
    bool list_full() const;
    bool list_empty() const;
    bool list_add(const Item &item);
    void peek();
    void visit(void (*pf)(Item &));
};

void process(Item &);

#endif