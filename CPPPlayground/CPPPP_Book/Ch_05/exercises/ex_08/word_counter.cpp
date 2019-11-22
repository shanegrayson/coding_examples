/*
 * Chapter 5: Exercise 8 - pg 252
 * Word counting program
 */

#include <iostream>
#include <cstring>

int main(void)
{
    using namespace std;

    int count = 0;
    int i = 0;
    char words[30];
    const char done[] = "done ";

    cout << "Enter words to count (to stop, type 'done')" << endl;

    while (strcmp(done, words))
    {
        for (int j = 0; j < 30; j++)
        {
            words[j] = 0;
        }

        cin.get(words[i]);
        while (words[i] != ' ' && words[i] != '\n')
        {
            i++;
            cin.get(words[i]);
        }
        i = 0;
        count++;
    }

    cout << "You entered a total of " << count-1 << " words." << endl;

    return 0;
}
