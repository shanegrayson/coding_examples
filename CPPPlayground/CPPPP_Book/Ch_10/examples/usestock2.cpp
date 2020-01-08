#include <iostream>
#include "stock20.h"

const int STKS = 4;

int main(void)
{
    Stock *fluffy[STKS] =
    {
        new Stock("Nanosmart", 12, 20.50),
        new Stock("Boffo", 2000, 2.50),
        new Stock("Monolithic Obs", 130, 3.25),
        new Stock("Shane Ent", 60, 6.5)
    };

    for (int i = 0; i < STKS; i++)
    {
        fluffy[i]->show();
        fluffy[i]->buy(14, 18.125);
        fluffy[i]->show();
        fluffy[i]->sell(400, 20.00);
        fluffy[i]->show();
        fluffy[i]->buy(30000, 40.125);
        fluffy[i]->show();
        fluffy[i]->sell(25000, 0.125);
        fluffy[i]->show();
    }
    
    return 0;
}