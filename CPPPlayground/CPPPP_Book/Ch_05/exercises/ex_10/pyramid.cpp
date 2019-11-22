/*
 * Chapter 5: Exercise 10 - pg 252
 * Pyramid scheme
 */

#include <iostream>

int main(void)
{
    using namespace std;

    int levels;

    cout << "Please enter the levels of the pyramid: ";
    cin >> levels;

    for (int i = 0; i < levels; i++)
    {
        for (int j = 0; j < levels-i-1; j++)
            cout << ".";
        for (int k = 0; k < i+1; k++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
