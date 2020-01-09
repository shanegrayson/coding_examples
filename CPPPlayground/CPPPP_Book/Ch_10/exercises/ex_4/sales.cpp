/**********************************************************
 * Chapter 10:
 * Exercise 4: sales.cpp
 * Author: Shane Grayson
 * Created: 01/08/2020
 * Type: Source Code file
 **********************************************************/
#include "sales.h"

namespace SALES
{
    /*
    * This is the inter-active version of the
    * Sales default constructor
    */
    SALES::Sales::Sales()
    {
        using std::cin;
        using std::cout;
        using std::endl;

        cout << "Please enter Earnings for Quaters 1-4:" << endl;

        /* Loop to set up quarterly sales */
        for (int i = 0; i < QUARTERS; i++)
        {
            cout << "Please enter Q" << i + 1 << ": ";
            cin >> SALES::Sales::sales[i];
        }

        /* 
         * These needed to be seperate due to max value saving a
         * garbage value for comparison, but just like previous
         * function, we are now just finding the min, max, and 
         * average. 
         */
        double avg = 0.0;
        double tempMin = SALES::Sales::sales[0];
        double tempMax = SALES::Sales::sales[0];

        for (int i = 0; i < QUARTERS; i++)
        {
            avg += SALES::Sales::sales[i];

            if (SALES::Sales::sales[i] < tempMin)
                tempMin = SALES::Sales::sales[i];

            if (SALES::Sales::sales[i] > tempMax)
                tempMax = SALES::Sales::sales[i];
        }

        SALES::Sales::average = avg / 4.0;
        SALES::Sales::min = tempMin;
        SALES::Sales::max = tempMax;
    }

    /*
    * This is the non-interactive of the 
    * constructor. Nothing too special here, we
    * are just checking for the min and max values, 
    * solving for an average value. No need to put in
    * sales values since they are hardcoded in sales.cpp
    */
    SALES::Sales::Sales(const double ar[], int n)
    {
        int i;

        for (i = 0; i < QUARTERS; i++)
        {
            SALES::Sales::sales[i] = ar[i];
        }

        double avg = 0.0;
        double tempMin = SALES::Sales::sales[0];
        double tempMax = SALES::Sales::sales[0];

        for (i = 0; i < QUARTERS; i++)
        {
            /* Used to calculate average */
            avg += SALES::Sales::sales[i];

            /* Used to find Min value */
            if (SALES::Sales::sales[i] < tempMin)
                tempMin = SALES::Sales::sales[i];

            /* Used to find Max value */
            if (SALES::Sales::sales[i] > tempMax)
                tempMax = SALES::Sales::sales[i];
        }

        SALES::Sales::average = avg / 4.0;
        SALES::Sales::min = tempMin;
        SALES::Sales::max = tempMax;
    }

    Sales::~Sales()
    {

    }

    /* Function to print and show all structures information */
    void SALES::Sales::Show()
    {
        using std::cout;
        using std::endl;

        cout << "Sales for the year:" << endl;
        for (int i = 0; i < QUARTERS; i++)
            cout << "Q" << i + 1 << ": $" << SALES::Sales::sales[i] << endl;

        cout << "Average sales for the year: $" << SALES::Sales::average << "/yr." << endl;
        cout << "The minimum value is: " << SALES::Sales::min << endl;
        cout << "The maximum value is: " << SALES::Sales::max << endl;
    }
} // namespace SALES