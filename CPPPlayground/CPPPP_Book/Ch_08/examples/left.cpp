/*
 * Chapter 8: left.cpp - pg 410-411
 */

#include <iostream>

using namespace std;

const int SIZE = 80;

char * left(const char * str, int n = 1);

int main(void)
{
    char sample[SIZE];

    cout << "Enter a string: " << endl;
    cin.getline(sample, SIZE);

    char * ps;
    
    ps = left(sample, 4);
    cout << ps << endl;
    delete [] ps;

    ps = left(sample);
    cout << ps << endl;
    delete [] ps;

    return 0;
}

char * left(const char * str, int n)
{
    if (n < 0)
        n = 0;

    char * p = new char[n+1];

    int i;
    for (i = 0; i < n && str[i]; i++)
        p[i] = str[i];
    while (i <= n)
        p[i++] = '\0';
    return p;
}
