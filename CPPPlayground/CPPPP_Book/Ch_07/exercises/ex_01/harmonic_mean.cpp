/*
 * Chapter 7: Exercise 1 - pg 374
 * Harmonic Means
 */

#include <iostream>

using namespace std;

double harmonic_mean(double x, double y);

int main(void)
{
    double x, y, hm;

    cout << "Please enter a pair of numbers (0 to exit): ";
    cin >> x >> y;

    hm = harmonic_mean(x, y);
        
    cout << "The Harmonic Mean of " << x << " and " << y 
        << " is " << hm << endl << endl;

    while (x != 0 && y != 0)
    {
        cout << "Please enter a pair of numbers (0 to exit): ";
        cin >> x >> y;

        hm = harmonic_mean(x, y);
        
        cout << "The Harmonic Mean of " << x << " and " << y
            << " is " << hm << endl << endl;
    }

    return 0;
}

double harmonic_mean(double x, double y)
{
    return 2.0 * x * y / (x + y);
}
