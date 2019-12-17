/*
 * Chapter 8: cubes.cpp - pg 390
 */

#include <iostream>

using namespace std;

double cube(double a);
double rcube(double &ra);
double refcube(const double &ra);

int main(void)
{
    double x = 3.0;

    cout << cube(x);
    cout << " = cube of " << x << endl;

    cout << rcube(x);
    cout << " = cube of " << x << endl;

    cout << refcube(x);
    cout << " = cube of " << x << endl;

    return 0;
}


double cube(double a)
{
    a *= a * a;
    return a;
}

double rcube(double &ra)
{
    ra *= ra * ra;
    return ra;
}

double refcube(const double &ra)
{
    return ra * ra * ra;
}
