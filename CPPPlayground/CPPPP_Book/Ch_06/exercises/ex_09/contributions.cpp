/*
 * Chapter 6: Exercise 9 - pg 302-303
 * Monetary Contributuions
 * Now with file reading instead!
 */

#include <iostream>
#include <fstream>
#include <cstdlib>

struct contributor
{
    char name[30];
    double amount;
};

int main(void)
{
    using namespace std;

    char filename[] = "contributors.txt";
    ifstream inFile;
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "Could not open file: " << filename << endl;
        exit(EXIT_FAILURE);
    }

    cout << "\n\n--Welcome to the Society of Prevention of Rightful"
        " Influence--\n\n";

    int contribution_size;
    inFile >> contribution_size;
    contributor * member = new contributor[contribution_size];

    int i, temp;
    
    i = 0;
    temp = contribution_size;
    while (temp > 0) {
        inFile >> (member+i)->name, 30;
        inFile >> (member+i)->amount;
        --temp, ++i;
    }

    if (inFile.eof())
        cout << "Reached end of file: " << filename << endl;
    else if (inFile.fail())
        cout << "Input terminated due to type mismatch" << endl;
    else
        cout << "Unknown Error." << endl;

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
