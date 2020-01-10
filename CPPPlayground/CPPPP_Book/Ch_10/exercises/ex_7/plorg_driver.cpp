/**********************************************************
 * Chapter 10:
 * Exercise 7: plorg_driver.cpp
 * Author: Shane Grayson
 * Created: 01/10/2020
 * Type: Main Driver File
 **********************************************************/
#include "plorg.h"

int main(void)
{
    Plorg *plorg1 = new Plorg();
    plorg1->report_plorg();

    Plorg *plorg2 = new Plorg("Shane", 33);
    plorg2->report_plorg();
    plorg2->ci_update(22);
    plorg2->report_plorg();

    plorg2->~Plorg();
    plorg1->~Plorg();
    
    return 0;
}