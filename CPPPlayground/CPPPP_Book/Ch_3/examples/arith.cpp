/*
 * Chapter 3: arith.cpp - pg 98
 */
#include <iostream>

int main(void)
{
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);

    float hats, heads;

    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;

    cout << "hats =" << hats << " amd heads = " << heads << "." << endl;
    cout << "hats + heads = " << hats + heads << "." << endl;
    cout << "hats - heads = " << hats - heads << "." << endl;
    cout << "hats * heads = " << hats * heads << "." << endl;
    cout << "hats / heads = " << hats / heads << "." << endl;

    return 0;
}
