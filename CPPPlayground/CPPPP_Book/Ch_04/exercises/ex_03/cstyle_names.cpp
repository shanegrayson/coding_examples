/*
 * Chapter 4: Exercise 3 - pg 192
 * Write names using <cstring> and arrays
 * in the old C style
 */

#include <iostream>
#include <cstring>

using namespace std;

char * getname(void);

int main(void)
{
    char * first_name;
    char * last_name;
    char combined_name[100];
    int fn_len, ln_len;

    cout << "Enter your First Name: ";
    first_name = getname();

    cout << "Enter your Last Name: ";
    last_name = getname();

    cout << "First Name: " << first_name << endl;
    cout << "Last Name: " << last_name << endl;
    cout << "Combined: " << last_name << ", " << first_name << endl;

    strcpy(combined_name, last_name);
    strcat(combined_name, ", ");
    strcat(combined_name, first_name);

    cout << "Combined: " << combined_name << endl;

    delete first_name;
    delete last_name;

    return 0;
}

char * getname(void)
{
    char temp[100];
    cin >> temp;

    char * pn = new char[strlen(temp) + 1];
    strcpy(pn, temp);

    return pn;
}
