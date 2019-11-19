/*
 * Chapter 4: strtype2.cpp - 134
 * Assigning, adding and appending
 */

#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    string s1 = "Penguine";
    string s2, s3;

    cout << "You can assign one string objectr to another: s2 = s1\n";
    s2 = s1;

    cout << "s1: " << s1 << ", s2: " << s2 << endl;

    cout << "You can assign a C-style string to a string object.\n";
    cout << "s2 = \"Buzzard\"\n";
    s2 = "Buzzard";

    cout << "s2: " << s2 << endl;

    cout << "You can concat strings: s3 = s1 + s2\n";
    s3 = s1 + s2;

    cout << "s3: " << s3 << endl;

    cout << "You can append strings:\n";
    s1 += s2;

    cout << "s1 += s2: " << s1 << endl;

    s2 += " for a day.";

    cout << "s2 += \" for a day.\" gives: " << s2 << endl;

    return 0;
}
