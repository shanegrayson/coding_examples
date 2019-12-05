/*
 * Chapter 7: arrfun3.cpp
 */

#include <iostream>

using namespace std;

const int Max = 5;

int fill_arr(double * start, double * end);
void show_arr(const double * start, const double * end);
void revalue(double r, double * start, double * end);

int main(void)
{
    double properties[Max];
    int size = fill_arr(properties, properties + Max);
    show_arr(properties, properties + Max);

    if (size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;

        while (!(cin >> factor))    //bad input
        {
            cin.clear();
            
            while (cin.get() != '\n')
                continue;
            cout << "Bad Input; Please enter a number: ";
        }

        revalue(factor, properties, properties + size);
    }

    cout << "Done. \n";
    cin.get(); cin.get();

    return 0;
}

int fill_arr(double * start, double * end)
{
    double temp;
    double * pt;
    int i;

    for (pt = start, i = 0; pt != end; pt++, i++)
    {
        cout << "Enter value #" << (i+1) << ": ";
        cin >> temp;

        if (!cin)   //bad input
        {
            cin.clear();
            
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        start[i] = temp;
    }
    return i;
}

void show_arr(const double * start, const double * end)
{
    const double * pa;
    int i;

    for (pa = start, i = 0; pa != end; pa++, i++)
        cout << "Property #" << (i+1) << ": $" << (*pa) << endl;
}

void revalue(double r, double * start, double * end)
{
    double * pa;
    for (pa = start; pa != end; pa++)
        cout << "Revalued: $" << ((*pa)*r) << endl;

}

