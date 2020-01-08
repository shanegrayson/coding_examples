#include <iostream>
#include "stock20.h"

Stock::Stock()
{
    std::cout << "Default constructor called" << std::endl;
    company = "No Name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string &co, long n, double pr)
{
    std::cout << "Constructor using " << co << " called" << std::endl;
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

Stock::~Stock()
{
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
    using std::ios_base;
    ios_base::fmtflags orig = std::cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = std::cout.precision(3);

    std::cout << "Comapny: " << company
              << " Shares: " << shares << std::endl
              << " Share Price: $" << share_val;
    std::cout.precision(2);
    std::cout << " Total Worth: $" << total_val << std::endl;

    /* Restore */
    std::cout.setf(orig, ios_base::floatfield);
    std::cout.precision(prec);
}

const Stock &Stock::topval(const Stock &s) const
{
    if (s.total_val > total_val)
    {
        return s;
    }
    else
    {
        return *this;
    }
}