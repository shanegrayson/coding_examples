/*
 * Chapter 8: Exercise 2: candy.cpp - pg. 445
 */

#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
    std::string name;
    double weight;
    int calories;
};

void display(const CandyBar & cb);
void set(CandyBar & cb, string str, double w, int c);

int main(void)
{
    CandyBar cb1 = {"Mars", 1.567, 140};
    CandyBar cb2;

    display(cb1);
    set(cb2, "Kitkat", 0.4455, 125);
    display(cb2);

    return 0;
}

void display(const CandyBar & cb)
{
    cout << "Name: " << cb.name << endl;
    cout << "Weight: " << cb.weight << endl;
    cout << "Calories: " << cb.calories << endl;
}

void set(CandyBar & cb, std::string str, double w, int c)
{
    cb.name = str;
    cb.weight = w;
    cb.calories = c;
}
