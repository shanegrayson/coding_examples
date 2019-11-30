/*
 * Chapter 7: strgback.cpp - pg 341-342
 */

#include <iostream>

char * buildstr(char c, int n);

int main(void)
{
    using namespace std;

    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "Enter an intager: ";
    cin >> times;

    char *ps = buildstr(ch, times);
    
    cout << ps << endl;

    delete [] ps;

    cout << ps << "-DOEN-" << ps << endl;

    delete [] ps;

    return 0;
}

char * buildstr(char c, int n)
{
    char * pstr = new char[n+1];
    
    pstr[n] = '\0';
    
    while (n-- > 0)
        pstr[n] = c;

    return pstr;
}
