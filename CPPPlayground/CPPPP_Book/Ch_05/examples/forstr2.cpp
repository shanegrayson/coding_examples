/*
 * Chapter 5: forstr2.cpp - pg 215
 * reversing a string
 */

#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    string word;
    cout << "Enter a word: ";
    cin >> word;

    char temp;
    int i, j;

    for (i = 0, j = word.size() -1; i < j; i++, j--) {
        temp = word[j];
        word[j] = word[i];
        word[i] = temp;
    }

    cout << word << "\nDONE\n";

    return 0;
}
