/*
 * Chapter 4: arraynew.cpp - pg 166
 * using the new operator for arrays
 */

#include <iostream>

int main(void)
{
    using namespace std;

    double * p3 = new double [3];   //allocating space for 3 doubles
    p3[0] = 0.2;
    p3[1] = 0.4;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << ".\n";
    p3 += 1;
    
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";

    p3 -= 1;

    cout << "Just subtracted 1 from the p3 pointer to reset,\n" <<
        "and now will delete the allocated memory.\n";
    
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";

    delete [] p3;

    return 0;
}
