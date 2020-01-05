/**********************************************************
 * Chapter 9:
 * Exercise 4: sales.cpp
 * Author: Shane Grayson
 * Created: 01/05/2020
 * Type: Main Driver file
 **********************************************************/
#include <iostream>

#include "sales.h"

int main(void)
{
    /*
     * The first part of this exercise wanted for us to 
     * manually enter in the values for the quarterly sales.
     */
    SALES::Sales sales1;
    sales1.sales[0] = 123.32;
    sales1.sales[1] = 454.54;
    sales1.sales[2] = 222.22;
    sales1.sales[3] = 420.69;
    SALES::setSales(sales1, sales1.sales, SALES::QUARTERS);
    SALES::showSales(sales1);

    /*
     * This namespace structure is having us use the interactive
     * mode of the overloaded function.
     */
    SALES::Sales sales2;
    SALES::setSales(sales2);
    SALES::showSales(sales2);

    return 0;
}