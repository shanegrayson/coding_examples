/*
 * Chapter 6: Exercise 1
 * Read input and change stuff
 */

#include <iostream>
#include <cctype>

int main(void)
{
    using namespace std;

    cout << "Enter some text:\n";
    
    char ch;
    cin.get(ch);
    while (ch != '@')
    {
        if (ch == '\n')
            cout << ch;
        else if (isdigit(ch))
            cout << " ";
        else if (islower(ch))
        {
            char upper = toupper(ch);
            cout << upper;
        }
        else if (isupper(ch))
        {
            char lower = tolower(ch);
            cout << lower;
        }
        else
            cout << ch;
        
        cin.get(ch);
    }

    return 0;
}
