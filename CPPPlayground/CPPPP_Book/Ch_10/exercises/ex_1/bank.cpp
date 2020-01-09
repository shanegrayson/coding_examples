/********************************************
 * Author: Shane Grayson
 * Date: 01/08/2020
 * Program: bank.cpp
 * Purpose: This file contains allt the 
 *      definitions for the object 
 * ******************************************/

#include <iostream>
#include "bank.h"

Bank::Bank()
{
    name = "Empty";
    account_num = 0;
    balance = 0.0;
}

Bank::Bank(const std::string &s, unsigned int an, double b)
{
    name = s;
    account_num = an;
    balance = b;
}

Bank::~Bank()
{
}

void Bank::deposit(const unsigned int an, const double amount)
{
    if (an != account_num)
    {
        std::cout << "ERROR: Incorrect Account Number!" << std::endl;
    }
    else
    {
        balance += amount;
    }
}

void Bank::withdraw(const unsigned int an, const double amount)
{
    if (an != account_num)
    {
        std::cout << "ERROR: Incorrect Account Number!" << std::endl;
    }
    else
    {
        balance -= amount;
    }
}

void Bank::show(void) const
{
    using std::ios_base;
    ios_base::fmtflags orig = std::cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = std::cout.precision(3);

    std::cout << "Account Holder: " << name << std::endl;
    std::cout << "Account Number: " << account_num << std::endl;

    std::cout.precision(2);
    std::cout << "Account Balance: " << balance << std::endl;

    std::cout.setf(orig, std::ios_base::floatfield);
    std::cout.precision(prec);
}
