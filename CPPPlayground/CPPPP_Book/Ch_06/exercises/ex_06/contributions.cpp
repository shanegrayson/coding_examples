/*
 * Chapter 6: Exercise 6 - pg 302-303
 * Monetary Contributuions
 */

#include <iostream>

struct contributor
{
    char name[30];
    double amount;
};

int main(void)
{
    using namespace std;

    cout << "\n\n--Welcome to the Society of Prevention of Rightful"
        " Influence--\n\n";

    int contribution_size;
    cout << "Please enter the number amount of contributions: ";
    cin >> contribution_size;
    cin.get();

    contributor * member = new contributor[contribution_size];

    int i, temp;
    
    i = 0;
    temp = contribution_size;
    while (temp > 0) {
        cout << "Enter contributor's name: ";
        cin.get((member+i)->name, 30);
        cin.get();

        cout << "Enter contributor's amount: ";
        cin >> (member+i)->amount;
        cin.get();

        --temp, ++i;
    }


    cout << "\n--Grand Patrons--\n";
    i = 0;
    temp = contribution_size;
    while (temp > 0)  {
        if (((member+i)->amount > 10000.00)) {
            cout << "Name " << i+1 << ": " << (member+i)->name << endl;
            cout << "Amount " << i+1 << ": " << (member+i)->amount << endl;
        }
        --temp, ++i;
    }

    cout << "\n--Pleb Patrons--\n";
    i = 0;
    temp = contribution_size;
    while (temp > 0)  {
        if (((member+i)->amount <= 10000.00)) {
            cout << "Name " << i+1 << ": " << (member+i)->name << endl;
            cout << "Amount " << i+1 << ": " << (member+i)->amount << endl;
        }
        --temp, ++i;
    }
    delete member;

    return 0;
}
