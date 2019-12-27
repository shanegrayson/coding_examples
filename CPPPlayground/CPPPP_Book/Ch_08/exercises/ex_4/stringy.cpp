/*
 * Chapter 8: Exercise 4: stringy.cpp - pg. 445-446
 * Note: Stated to use the 'new' keyword in the set function, but
 * I am unsure how to accomplish this without breaking the program.
 * Mainly because to me it seems like we are assigning the 'beany'
 * struct values, and not a new one...
 */

#include <iostream>
#include <cstring>

using namespace std;

struct stringy
{
    char * str;
    int ct;
};

void set(stringy & st, char * ch);
void show(stringy & st);
void show(const char * str);
void show(stringy & st, int n);
void show(const char * str, int n);

int main(void)
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);

    show(beany);
    show(beany, 2);

    testing[0] = 'D';
    testing[1] = 'u';

    show(testing);
    show(testing, 3);
    show("Done!");

    return 0;
}

void set(stringy & st, char * ch)
{
    for (int i = 0; ch[i] != '\0'; i++)
        st.ct = i;
    st.str = ch;
}

void show(stringy & st)
{
    cout << st.str << endl;
}

void show(const char * str)
{
    cout << str << endl;
}

void show(stringy & st, int n)
{
    for (int i = 0; i < n; i++)
        cout << st.str << endl;
}

void show(const char * str, int n)
{
    for (int i = 0; i < n; i++)
        cout << str << endl;
}
