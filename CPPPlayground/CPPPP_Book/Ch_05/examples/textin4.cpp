/*
 * Chapter 5: textin4.cpp - pg 242-243
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
    
    int ch;
    int count = 0;

    while ((ch = cin.get()) != EOF) 
    {
        cout.put(char(ch));
        ++count;
    }

    cout << endl << count << " characters read.\n";

    return 0;
}
