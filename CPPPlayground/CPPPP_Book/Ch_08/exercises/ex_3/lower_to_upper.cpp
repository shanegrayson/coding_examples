/*
 * Chapter 8: Exercise 3: lower_to_upper.cpp - pg 445
 */

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

void convert(string & str);

int main(void)
{
    string quit = "q";
    string user;
    do
    {
        cout << "Enter a string (q to quit): " << endl;
        getline(cin, user);
        if (user.compare(quit))
            convert(user);
        else
            cout << "Goodbye!" << endl;
    } while (user.compare(quit) != 0);

    return 0;
}

void convert(string & str)
{
    for (int i = 0; i < str.length(); i++)
        cout << (char)toupper(str[i]);
    cout << endl;
}
