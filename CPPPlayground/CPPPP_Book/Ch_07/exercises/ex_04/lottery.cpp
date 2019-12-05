/*
 * Chapter 7: Exercise 4 - pg 374-375
 * Lottery and rates
 */

#include <iostream>

using namespace std;

long double prob(unsigned numbers, unsigned picks, unsigned mega);

/*
 * I am not 100% sure what this exercise is asking
 * me to do. I am not very strong with probability
 * and statictics. (Was a fun class, but it's been years.)
 */
int main(void)
{
    double total, choices, mega_num;

    cout << "Enter the total listing numbers, then field number,\n"
        "and finally the field for Mega Number: " << endl;

    while ((cin >> total >> choices >> mega_num) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << prob(total, choices, mega_num);
        cout << " of winning." << endl;
        cout << "Next three numbers: ";
    }

    cout << "Goodbye" << endl;

    return 0;
}

long double prob(unsigned numbers, unsigned picks, unsigned mega_num)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (int n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;

    return result * (1.0 / mega_num);
}

/*
 * chance of winning is:
 * product of the probability of all field numbers X
 * probability of picking the mega nunmber
 * x(probAllFields) * probOfMega
 */
