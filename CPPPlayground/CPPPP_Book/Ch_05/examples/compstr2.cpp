/*
 * Chapter 5: compstr1.cpp - pg 221-222
 * comparing strings using arrays
 */

#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    string word = "?ate";

    for (char ch = 'a'; word != "mate"; ch++) {
        cout << word << endl;
        word[0] = ch;
    }

    cout << "After the loop has ended, word '" << word << "' matches.\n";

    return 0;
}
