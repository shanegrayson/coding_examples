/*
 * Chapter 4: Exercise 6 - pg 193
 * An array of candy bar structures
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
    candy_bar * p_cb = new candy_bar[3];

    char mocha_munch[20] = "Mocha Munch";
    char snickers[20] = "Snickers";
    char almond_joy[20] = "Almond Joys";

    strcpy(p_cb->brand, mocha_munch);
    p_cb->weight = 5;
    p_cb->calories = 5000;

    strcpy((p_cb+1)->brand, snickers);
    (p_cb+1)->weight = 2;
    (p_cb+1)->calories = 200;

    strcpy((p_cb+2)->brand, almond_joy);
    (p_cb+2)->weight = 5.345;
    (p_cb+2)->calories = 2002434;

    cout << "Brand Name: " << p_cb->brand << endl;
    cout << "Weight: " << p_cb->weight << endl;
    cout << "Calories: " << p_cb->calories << endl;
    cout << endl;

    cout << "Brand Name: " << (p_cb+1)->brand << endl;
    cout << "Weight: " << (p_cb+1)->weight << endl;
    cout << "Calories: " << (p_cb+1)->calories << endl;
    cout << endl;

    cout << "Brand Name: " << (p_cb+2)->brand << endl;
    cout << "Weight: " << (p_cb+2)->weight << endl;
    cout << "Calories: " << (p_cb+2)->calories << endl;

    delete [] p_cb;

    return 0; 
}
