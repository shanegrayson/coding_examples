/*
 * Chapter 6: Exercise 2
 * Donations and their averages
 */

#include <iostream>
#include <cctype>

const int MaxDonos = 10;

int main(void)
{
    using namespace std;

    double donation[MaxDonos];
    int value, i;
    int dono = 0;

    cout << "Please enter no more than 10 donations\n";
    
    do 
    {
        cout << "Donation " << dono+1 << ": ";
        cin >> value;
        donation[dono] = value;
        ++dono; 
    } while (!isdigit(value) && dono < MaxDonos);
    cout << endl;

    double sum = 0;
    for (i = 0; i < dono; ++i)
    {
        cout << "sum: " << sum << ", dono[" << i << "]: " << donation[i] << endl;
        sum += donation[i];
    }

    cout << "The average of the donations is: " << sum / MaxDonos << "\n";
    
    return 0;
}
