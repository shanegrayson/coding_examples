/********************************************************
 * Program: funtest.cpp
 * Author: Shane Grayson
 * Date: 01/06/2020
 * 
 * Purpose: Simple programming interview question.
 * http://web.archive.org/web/20161003201657/https://blog.codinghorror.com/why-cant-programmers-program/
 * Can be found here. Just wanted to try and write 
 * out the question stated by hand first and then 
 * implement it. After doing the iterative method, I tried
 * doing it through a recursive method. I was able to
 * sorta do it through recurssion, but it's in reverse...
 * Was able to solve that by haing a start and end for
 * the recursion.
 ********************************************************/
#include <iostream>

void test_rec(int n);
void test_rec(int n, int end);

/* Main Driver function */
int main(void)
{
    std::cout << "Iterative method using for loop:\n";
    test_rec(100);

    std::cout << std::endl;

    std::cout << "Recurssive Method:\n";
    test_rec(0, 100);
    
    return 0;
}

/* Iterative method */
void test_rec(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 0 && i % 5 != 0)
            std::cout << "fizz ";
        else if (i % 5 == 0 && i % 3 != 0)
            std::cout << "buzz ";
        else if (i % 3 == 0 && i % 5 == 0)
            std::cout << "fizzbuzz ";
        else
            std::cout << i << " ";
    }
    return;
}

/* Recurssive method */
void test_rec(int n, int end)
{
    if (n == end)
    {
        return;
    }
    if (n % 3 == 0 && n % 5 == 0)
    {
        std::cout << "fizzbuzz ";
        test_rec(n + 1, end);
    }
    else if (n % 5 == 0 && n % 3 != 0)
    {
        std::cout << "buzz ";
        test_rec(n + 1, end);
    }
    else if (n % 3 == 0 && n % 5 != 0)
    {
        std::cout << "fizz ";
        test_rec(n + 1, end);
    }
    else
    {
        std::cout << n << " ";
        test_rec(n + 1, end);
    }
}