/*
 * Chapter 4: use_new.cpp - pg 161-162
 * using the "new" operator
 */

#include <iostream>

int main(void)
{
    using namespace std;

    int nights = 1001;
    int * pt = new int; //allocates space for an int
    *pt = 1001;         //store avalue there

    cout << "nights value = " << nights << ": location = "
        << &nights << endl;

    cout << "int value = " << *pt << ": location = " 
        << pt << endl;

    double * pd = new double;
    *pd = 10000001.0;

    cout << "double value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd);
    cout << ": size of *pd = " << sizeof(*pd) << endl;

    return 0;
}
