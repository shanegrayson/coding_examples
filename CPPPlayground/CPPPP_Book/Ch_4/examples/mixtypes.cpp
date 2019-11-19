/*
 * Chapter 4: mixtypes.cpp - =g 185-186
 * some type combos
 */

#include <iostream>

//aye -> arntartica years end or something
struct aye
{
    int year;
};

int main(void)
{
    aye s01, s02, s03;
    s01.year = 1998;

    aye * pa = &s02;
    pa->year = 1999;

    aye trio[3]; //array of 3 structures
    trio[0].year = 2003;

    const aye * arp[3] = { &s01, &s02, &s03 };

    std::cout << trio->year << std::endl;
    std::cout << arp[1]->year << std::endl;

    const aye ** ppa = arp;
    auto ppb = arp;

    std::cout << (*ppa)->year << std::endl;
    std::cout << (*(ppb+1))->year << std::endl;

    return 0;
}
