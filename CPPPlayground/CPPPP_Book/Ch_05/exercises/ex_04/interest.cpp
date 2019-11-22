/*
 * Chapter 5: Exercise 4: Interest - pg 251
 */

#include <iostream>

int main(void)
{
    using namespace std;

    int year_count = 1;
    float daphne_monies = 100000;
    float cleo_monies = 100000;

    //Simple Investment
    while (cleo_monies <= daphne_monies)
    {
        cout << "Year:" << year_count << "\t\t";
        cout << "Daphne Monies: " << daphne_monies << ",\tCleo Monies: " << cleo_monies << endl;
        daphne_monies = daphne_monies + (100000 * 0.10);
        cleo_monies = cleo_monies + (cleo_monies * 0.05);
        year_count++;
    }

    cout << "Year:" << year_count << "\t\t";
    cout << "Daphne Monies: " << daphne_monies << ",\tCleo Monies: " << cleo_monies << endl;
    cout << "It takes " << year_count << " years for Cleo's to bet over Daphne." << endl;

    return 0;
}
