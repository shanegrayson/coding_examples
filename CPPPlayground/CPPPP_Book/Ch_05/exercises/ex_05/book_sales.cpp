/*
 * Chapter 5: Exercise 5 - pg 251
 * Book sales problem
 */

#include <iostream>

const int Months = 12;

int main(void)
{
    using namespace std;

    const char * months[Months] =
    {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun", 
        "Jul", "Aug", "Spt", "Oct", "Nov", "Dec"
    };

    int books_sold[Months] = { 0 };
    
    cout << "Please enter the amount of books sold each month:" << endl;

    for (int i = 0; i < 12; i++)
    {
        int temp = 0;
        cout << months[i] << ": ";
        cin >> temp;
        books_sold[i] = temp;
    }

    int sum = 0;
    for (int i = 0; i < Months; i++)
        sum += books_sold[i];

    cout << "The sum of years sales is " << sum << endl;

    return 0;
}
