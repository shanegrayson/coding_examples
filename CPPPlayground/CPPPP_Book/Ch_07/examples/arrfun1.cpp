/*
 * Chapter 7: arrfun1.cpp - pg 321
 */

#include <iostream>

const int Size = 8;

int sum_arr(int arr[], int n);

int main(void)
{
    using namespace std;

    int cookies[Size] = {1,2,4,8,16,32,64,128};
    int sum = sum_arr(cookies, Size);

    cout << "Total cookies eaten: " << sum << "\n";

    return 0;
}

int sum_arr(int arr[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
        total = total + arr[i];

    return total;
}
