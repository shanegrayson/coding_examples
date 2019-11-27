/*
 * Chapter 6: Exercise 3
 * Menu driven design
 */

#include <iostream>
#include <cctype>

int main(void)
{
    using namespace std;

    char ch;
    cout << "Please enter one fo the following chocie: \n";
    cout << "c) carnivore\tp) pianist\nt) tree\tg) game\nq) quit\t\n";
    cout << "Please enter a value: c, p, t, g, or q: ";
    cin.get(ch).get();

    while (isalpha(ch) && ch != 'q')
    {
        switch (ch)
        {
            case 'c': cout << "Growllll!!!\n"; break;
            case 'p': cout << "Time to play the pretty notes\n"; break;
            case 't': cout << "I am a maple tree!!!\n"; break;
            case 'g': cout << "Let's play a game...\n"; break;
            default: cout << "Not a valid alphanumeric choice!\n"; break;
        }

        cout << "Please enter a value: c, p, t, g, or q: ";
        cin.get(ch).get();
    }

    cout << "Goodbye!\n";

    return 0;
}
