/*
 * Chapter 6: Exercise 4
 * Structure Business Plans
 */

#include <iostream>

using namespace std;

const int StrSize = 30;

void fullname(void);
void title(void);
void bopname(void);
void preference(int);

struct bop
{
    char fullname[StrSize];
    char title[StrSize];
    char bopname[StrSize];
    int preference;
};

bop users[3] = 
{
    {"Shane", "King", "Gray", 0},
    {"Someone", "Not him", "Loser", 1},
    {"xeno", "King Tank", "winner", 2},
};

int main(void)
{
    cout << "Benevolant Order of Programmer Report\n";
    cout << "a) display name\tb) display title\n";
    cout << "c) display bopname\td) display preference\nq) quit\n";

    char ch;
    cout << "Please enter your choice: ";
    cin.get(ch).get();
    while (ch != 'q')
    {
        switch (ch)
        {
            case 'a':
                fullname();
                break;
            case 'b':
                title();
                break;
            case 'c':
                bopname();
                break;
            case 'd':
                preference(users[0].preference);
                preference(users[1].preference);
                preference(users[2].preference);
                break;
            default: "Incorrect input\n"; break;
        }
        cin.get(ch).get();
    }

    return 0;
}

void fullname(void)
{
    cout << users[0].fullname << "\n";
    cout << users[1].fullname << "\n";
    cout << users[2].fullname << "\n";                
}

void title(void)
{
    cout << users[0].title << "\n";
    cout << users[1].title << "\n";
    cout << users[2].title << "\n";  
}

void bopname(void)
{
    cout << users[0].bopname << "\n";
    cout << users[1].bopname << "\n";
    cout << users[2].bopname << "\n";  
}

void preference(int n)
{
    if (n == 0)
        fullname();
    else if (n == 1)
        title();
    else if (n == 2)
        bopname();
    else
        cout << "Not a valid option\n"; 
}
