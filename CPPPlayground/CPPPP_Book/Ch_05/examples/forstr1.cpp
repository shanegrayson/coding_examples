/*
 * Chapter 5: forstr1.cpp - pg 206-207
 * Using for with a string
 */

#include <iostream>
#include <string>

int main(void)
{
    using namespace std;

    cout << "Enter a word: ";
    string word;
    cin >> word;

    for (int i = word.size() - 1; i >= 0; i--)
        cout << word[i];

    cout << endl;

    //It needs the way above because it needs to access the 0th element!
    //The method above also ignores the \0 null character
    for (int i = word.size(); i > 0; i--)
        cout << word[i];
    cout << "\nBYE\n";

    return 0;
}
