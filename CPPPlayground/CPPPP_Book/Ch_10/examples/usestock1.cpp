#include <iostream>
#include "stock10.h"

int main(void)
{
    Stock *fluffy = new Stock("Nanosmart", 20, 12.50);
    fluffy->show();
    fluffy->buy(14, 18.125);
    fluffy->show();
    fluffy->sell(400, 20.00);
    fluffy->show();
    fluffy->buy(30000, 40.125);
    fluffy->show();
    fluffy->sell(25000, 0.125);
    fluffy->show();
    return 0;
}