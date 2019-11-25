/*
 * Chapter 6: switch.cpp - pg 276
 */

#include <iostream>

using namespace std;

//Function prototypes
void showmenu();
void report();
void comfort();

int main(void)
{
    showmenu();

    int choice;
    cin >> choice;

    while (choice != 5)
    {
        switch (choice)
        {
            case 1: cout << "\a\n";
                    break;
            case 2: report();
                    break;
            case 3: cout << "The boss was in all day.\n";
                    break;
            case 4: comfort();
                    break;
            default: cout << "That's not a choice.\n";
        }

        showmenu();
        cin >> choice;
    }
    cout << "Bye!\n";

    return 0;
}

void showmenu(void)
{
    cout << "Please enter 1, 2, 3, 4, or 5:\n"
        "1) alarm\t\t2)report\n"
        "3) alibi\t\t5)comfort\n"
        "5) quit\n";
}

void report(void)
{
    cout << "It's been an excellent weekfor business.\n"
        "Sales are up 120%. Expensses are down 35%.\n";
}

void comfort(void)
{
    cout << "Your employees think you are the finest CEO\n"
        "in the industry. The board of directors think\n"
        "you are the finest CEO in the industry. \n";
}
