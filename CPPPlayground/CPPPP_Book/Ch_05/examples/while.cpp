/*
 * Chapter 5: while.cpp - pg 225-226
 * introducing a while loop
 */

#include <iostream>

const int ArSize = 20;

int main(void)
{
    using namespace std;

    char name[ArSize];

    cout << "Your first name, please: ";
    cin >> name;
    cout << "Here is you name, vert and ascii style:\n";

    int i = 0;
    while (name[i] != '\0') {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;
    }

    return 0;
}
