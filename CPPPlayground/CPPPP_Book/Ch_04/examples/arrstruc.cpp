/*
 * Chapter 4: arrstruc.cpp - pg. 147
 * an array of structures
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

    inflatable guests[2] = 
    {
        {"Bambi", 0.5, 21.99},
        {"Godzilla", 2000, 565.99}
    };

    cout << "The geusts " << guests[0].name << " and "
        << guests[1].name << endl;

    cout << "They have a combined vol of " 
        << guests[0].volume + guests[1].volume << endl;
    cout << "They have a combined price of "
        << guests[0].price + guests[1].price << endl;

    return 0;
}
