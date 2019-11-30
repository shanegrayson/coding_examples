/*
 * Chapter 7: lotto.cpp - pg 319
 */

#include <iostream>

long double prob(unsigned number, unsigned picks);

int main(void)
{
    using namespace std;

    double total, choices;

    cout << "Enter the total number of choices on the game card and\n"
        "the number of picks allowed:\n";

    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << prob(total, choices);
        cout << " of winning.\n";
        cout << "Next two numebrs (q to quit): ";
    }

    cout << "Bye\n";

    return 0;
}

long double prob(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (int n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;

    return result;
}
