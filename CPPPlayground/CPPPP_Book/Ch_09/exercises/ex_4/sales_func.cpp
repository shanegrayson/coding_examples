/**********************************************************
 * Chapter 9:
 * Exercise 4: sales_func.cpp
 * Author: Shane Grayson
 * Created: 01/05/2020
 * Type: Source Code file
 **********************************************************/
#include <iostream>

#include "sales.h"

namespace SALES
{
    /*
     * This is the non-interactive version of the
     * overloaded function. Nothing too special here, we
     * are just checking for the min and max values, 
     * solving for an average value. No need to put in
     * sales values since they are hardcoded in sales.cpp
     */
    void setSales(Sales &s, const double ar[], int n)
    {
        double avg;
        double tempMin = s.sales[0];
        double tempMax = s.sales[0];

        for (int i = 0; i < QUARTERS; i++)
        {
            /* Used to calculate average */
            avg += s.sales[i];

            /* Used to find Min value */
            if (s.sales[i] < tempMin)
                tempMin = s.sales[i];

            /* Used to find Max value */
            if (s.sales[i] > tempMax)
                tempMax = s.sales[i];
        }

        s.average = avg / 4.0;
        s.min = tempMin;
        s.max = tempMax;
    }

    /*
     * This is the inter-active version of the
     * overlaoded function.
     */
    void setSales(Sales &s)
    {
        using std::cout;
        using std::cin;
        using std::endl;

        cout << "Please enter Earnings for Quaters 1-4:" << endl;

        /* Loop to set up quarterly sales */
        for (int i = 0; i < QUARTERS; i++)
        {
            cout << "Please enter Q" << i + 1 << ": ";
            cin >> s.sales[i];
        }

        /* 
         * These needed to be seperate due to max value saving a
         * garbage value for comparison, but just like previous
         * function, we are now just finding the min, max, and 
         * average. 
         */
        double avg;
        double tempMin = s.sales[0];
        double tempMax = s.sales[0];

        for (int i = 0; i < QUARTERS; i++)
        {
            avg += s.sales[i];

            if (s.sales[i] < tempMin)
                tempMin = s.sales[i];

            if (s.sales[i] > tempMax)
                tempMax = s.sales[i];
        }

        s.average = avg / 4.0;
        s.min = tempMin;
        s.max = tempMax;
    }

    /* Function to print and show all structures information */
    void showSales(const Sales &s)
    {
        using std::cout;
        using std::endl;

        cout << "Sales for the year:" << endl;
        for (int i = 0; i < QUARTERS; i++)
            cout << "Q" << i + 1 << ": $" << s.sales[i] << endl;

        cout << "Average sales for the year: $" << s.average << "/yr." << endl;
        cout << "The minimum value is: " << s.min << endl;
        cout << "The maximum value is: " << s.max << endl;
    }
} // namespace SALES