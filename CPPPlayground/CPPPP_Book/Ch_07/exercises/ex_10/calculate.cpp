/*
 * Chapter 7: Exercise 10 - pg 377
 * A calculation problem of sorts
 */

#include <iostream>
#include <cctype>

using namespace std;

int const funcs = 3;

double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double calculate(double x, double y, double (*pf)(double, double));

int main(void)
{
    double x, y, ansAdd, ansSub, ansMul;
    double (*pa[funcs])(double, double) = { add, sub, mul };
    
    cout << "Please enter an x and y value range(type q to quit): ";
    while (cin >> x >> y)
    {
        /*
         * Using an array of functions
         */
        cout << "START-----AN ARRAY OF POINTED TO FUNCTIONS-----\n\n";
        auto pb = pa;
        for (int i = 0; i < funcs; i++)
            switch (i)
            {
                case 0: cout << x << " + " << y << " = " << (*pa[i])(x, y) << endl; break;
                case 1: cout << x << " - " << y << " = " << (*pa[i])(x, y) << endl; break;
                case 2: cout << x << " * " << y << " = " << (*pa[i])(x, y) << endl; break;
            }
        
        /*
         * Using just function poitners
         */
        cout << "\nSTART-----JUST POINTED TO FUNCTIONS-----\n\n";
        ansAdd = calculate(x, y, add);
        ansSub = calculate(x, y, sub);
        ansMul = calculate(x, y, mul);

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
