/********************************************
 * Author: Shane Grayson
 * Date: 01/08/2020
 * Program: bank.h
 * Purpose: Header file containing the class
 * ******************************************/
#ifndef BANK_H_
#define BANK_H_

#include <string>

class Bank
{
private:
    std::string name;
    unsigned int account_num;
    double balance;
public:
    Bank();
    Bank(const std::string &s, unsigned int, double b);
    ~Bank();
    void show(void) const;
    void deposit(const unsigned int an, const double amount);
    void withdraw(const unsigned int an, const double amount);
};

#endif