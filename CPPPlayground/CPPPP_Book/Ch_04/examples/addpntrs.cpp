/*
 * Chapter 4: addpntrs.cpp - pg 167-168
 * pointer addition
 */

#include <iostream>

int main(void)
{
    using namespace std;

    double wages[3] = { 10000.0, 20000.0, 30000.0 };
    short stacks[3] = { 3, 2, 1 };

    double * pw = wages;        //name of array
    short * ps = &stacks[0];    //address of first position of array

    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw += 1;

    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";

    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps += 1;

    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

    cout << "access two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0]
        << "stacks[1] = " << stacks[1] << endl;

    cout << "access two elements with pointer notation\n";
    cout << "*stacks = " << *stacks
        << "*(stacks+1) = " << *(stacks+1) << endl;

    cout << sizeof(wages) << " = size of wages array\n";
    cout << sizeof(pw) << " = sizde of pw pointer\n";

    return 0;
}
