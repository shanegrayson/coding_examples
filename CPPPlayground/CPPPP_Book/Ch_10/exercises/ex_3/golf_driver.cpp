/***************************************
 * Author: Shane Grayson
 * Date: 01/08/2020
 * Program: golf_driver.cpp
 * Purpose: Main Driver file
 * ************************************/
#include "golf.h"

int main(void)
{
    /*
     * Wanted first to create an empty object and then using
     * add or change stuff in it. Also, I thought that a
     * Destructor is called automatically after object
     * life cycle expires, but I didn't see that occur.
     */
    Golf *empty = new Golf;
    empty->Show();
    empty->Handicap(33);
    empty->Show();
    empty->FullName("shane");
    empty->Show();
    empty->~Golf();

    /*
     * Just an example of using an explicit usage
     * of a classes constructor
     */
    Golf *me = new Golf("shane22", 22);
    me->Show();
    me->~Golf();

    return 0;
}