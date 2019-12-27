/*
 * Chapter 8: Exercise 6: complicated_template.cpp - pg. 446
 * The whole "pointer to character pointers and comparing them" was
 * a bit too complicated without having even used a specialized template
 * So I just tried a simpler method with int and double.
 */

#include <iostream>

using namespace std;

template <class T>
T maxn(T * a, int n);

template <class T1, class T2>
T1 maxn(T2 d, T1 n);

template <>
int maxn(double d, int n);

int main(void)
{
    int testInt[6] = {6, 3, 8, 99, 2, -101};
    int maxInt = maxn(testInt, 6);
    cout << "Max int is: " << maxInt << endl;

    double testDouble[4] = {6.343, 0.99, 2.123, -101.666};
    double maxDouble = maxn(testDouble, 4);
    cout << "Max double is: " << maxDouble << endl;

    int test1 = maxn(34.3, 3);
    cout << test1 << endl;

    return 0;
}

template <class T>
T maxn(T * a, int n)
{
    T max = a[0];
    T temp;

    for (int i = 0; i < n; i++)
    {
        temp = a[i];
        max = max > a[i] ? max : a[i];
    }

    return max;
}

template <>
int maxn(double d, int  n)
{
    return 69420;
}
