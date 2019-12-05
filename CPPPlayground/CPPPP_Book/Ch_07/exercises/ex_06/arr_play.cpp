/*
 * Chapter 7: Exercise 6 - pg 375
 * Playing with arrays and functions
 */

#include <iostream>

using namespace std;

const int Size = 4;

void fill_array(double * array, int size);
void show_array(const double * array, int size);
void reverse_array(double * array, int size);

int main(void)
{
    double array1[Size];

    fill_array(array1, Size);
    show_array(array1, Size);
    reverse_array(array1, Size);

    return 0;
}

void fill_array(double * array, int size)
{
    double dval;

    cout << "Please fill the array with " << size << " elements..." << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Element #" << i+1 << ": ";
        cin >> dval;

        array[i] = dval;
    }

    cout << endl;
}

void show_array(const double * array, int size)
{
    for (int i = 0; i < size; i++)
        cout << "Value of array[" << i << "] = " << array[i] << endl;
}

void reverse_array(double * array, int size)
{
    double temp;
    int i, j;

    for (i = 0, j = size; i != j; i++, j--)
    {
        temp = array[i];
        array[i] = array[j-1];
        array[j-1] = temp;
    }
    
    cout << "\nArray Reversed:\n";
    show_array(array, size);
}

