/*
 * Chapter 7: Exercise 10 - pg 377
 * A calculation problem of sorts
 */

#include <iostream>
#include <cctype>

using namespace std;

double calculate(double x, double y, double (*pf)(double, double));
double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);

int main(void)
{
    double x, y, ansAdd, ansSub, ansMul;
    
    cout << "Please enter an x and y value range(type q to quit): ";
    while (cin >> x >> y)
    {
        /*
        ansAdd = calculate(x, y, add);
        ansSub = calculate(x, y, sub);
        ansMul = calculate(x, y, mul);
        */

        

        cout << x << " + " << y << " = " << ansAdd << "\n";
        cout << x << " - " << y << " = " << ansSub << "\n";
        cout << x << " * " << y << " = " << ansMul << "\n\n";

        cout << "Please enter an x and y value range(type q to quit): ";
    }

    return 0;
}

double calculate(double x, double y, double (*pf)(double, double))
{
    return (*pf)(x, y);
}


double add(double x, double y)
{
    return x + y;
}

double sub(double x, double y)
{
    return x - y;
}

double mul(double x, double y)
{
    return x * y;
}
