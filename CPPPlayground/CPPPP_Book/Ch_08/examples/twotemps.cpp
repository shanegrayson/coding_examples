/*
 * Chapter 8: twotemps.cpp - pg. 422-424
 */

#include <iostream>

using namespace std;

template <typename T> void Swap(T &a, T &b);
template <typename T> void Swap(T *a, T *b, int n);
void Show(int a[]);

const int LIM = 8;

int main(void)
{
    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << "." << endl;
    cout << "Using compiler-generated int swapper: " << endl;
    Swap(i, j);
    cout << "Now i, j = " << i << ", " << j << "." << endl;

    int d1[LIM] = {0, 7, 0, 4, 1, 7, 7, 6};
    int d2[LIM] = {0, 7, 2, 9, 1, 9, 6, 9};
    cout << "Original Arrays:" << endl;
    Show(d1);
    Show(d2);
    Swap(d1, d2, LIM);
    cout << "Swapped Arrays:" << endl;
    Show(d1);
    Show(d2);

    return 0;
}

template <typename T> void Swap(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

template <typename T> void Swap(T *a, T *b, int n)
{
    T temp;

    for (int i = 0; i < n; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void Show(int * a)
{
    cout << a[0] << a[1] << "/";
    cout << a[3] << a[4] << "/";

    for (int i = 4; i < LIM; i++)
        cout << a[i];
    cout << endl;
}
