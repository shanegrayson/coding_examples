/*
 * Chatper 8: Exercise 5: template_func.cpp - pg 446
 */

#include <iostream>

using namespace std;

template <class T>
T max(T * a);

int main(void)
{
    int testInt[5] = {77, 2131, 4, 3 ,2};
    int maxInt = max(testInt);
    cout << "The max int is: " << maxInt << endl;
 
    double testDouble[5] = {77.34, 0.2131, 4.1, 3.21321 ,2.0};
    double maxDouble = max(testDouble);
    cout << "The max Double is: " << maxDouble << endl;   

    return 0;
}

template <class T>
T max(T * a)
{
    T max = a[0];
    T temp;

    for (int i = 0; i < 5; i++)
    {
        temp = a[i];
        max = max > temp ? max : temp;
    }

    return max;
}
