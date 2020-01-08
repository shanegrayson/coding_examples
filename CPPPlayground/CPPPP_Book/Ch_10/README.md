# Chapter 10: Questions and Answers
Answer to review questions from C++ Primer Plus

**MA** -> My Answers without referring to the back of the book for an answer.

**BA** -> Book's answer to the review question.

## Question 1:
What is a class?

MA:

A class is a blueprint for objects. A class is a user defined type.

BA:

A class is a definition of a user-defined type. A class declaration specifies how data is to be stored, and it specifies the methods (class member functions) that can be used to access and manipulate that data.

## Question 2:
How does a class accomplish abstraction, encapsulation, and data hiding?

MA:

- Abstraction is accomplished by extracting the essential operational features of a problem, and express a solution in those terms. 
- Encapsulation is accomplished by gathering the implementation details together and separating them from abstraction.
- Data hiding is accomplished by putting data in the private section of a class. 

BA:

A class represents the operations that you can perform on a class object with a public interface of class methods; this is abstraction. The class can use private visibility (the default) for data members, meaning that the data can be accessed only through the member functions; this is data hiding. Details of the implementation, such as data representation and method code, are hidden; this is encapsulation.

## Question 3:
Why is the relationship between an object and a class?

MA:

An object is the instantiaion of a class, and a class is a blueprint for objects.

BA:

A class defines a type, including how ti can be used. An object is a variable or another data object, such as that produced by `new`, which is created and used according to the class definition. The relationship between a class and an object is the same as that between a standard type and a variable of that type.

## Question 4:
In what way, aside from being functions, are class function members different from class data members?

MA:

- When we define a member function, you use the scope resolution (::) operator to identify the class to which the function belongs.
- Class methods can access the `private` component of the class.
- They can also have return types and arguments.

BA:

If you create several objects of a given class, each object comes with storage for it's own set of data (*NOTE* When did it ask about this!?). But all the objects use the one set of member functions. (Typically , methods are public and data members are private, but that's a matter of policy, not of class requirements.)

## Question 5:
Define a class to represent a bank account. Data members should include the depositor's name(use a string), the account number, and the balance. Member functions should allow the following:

- Creating an object and initializing it.
- Displaying the depositor's name, account number, and balance.
- Depositing an amount of money give by an argument.
- Withdrawing an amount of money given by an argument.

Just show the class declaration, not the method of implementation. (Programming Ex_1 provides you with an opportunity to write the implementation.)

MA:

*class.h*
```
#ifndef CLASS_H_
#define CLASS_H_

class Bank
{
private:
    std::string name;
    unsigned int account_num;
    double balance;
public:
    Bank();
    Bank(const std::string &s = "No Name", unsigned int an = 0, double b = 0.0);
    ~Bank();
    void show(void) const;
    void deposit(const unsigned int an, const double amount);
    void withdraw(const unsigned int an, const double amount);
};

#endif
```

*class_classes.cpp*
```
#include <iostream>
#include "class.h"

Bank::Bank()
{
    name = "Empty";
    account_num = 0;
    balance = 0.0;
}

Bank::Bank(const std::string &s = "No Name", unsigned int an = 0, double b = 0.0)
{
    name = s;
    account_num = an;
    balance = b;
}

~Bank::Bank()
{
}

void Bank::show(void) const
{
    std::ios_base::fmtflags orig = std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    std::streamsize prec = std::cout.precision(3);

    std::cout << "Account Holder: " << name << std::endl;
    std::cout << "Account Number: " << account_num << std::endl;

    std::cout.precision(2);
    std::cout << "Account Balance: " << balance << std::endl;

    std::cout.setf(orig, std::ios_base::floatfield);
    std::cout.precious(prec);
}

void Bank::deposit(cosnt unsigned int an, const double amount)
{
    if (an != account_num)
    {
        std::cout << "ERROR: Incorrect Account Number!" << std::endl;
    }
    else
    {
        balance += amount;
    }
}

void Bank::withdraw(cosnt unsigned int an, const double amount)
{
    if (an != account_num)
    {
        std::cout << "ERROR: Incorrect Account Number!" << std::endl;
    }
    else
    {
        balance -= amount;
    }
}
```

*class_main.cpp*
```
#include <iostream>
#include "class.h"
#include "class_classes.cpp"

int main(void)
{
    /* I am using the extra brackets for the destructor */
    {
        Bank no_bank;
        Bank *new_user = new Bank("shane", 123213, 420.69);
        new_user->show();
        new_user->deposit(123213, 50.23);
        new_user->show();
        return 0;
    }
}
```
I went WAY overboard!

BA:

This example use char arrays to hold the character data but you could use string class object instead.
```
class BankAccount
{
private:
    char name[40];
    char acctnum[25];
    double balance;
public:
    BankAccount(const char *client, const char *num, double bal = 0.0);
    void show(void);
    void deposit(double cash);
    void withdraw(double cash);
}
```

## Question 6:
When are class constructors called? When are class destructors called?

MA:

- Constructor: A constructor is called when a class is instantiating by an object call.
- Destructor: The destructor is called the object leaves scope of where it was initialized.

BA:

A class constructor is called when you create an object of that class or when you explicitly call the constructor. A class destructor is called when the object expires.

## Question 7:
Provide code for a constructor for the bank account class from Chapter Review Question 5.

MA:

*NOTE*: Mine is a bit different since I am using unsigned int instead of a string/char[] for the account number.
```
Bank::Bank()
{
    name = "Empty";
    account_num = 0;
    balance = 0.0;
}

Bank::Bank(const std::string &s = "No Name", unsigned int an = 0, double b = 0.0)
{
    name = s;
    account_num = an;
    balance = b;
}

~Bank::Bank()
{
}
```

BA:

```
BankAccount::BankAccount(const char *client, const char *num, double bal)
{
    strncpy(name, client, 39);
    name[39] = '\0';
    strncpy(acctnum, num, 24);
    acctnum[24] = '\0';
    balance = bal;
}
```
or
```
BankAccount::BankAccount(const std::string &client, const std::string &num, double bal)
{
    name = client;
    acctnum = num;
    balance = bal;
}
```

## Question 8:
What is a default constructor? What is the advantage of having one?

MA:

A default constructor is a member function of the class that guarantees that some kind of data get's saved in the objects data sections if no explicit information was given to the class when the object is instantiated. An obvious advantage of having a default constructor is that, if you instantiate an object without entering in any data members, you will not get an error when trying to run operations on those data members. If you do not provide a default constructor, the C++ compiler will do one for you automatically, but it will be blank test::test(){};

BA:

A default constructor either has no arguments or has default for all the arguments. Having a default constructor enables you to declare objects without initializing them, even if you've already defined an initializing constructor. It also allows you to declare arrays. 

## Question 9:
Modify the `Stock` class definition (the version in `stock20.h`) so that it has member functions that return the values of the individual data members. Note: A member that returns the company name should not provide a weapon for altering the array. That is, it can't simply return a string reference. It could return a `const` reference.

MA:

```
#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>

class Stock
{
private:
    std::string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot(void) { total_val = shares * share_val };
public:
    Stock();
    Stock(const std::string &co, long n = 0, double pr = 0.0);
    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show(void) const;
    const Stock &topval(const Stock &s) const;
    
    const std::string &ret_company(void) const { return ret_company }; /* Woot! Got this correct! */
    ~~const~~ int ret_shares(void) cosnt { return shares; }
    ~~const~~ double ret_share_val(void) cosnt { return share_val; }
    ~~const~~ double ret_total_val(void) const { return total_val; }
};

#endif
```
*NOTE*: I made the assumption that we didn't need to show what was happening in the method definitions. So I am adding in the return values, since that was actually my original answer, and there us no ';' after the definitions. The const modifier goes after the definition and before the brackets.

BA:

```
#ifndef STOCK30_H_
#define STOCK30_H_

class Stock
{
private:
    std::string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot(void) { total_val = shares * share_val };
public:
    Stock();
    Stock(const std::string &co, long n = 0, double pr = 0.0);
    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show(void) const;
    const Stock &topval(const Stock &s) const;
    
    const std::string &ret_company(void) const { return ret_company };
    int ret_shares(void) const { return shares; }
    double ret_share_val(void) const { return share_val; }
    double ret_total_val(void) const { return total_val; }
};

#endif
```

## Question 10:
What are `this` and `*this`?

MA:

- The `this` pointer is a special pointer set to the object of the evoking object, basically `this` is passed as a hidden argument to the method.
- The `this` pointer is an address so you want to dereference it by using `*this` which is an alias for the object itself.

BA:

- The `this` pointer is available to class methods. It points to the object used to invoke the method. Thus, `this` is the address of the object and `*this` represents the object itself.
