/*
 * Chapter 5: dowhile.cpp - pg 232
 * exit-condition loop
 */

#include <iostream>

int main(void)
{
    using namespace std;
    int n;

    cout << "Enter numbers in the range 1-10 to find ";
    cout << "my favorite numeber: ";
    
    do 
    {
        cin >> n;
    } while (n !=7);

    cout << "Yes, 7 was the lucky number!" << endl;

    return 0;
}
