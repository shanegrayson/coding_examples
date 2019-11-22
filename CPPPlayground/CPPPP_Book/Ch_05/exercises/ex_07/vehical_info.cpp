/*
 * Chapter 5: Exercise 7 - pg 251
 * Vehical info
 */

#include <iostream>
#include <string>

struct car
{
    std::string make = "";
    std::string model = "";
    int year;
};


int main(void)
{
    using namespace std;

    int catalog = 0;

    cout << "How many cars would you like to catalog? ";
    cin >> catalog;

    car * user_car_list = new car[catalog];

    int i = 0;
    while (i < catalog)
    {
        string temp_make = "";
        string temp_model = "";
        int temp_year = 0;

        cout << "Car #" << i+1 << endl;

        cout << "Please enter the make: ";
        cin >> (user_car_list+i)->make;

        cout << "Please enter the model: ";
        cin >> (user_car_list+i)->model;

        cout << "Please enter the year: ";
        cin >> (user_car_list+i)->year;

        cout << endl;

        i++;
    }

    cout << "Here is you car collection: " << endl;

    int j = 0;
    while (j < catalog)
    {
        cout << (user_car_list+j)->year << " " 
            << (user_car_list+j)->make << " "
            << (user_car_list+j)->model << endl;
        j++;
    }

    return 0;
}
