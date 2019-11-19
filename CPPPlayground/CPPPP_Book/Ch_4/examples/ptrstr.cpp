/*
 * Chapter 4: ptrstr.cpp -pg 174-175
 * using pointers to strings
 */

#include <iostream>
#include <cstring>

int main(void)
{
    using namespace std;

    char animal[20] = "bear";
    const char * bird = "wren";
    char * ps;

    cout << animal << " and ";
    cout << bird << "\n";
    //cout << ps << "\n";

    cout << "Enter a kind of animal: ";
    cin >> animal;
    //cin >> ps; //just dont do

    ps = animal;
    cout << ps << "!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    ps = new char[strlen(animal)+1]; //dynamically alloccation the array with +1
    strcpy(ps, animal);

    cout << "After using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    delete [] ps;

    return 0;
}
