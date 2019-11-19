/*
 * Chapter 4: newstrct.cpp - pg 179-180
 * using new with a structure
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

    inflatable * ps = new inflatable;   //allocating mem for struct

    cout << "Enter name of inglatable item: ";
    cin.get(ps->name, 20);

    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;

    cout << "Enter price: $";
    cin >> ps->price;

    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << " cubic feet\n";
    cout << "Price: $" << ps->price << endl;

    delete ps;

    return 0;
}
