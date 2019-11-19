/*
 * Chapter 4: strtype1.cpp - pg 132
 * Using the C++ string class
 */

#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    const int AR_SIZE = 20;

    char charr1[AR_SIZE];
    char charr2[AR_SIZE] = "jaguar";
    
    string str1;
    string str2 = "panther";

    cout << "Enter a kind of feline: ";
    cin >> charr1;

    cout << "Enter another kind of feline: ";
    cin >> str1;

    cout << "Here are some felines: \n";
    cout << charr1 << " " << charr2 << " " << str1 
        << " " << str2 << endl;

    cout << "The third letter in " << charr2 << " is " 
        << charr2[2] << endl;

    cout << "The third letter in " << str2 << " is "
        << str2[2] << endl;

    return 0;
}
