/*
 * Chapter 4: Exercise 9 - pg 193
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
    /*
     * Just like Exercise 8, I needed to declare
     * the struct as a variable, but I did it 1 step
     * ahead, so doing it now with variable type
     */
    candy_bar candy[3];

    char mocha_munch[20] = "Mocha Munch";
    char snickers[20] = "Snickers";
    char almond_joy[20] = "Almond Joys";

    strcpy(candy[0].brand, mocha_munch);
    candy[0].weight = 5;
    candy[0].calories = 5000;

    strcpy(candy[1].brand, snickers);
    candy[1].weight = 2;
    candy[1].calories = 200;

    strcpy(candy[2].brand, almond_joy);
    candy[2].weight = 5.345;
    candy[2].calories = 2002434;

    cout << "Brand Name: " << candy[0].brand << endl;
    cout << "Weight: " << candy[0].weight << endl;
    cout << "Calories: " << candy[0].calories << endl;
    cout << endl;

    cout << "Brand Name: " << candy[1].brand << endl;
    cout << "Weight: " << candy[1].weight << endl;
    cout << "Calories: " << candy[1].calories << endl;
    cout << endl;

    cout << "Brand Name: " << candy[2].brand << endl;
    cout << "Weight: " << candy[2].weight << endl;
    cout << "Calories: " << candy[2].calories << endl;

    return 0; 
}
