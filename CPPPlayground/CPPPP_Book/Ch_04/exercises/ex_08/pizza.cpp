/*
 * Chapter 4: Exercise 8 - pg 193
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
    pizza_analysis pizza_info;

    cout << "Please enter the diameter of the pizza: \n";
    cin >> pizza_info.diameter;
    cin.get();
    cout << endl;

    cout << "Please enter the Pizza Company's name: \n";
    cin.get(pizza_info.company_name, 30);
    cout << endl;

    cout << "Please enter the weight of the pizza: \n";
    cin >> pizza_info.weight;
    cout << endl;

    cout << "The Pizza Company's name is: " << pizza_info.company_name << endl;
    cout << "The diameter of the pizza is: " << pizza_info.diameter << endl;
    cout << "The weight of the pizza is: " << pizza_info.weight << endl;

    return 0;
}
