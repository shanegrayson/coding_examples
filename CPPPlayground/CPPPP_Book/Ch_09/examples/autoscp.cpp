/*
 * Chapter 9: Example 9.4: autoscp.cpp
 */

#include <iostream>

void oil(int x);

int main(void)
{
    using namespace std;

    int texas = 31;
    int year = 2011;

    cout << "In main(), texas = " << texas << ", &texas = ";
    cout << &texas << endl;

    cout << "In main(), year = " << year << ", year = &year";
    cout << &year << endl;

    oil(texas);

    cout << "In main(), texas = " << texas << ", &texas = ";
    cout << &texas << endl;

    cout << "In main(), year = " << year << ", year = &year";
    cout << &year << endl;

    return 0;
}

void oil(int x)
{
    using namespace std;
    int texas = 5;

    cout << "In oil(), texas = " << texas << ", &texas = ";
    cout << &texas << endl;

    cout << "In oil(), x = " << x << ", x = &x";
    cout << &x << endl;

    {
        int texas = 113;
        cout << "In oil() inline block, texas = " << texas << ", &texas = ";
        cout << &texas << endl;
        cout << "In block x = " << x << ", &x = " << &x << endl;
    }
    cout << "Post block texas = " << texas;
    cout << ", &texas = " << &texas;
}

