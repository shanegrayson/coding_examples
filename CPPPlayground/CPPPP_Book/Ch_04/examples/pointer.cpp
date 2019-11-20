/*
 * Chapter 4: pointer.cpp - pg. 155-156
 * our first pointer var
 */

#include <iostream>

int main(void)
{
    using namespace std;

    int updates = 6;        //declares a variable
    int *p_updates;         //decalres a pointer to an int
    p_updates = &updates;   //assign address of int to pointer
    
    //Express values two ways
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;
    
    //Express address two ways
    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    //Using pointers to change values
    *p_updates += 1;
    cout << "Now updates = " << updates << endl;

    return 0;
}
