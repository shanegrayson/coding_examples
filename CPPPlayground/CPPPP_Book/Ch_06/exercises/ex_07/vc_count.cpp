/*
 * Chapter 6: Exercise 7 - pg. 303
 * Vowel and Consonants counter
 */

#include <iostream>
#include <cctype>

int main(void)
{
    using namespace std;

    cout << "Enter words (q to quit):\n";

    char ch;
    cin.get(ch);

    int vowel, consonant, other, current_ch, next_ch;
    bool quit = true;
    vowel = consonant = other = 0;
    while (quit) {
        current_ch = ch;

        if (isalpha(ch)) {
            switch (ch) {
                case 'a': ++vowel; break;
                case 'e': ++vowel; break;
                case 'i': ++vowel; break;
                case 'o': ++vowel; break;
                case 'u': ++vowel; break;
                case 'y': ++vowel; break;
                default: ++consonant; break;
            }
        }
        else
            ++other;
        
        cin.get(ch);
        next_ch = ch;

        if (current_ch == ' ' && next_ch == 'q')
            quit = false;
    }

    cout << vowel << " vowels in the input." << endl;
    cout << consonant << " consonants in the input." << endl;
    cout << other << " others in the input." << endl;

    return 0;
}
