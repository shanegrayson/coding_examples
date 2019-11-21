/*
 * Chapter 5: equal.cpp - pg 219
 * equality vs assignment
 */

#include <iostream>

int main(void)
{
    using namespace std;

    int quizscore[5] = { 20, 20, 19, 20, 20 };

    cout << "Doing it right:\n";

    int i;
    for (i = 0; quizscore[i] == 20; i++)
        cout << "quiz: " << quizscore[i] << " is a 20" << endl;

    /* The following causes a seg fault
    cout << "Doing it dangerously wrong:\n";

    for (i = 0; quizscore[i] = 20; i++)
        cout << "quiz: " << quizscore[i] << " is a 20" << endl;
    */

    return 0;
}

