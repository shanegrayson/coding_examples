/*
 * Chapter 4: Exercise 4 - pg 193
 * Same as ex_03 jsut use string instead of char arrays
 */

#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    string first_name, last_name, combined;

    cout << "Please enter your first name: ";
    cin >> first_name;
    cout << endl;

    cout << "Please enter your last name: ";
    cin >> last_name;
    cout << endl;

    combined = last_name + ", " + first_name;

    cout << "Combined: " << combined << endl;

    return 0;
}
