/*
 * Chapter 4: structure.cpp - pg 142
 * Making a simple structure
 */

#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main(void)
{
    using namespace std;
    
    inflatable guest =
    {
        "Glorious Gloria",  //name[]
        1.88,               //volume
        29.99               //price
    };

    inflatable pal =
    {
        "Audacious Author",
        3.12,
        32.99
    };

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    cout << "You have both for $";
    cout << guest.price + pal.price << "!\n";

    return 0;
}
