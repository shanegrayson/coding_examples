/**********************************************************
 * Chapter 9:
 * Exercise 4: sales.h
 * Author: Shane Grayson
 * Created: 01/05/2020
 * Type: Header file
 **********************************************************/
#ifndef SALES_H_
#define SALES_H_

/*
 * Namespace given by the books exercise.
 * Honestly, nothing special here.
 */
namespace SALES
{
    const int QUARTERS = 4;

    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    void setSales(Sales &s, const double ar[], int n);
    void setSales(Sales &s);
    void showSales(const Sales &s);
} // namespace SALES

#endif