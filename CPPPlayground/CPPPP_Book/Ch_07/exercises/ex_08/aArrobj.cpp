/*
 * Chapter 7: arrobj.cpp - pg 355-356
 */

#include <iostream>

using namespace std;

const int Seasons = 4;
const char * Snames[Seasons] = 
    { "Spring", "Summer", "Fall", "Winter" };

void fill(double * start, double * end);
void show(double * start, double * end);

int main(void)
{
    double expenses[Seasons];
    fill(expenses, expenses + Seasons);
    show(expenses, expenses + Seasons);

    return 0;
}

void fill(double * start, double * end)
{
    double * pd;
    int i;

    for (pd = start, i = 0; pd != end; pd++, i++)
    {
        cout << "Enter " << (Snames)[i] << " expenses: ";
        cin >> *pd;
    }
}

void show(double * start, double * end)
{
    double * pd;
    double total = 0.0;
    int i;

    cout << "\nEXPENSES\n";

    for (pd = start, i = 0; pd != end; pd++, i++)
    {
        cout << (Snames)[i] << ": $" << *pd << endl;
        total += (*pd);
    }

    cout << "Total Expenses: $" << total << endl;
}
