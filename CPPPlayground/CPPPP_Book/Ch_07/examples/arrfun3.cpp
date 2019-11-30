/*
 * Chapter 7: arrfun3.cpp
 */

#include <iostream>

using namespace std;

const int Max = 5;

int fill_arr(double arr[], int limit);
void show_arr(const double arr[], int n);
void revalue(double r, double arr[], int n);

int main(void)
{
    double properties[Max];
    int size = fill_arr(properties, Max);
    show_arr(properties, size);

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

        revalue(factor, properties, size);
        show_arr(properties, size);
    }

    cout << "Done. \n";
    cin.get(); cin.get();

    return 0;
}

int fill_arr(double arr[], int limit)
{
    double temp;
    int i; 

    for (i = 0; i < limit; i++)
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
        arr[i] = temp;
    }
    return i;
}

void show_arr(const double arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Property #" << (i+1) << ": $";
        cout << arr[i] << endl;
    }
}

void revalue(double r, double arr[], int n)
{
    for (int i = 0; i < n; i++)
        arr[i] *= r;
}
