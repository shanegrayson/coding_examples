/*
 * Chapter 5: Exercise 6 - pg 251
 * Book sales problem but with a 2D array
 */

#include <iostream>

const int Months = 12;
const int Years = 3;

int main(void)
{
    using namespace std;

    const char * months[Months] =
    {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun", 
        "Jul", "Aug", "Spt", "Oct", "Nov", "Dec"
    };

    int books_sold[Years][Months] = { { 0 }, { 0 }, { 0 } };
    
    cout << "Please enter the amount of books sold each month:" << endl;

    for (int i = 0; i < Years; i++)
    {
        for (int j = 0; j < Months; j++)
        {
            int temp = 0;
            cout << "Year: " << i+1 << " " << months[j] << ": ";
            cin >> temp;
            books_sold[i][j] = temp;
        }    
    }

    int sum = 0;
    for (int i = 0; i < Years; i++)
        for (int j = 0; j < Months; j++)
            sum += books_sold[i][j];

    cout << "The sum of years sales is " << sum << endl;

    return 0;
}
