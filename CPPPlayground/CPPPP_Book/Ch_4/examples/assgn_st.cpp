/*
 * Chapter 4: assgn_st.cpp - pg 145
 * assigning structs
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
    
    inflatable bouquet =
    {
        "Sunflowers",       //name[]
        0.2,                //volume
        12.49               //price
    };

    inflatable choice = { 0, 0, 0 };

    cout << "bouquet: " << bouquet.name << " for $ " << bouquet.price << endl;
    cout << "choice : " << choice.name << " for $ " << choice.price << endl;

    choice = bouquet;   //assigning one structure to another

    cout << "After assignment:" << endl;
    cout << "choice : " << choice.name << " for $ " << choice.price << endl;

    return 0;
}
