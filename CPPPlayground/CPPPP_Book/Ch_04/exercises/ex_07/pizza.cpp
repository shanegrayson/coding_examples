/*
 * Chapter 4: Exercise 7 - pg 193
 * Pizza Company info with structs
 */

#include <iostream>

using namespace std;

struct pizza_analysis
{
    char company_name[30];
    float diameter;
    float weight;
};

int main(void)
{
    pizza_analysis * p_pa = new pizza_analysis;

    cout << "Please enter the Pizza Company's name: \n";
    cin.get(p_pa->company_name, 30);
    cout << endl;

    cout << "Please enter the diameter of the pizza: \n";
    cin >> p_pa->diameter;
    cout << endl;

    cout << "Please enter the weight of the pizza: \n";
    cin >> p_pa->weight;
    cout << endl;

    cout << "The Pizza Company's name is: " << p_pa->company_name << endl;
    cout << "The diameter of the pizza is: " << p_pa->diameter << endl;
    cout << "The weight of the pizza is: " << p_pa->weight << endl;

    delete p_pa;

    return 0;
}
