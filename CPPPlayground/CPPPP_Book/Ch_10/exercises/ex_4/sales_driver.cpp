/**********************************************************
 * Chapter 10:
 * Exercise 4: sales_driver.cpp
 * Author: Shane Grayson
 * Created: 01/08/2020
 * Type: Main Driver file
 **********************************************************/
#include "sales.h"

int main(void)
{
    using namespace SALES;

    Sales *inter = new Sales();
    inter->Show();
    inter->~Sales();

    double temp[QUARTERS] = { 123.32, 9999.99, 123.33, 1.33 };
    Sales *inter1 = new Sales(temp, QUARTERS);
    inter1->Show();
    inter1->~Sales();

    return 0;
}