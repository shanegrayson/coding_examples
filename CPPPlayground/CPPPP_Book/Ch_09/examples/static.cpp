/*
 * Chapter 9: Example 9.9: static.cpp
 */

#include <iostream>

const int SIZE = 10;

void strcount(const char * str);

int main(void)
{
    using namespace std;

    char input[SIZE];
    char next;

    cout << "Enter a line:" << endl;
    cin.getline(input, SIZE);
    while (cin)
    {
        cin.get(next);
        while (next != '\n')
            cin.get(next);
        strcount(input);

        cout << "Enter the next line (empty to quit): " << endl;
        cin.get(input, SIZE);
    }
    cout << "Bye." << endl;

    return 0;
}

void strcount(const char * str)
{
    using namespace std;
    
    static int total = 0;
    int count = 0;

    cout << "\"" << str << "\" contains ";
    while (*str++)
        count++;
    total += count;

    cout << count << " characters." << endl;
    cout << total << " characters total." << endl;
}
