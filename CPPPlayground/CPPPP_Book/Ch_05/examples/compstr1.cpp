/*
 * Chapter 5: compstr1.cpp - pg 221-222
 * comparing strings using arrays
 */

#include <iostream>
#include <cstring>

int main(void)
{
    using namespace std;

    char word[5] = "?ate";

    for (char ch = 'a'; strcmp(word, "mate"); ch++) {
        cout << word << endl;
        word[0] = ch;
    }

    cout << "After the loop has ended, word '" << word << "' matches.\n";

    return 0;
}
