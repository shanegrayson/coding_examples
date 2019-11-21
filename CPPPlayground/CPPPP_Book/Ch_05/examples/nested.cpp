/*
 * Chapter 5: nested.cpp - pg. 247-248
 * nested loops and 2-d arrays
 */

#include <iostream>

const int Cities = 5;
const int Years = 4;

int main(void)
{
    using namespace std;

    const char * cities[Cities] =
    {
        "Grib City",
        "Gribtown",
        "New Grib",
        "San Grib",
        "Grib Vista",
    };

    int maxtemps[Years][Cities] =
    {
        { 96, 100, 87, 56, 90 },
        { 95, 110, 97, 86, 99 },
        { 26, 190, 87, 36, 80 },
        { 94, 105, 86, 54, 92 },
    };

    cout << "Maximum temps for 2008 - 2011\n\n";

    for (int city = 0; city < Cities; ++city)
    {
        cout << cities[city] << ":\t";

        for (int year = 0; year < Years; ++year)
            cout << maxtemps[year][city] << "\t";
        cout << endl;
    }

    return 0;
}
