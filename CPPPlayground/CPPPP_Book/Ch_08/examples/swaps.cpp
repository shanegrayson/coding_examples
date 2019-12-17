/*
 * Chapter 8: swaps.cpp - pg 387-388
 */

#include <iostream>

using namespace std;

void swapr(int & a, int & b);
void swapp(int * a, int * b);
void swapv(int a, int b);

int main(void)
{
    int wallet1 = 300;
    int wallet2 = 350;

    cout << "Before swapping wallets: " << endl;
    cout << "Wallet 1 = $" << wallet1 << endl;
    cout << "Wallet 2 = $" << wallet2 << endl;

    cout << "Calling reference to swap contents: " << endl;
    swapr(wallet1, wallet2);
    cout << "Wallet 1 = $" << wallet1 << endl;
    cout << "Wallet 1 = $" << wallet2 << endl;
    
    cout << "Calling pointer to swap contents: " << endl;
    swapp(&wallet1, &wallet2);
    cout << "Wallet 1 = $" << wallet1 << endl;
    cout << "Wallet 1 = $" << wallet2 << endl;
    
    cout << "Calling value to swap contents: " << endl;
    swapv(wallet1, wallet2);
    cout << "Wallet 1 = $" << wallet1 << endl;
    cout << "Wallet 1 = $" << wallet2 << endl;
   
    return 0;
}

void swapr(int & a, int & b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

void swapp(int * a, int * b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void swapv(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b - temp;
}
