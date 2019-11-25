/*
 * Chapter 6: and.cpp - pg 253-254
 */

#include <iostream>

const int ArSize = 6;

int main(void)
{
    using namespace std;

    float naaq[ArSize];

    cout << "Enter the NAAQs (New Age Awareness Quotiants) "
        << "of\nyour neighbors. Program terminates "
        << "when you make\n" << ArSize << " entries "
        << "or enter a negative value.\n";

    int i = 0;
    float temp;

    cout << "First value: ";
    cin >> temp;

    while (i < ArSize && temp >= 0)
    {
        naaq[i] = temp;
        ++i;
        if (i < ArSize)
        {
            cout << "Next value: ";
            cin >> temp;
        }
    }

    if (i == 0)
        cout << "No data--byte\n";
    else
    {
        cout << "Enter your NAAQ: ";
        float you;
        cin >> you;
        int count = 0;

        for (int j = 0; j < i; j++)
            if (naaq[j] > you)
                ++count;
        cout << count;
        cout << " of your neightbors have greater awareness of\n"
            << "the New Age than you do.\n";
    }

    return 0;
}
