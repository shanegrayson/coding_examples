/*
 * Chapter 8: strc_ref.cpp - pg 395-396
 */

#include <iostream>
#include <string>

using namespace std;

struct free_throws
{
    std::string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accumulate(free_throws & target, const free_throws & source);

int main(void)
{
    free_throws one = { "shane grey", 13, 15 };
    free_throws two = { "grant smith", 9, 30 };
    free_throws three = { "leeroy jenks", 10, 10 };   
    free_throws four = { "thanc reeed", 19, 28 };
    free_throws team = { "throwgoods", 0, 0 };
    free_throws dup;

    set_pc(one);
    display(one);
    accumulate(team, one);
    display(team);

    display(accumulate(team, two));
    display(team);

    accumulate(accumulate(team, three), four);
    display(team);

    dup = accumulate(team, two);

    cout << "Displaying team:" << endl;
    display(team);

    cout << "Displaying dup after assignment:" << endl;
    display(dup);

    set_pc(four);

    return 0;
}

void display(const free_throws & ft)
{
    cout << "Name:\t\t" << ft.name << endl;
    cout << "Made:\t\t" << ft.made << endl;
    cout << "Attempts:\t" << ft.attempts << endl;
    cout << "Percent:\t" << ft.percent << endl << endl;
}

void set_pc(free_throws & ft)
{
    if (ft.attempts != 0)
        ft.percent = 100.0f *float(ft.made)/float(ft.attempts);
    else
        ft.percent = 0.0;
}

free_throws & accumulate(free_throws & target, const free_throws & source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);

    return target;
}
