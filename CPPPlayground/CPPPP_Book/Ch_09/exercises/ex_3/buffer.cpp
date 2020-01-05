/**********************************************************
 * Chapter 9:
 * Exercise 3: buffer.cpp
 * Author: Shane Grayson
 * Created: 01/05/2020
 * Type: Main driver file
 **********************************************************/
#include <iostream>
#include <new>
#include <cstring>

#include "buffer.h"

int main(void)
{
    using std::cout;
    using std::endl;

    /*
     * Using the buffer array found in buffer.h
     */
    chaff *pd1;
    pd1 = new (buffer) chaff[2];

    /*
     * First chaff struct
     */
    strcpy(pd1->dross, "hello");
    pd1->slag = 5;
    cout << "pd1 dros = " << pd1->dross << endl;
    cout << "pd1 slag = " << pd1->slag << endl;
    cout << "pd1 dros address = " << &pd1->dross << endl;
    cout << "pd1 slag address = " << &pd1->slag << endl;

    /*
     * Second chaff struct
     */
    strcpy((pd1 + 1)->dross, "goodbye");
    (pd1 + 1)->slag = 7;
    cout << "pd1 dros = " << (pd1 + 1)->dross << endl;
    cout << "pd1 slag = " << (pd1 + 1)->slag << endl;
    cout << "pd1 dros address = " << &(pd1 + 1)->dross << endl;
    cout << "pd1 slag address = " << &(pd1 + 1)->slag << endl;

    /*
     * Deletes the structure
     */
    delete [] pd1;

    return 0;
}