/*
 * Chapter 5: Exercise 8 - pg 252
 * Word counting program
 */

#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    int count = 0;
    int i = 0;
    string words;

    cout << "Enter words to count (to stop, type 'done')" << endl;

    while (words != "done")
    {
        cin >> words; 
        count++;
    }

    cout << "You entered a total of " << count-1 << " words." << endl;

    return 0;
}
