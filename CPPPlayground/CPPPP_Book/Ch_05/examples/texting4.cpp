/*
 * Chapter 5: textin3.cpp - pg 239
 * reading char to end of file (EOF)
 */

#include <iostream>

/*
 * Ctrl+D sets the cin.fail() bit to true / simulates EOF
 * This is for Linux
 */
int main(void)
{
    using namespace std;
    
    char ch;
    int count = 0;

    cin.get(ch);
    while (cin.fail() == false)
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }

    cout << endl << count << " characters read.\n";

    return 0;
}
