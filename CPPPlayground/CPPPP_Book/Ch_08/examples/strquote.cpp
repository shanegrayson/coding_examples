/*
 * Chapter 8: strquote.cpp - pg. 402-403
 */

#include <iostream>
#include <string>

using namespace std;

string version1(const string & s1, const string & s2);
const string & version2(string & s1, const string & s2);
const string & version3(string & s1, const string & s2);

int main(void)
{
    string input, copy, result;

    cout << "Enter a string: ";
    getline(cin, input);
    copy = input;

    cout << "Your string as entered: " << input << endl;
    result = version1(input, "***");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your Oriignal string: " << input << endl;

    cout << "Your string as entered: " << input << endl;
    result = version2(input, "@@@");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your Oriignal string: " << input << endl;

    cout << "Your string as entered: " << input << endl;
    result = version3(input, "!!!");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your Oriignal string: " << input << endl;

    return 0;
}

string version1(const string & s1, const string & s2)
{
    string temp;

    temp = s2 + s1 + s2;
    return temp;
}

const string & version2(string & s1, const string & s2)
{
    s1 = s2 + s1 + s2;
    return s1;
}

const string & version3(string & s1, const string & s2)
{
    string temp;

    temp = s2 + s1 + s2;
    return temp;
}
