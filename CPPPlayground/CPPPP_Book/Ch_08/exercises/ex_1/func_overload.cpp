/*
 * Chapter 8: Exercise 1: func_overloading.cpp - pg. 444-445
 */

#include <iostream>

using namespace std;

void print(const char * str, unsigned int times = 1);

int main(void)
{
    char something[] = "Just some string";
    int times;

    cout << "Printing without user input and without a parameter:" << endl;

    print(something);

    cout << "How many times would you like to print? ";
    cin >> times;

    if (times < 1)
        cout << "Needs to be greater than 1. Try again" << endl;
    else
        print(something, times);

    return 0;
}

void print(const char * str, unsigned int times)
{
    for (int i = 0; i < times; i++)
    {
        cout << "Printing count: " << i + 1 << endl;
        cout << str << endl;
    }
}
