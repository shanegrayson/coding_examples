#include <iostream>
#include "stock00.h"

void Stock::aquire(const std::string &co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative; ";
        std::cout << company;
        std::cout << " shares set to 0." << std::endl;
    }
    else
    {
        shares = n;
    }

    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchase can't be negative." << std::endl;
        std::cout << "Transaction aborted." << std::endl;
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares can't be negative." << std::endl;
        std::cout << "Transaction aborted." << std::endl;
    }
    else if (num > shares)
    {
        std::cout << "You can't sell more than you have!" << std::endl;
        std::cout << "Transaction aborted." << std::endl;
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    std::cout << "Comapny: " << company 
        << " Shares: " << shares << std::endl
        << " Share Price: $" << share_val
        << " Total Worth: $" << total_val << std::endl;
}