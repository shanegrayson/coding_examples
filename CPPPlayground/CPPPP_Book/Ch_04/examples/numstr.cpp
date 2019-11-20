/*
 * Chapter 4: numstr.cpp - pg 130
 * Following number input with line input
 */

#include <iostream>

int main(void)
{
    using namespace std;

    cout << "When was your house built?\n";

    int year;
    (cin >> year).get();

    cout << "What is the street address?\n";

    char address[80];
    cin.getline(address, 80);

    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!" << endl;

    return 0;
}
