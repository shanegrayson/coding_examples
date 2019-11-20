/*
 * Chapter 4: Exercise 5 - pg 193
 * structures and snacks
 */

#include <iostream>
#include <cstring>

using namespace std;

struct candy_bar
{
    char brand[20];
    float weight;
    int calories;
};

int main(void)
{
    candy_bar * p_cb = new candy_bar;

    char mocha_munch[20] = "Mocha Munch";

    strcpy(p_cb->brand, mocha_munch);
    p_cb->weight = 5;
    p_cb->calories = 5000;

    cout << "Brand Name: " << p_cb->brand << endl;
    cout << "Weight: " << p_cb->weight << endl;
    cout << "Calories: " << p_cb->calories << endl;

    return 0; 
}
