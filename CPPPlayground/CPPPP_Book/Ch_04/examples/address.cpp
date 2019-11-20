/*
 * Chapter 4 - pg 154
 * using the $ operator to find addresses
 */

#include <iostream>

int main(void)
{
    using namespace std;
    
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts;
    cout << " and donuts address =\t" << &donuts << endl;

    cout << "cups value = " << cups;
    cout << " and cups address =\t" << &cups << endl;

    return 0;
}
