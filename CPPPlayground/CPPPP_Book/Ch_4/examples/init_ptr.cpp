/*
 * Chapter 4: init_ptr.cpp - pg. 158-159
 * initialize a pointer
 */

#include <iostream>

int main(void)
{
    using namespace std;

    int higgens = 5;    //assigning a value
    int * pt = &higgens; //pt pointer pointing to type int with higgens address

    cout << "Value of higgens =\t" << higgens << "\n"
        << "Address of higgens =\t" << &higgens << endl;

    cout << "Value of *pt = \t\t" << *pt << "\n"
        << "Value of pt = \t\t" << pt << endl;

    return 0;
}
