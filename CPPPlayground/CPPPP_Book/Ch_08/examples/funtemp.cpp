/*
 * Chapter 8: funtmep.cpp - pg. 420-421
 */

#include <iostream>

using namespace std;

template <typename T>
void Swap(T &a, T &b);

int main(void)
{
    int i = 10;
    int j = 20;

    cout << "i, j = " << i << ", " << j << "." << endl;
    cout << "Using compiler generated int swapper:" << endl;
    Swap(i, j);
    cout << "Now i, j = " << i << ", " << j << "." << endl;

    double k = 24.5;
    double l = 81.7;

    cout << "k, l = " << k << ", " << l << "." << endl;
    cout << "Using compiler generated double swapper:" << endl;
    Swap(k, l);
    cout << "Now k, l = " << k << ", " << l << "." << endl;

    return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}
