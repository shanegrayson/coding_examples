/**********************************************************
 * Chapter 10:
 * Exercise 4: sales.h
 * Author: Shane Grayson
 * Created: 01/08/2020
 * Type: Header file
 **********************************************************/
#ifndef SALES_H_
#define SALES_H_
#include <iostream>

const int QUARTERS = 4;

namespace SALES
{
    class Sales
    {
    private:
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        Sales();
        Sales(const double ar[], int n);
        ~Sales();
        void Show();
    };
}

#endif