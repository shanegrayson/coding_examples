/*
 * Chapter 7: arrfun4.cpp - pg 332-333
 */

#include <iostream>

const int ArrSize = 8;

int sum_arr(const int * begin, const int * end);

int main(void)
{
    using namespace std;

    int cookies[ArrSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    
    int sum = sum_arr(cookies, cookies + ArrSize);
    cout << "Total cookies eaten: " << sum << endl;

    sum = sum_arr(cookies, cookies+3);
    cout << "First three eater ate " << sum << " cookies.\n";

    sum = sum_arr(cookies+4, cookies+8);
    cout << "Last four ate " << sum << " cookies.\n";

    return 0;
}

int sum_arr(const int * begin, const int * end)
{
    const int * pt;
    int total = 0;

    for (pt = begin; pt != end; pt++)
        total = total + *pt;

    return total;
}
