/*
 * Chapter 6: Exercise 5
 * Taxes and stuff
 */

#include <iostream>
#include <cctype>

int main(void)
{
    using namespace std;

    cout << "Enter TVARPS amount to find out taxes due:\n";

    double amount, saved_amount;
    double owed = 0.0;
    cin >> amount;

    while (amount > 0 && !isdigit(amount)) {
        saved_amount = amount;
        
        if (amount > 0 && saved_amount > 0) {
            if (saved_amount <= 5000)
                owed += amount * 0.00;
            else
                owed += 5000 * 0.00;
            amount -= 5000;
        }

        if (amount > 0 && saved_amount > 5000) {
            if (saved_amount <= 10000)
                owed += amount * 0.10;
            else
                owed += 10000 * 0.10;
            amount -= 10000;
        }

        if (amount > 0 && saved_amount > 10000) {
            if (saved_amount <= 20000)
                owed += amount * 0.15;
            else
                owed += 20000 * 0.15;
            amount -= 20000;
        }

        if (amount > 0 && saved_amount > 20000) {
            owed += amount * 0.20;
            amount -= 35000;
        }

        cout << "This tax payer owes: " << owed << " TVPR\n\n";

        amount = owed = saved_amount = 0.0;
        cout << "Enter TVARPS amount to find out taxes due:\n";
        cin >> amount;   
    }

    return 0;
}
