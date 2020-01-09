/***************************************
 * Author: Shane Grayson
 * Date: 01/08/2020
 * Program: person_driver/cpp
 * Purpose: Main Driver file
 * ************************************/
#include "person.h"

int main(void)
{
    Person *one = new Person;
    Person *two = new Person("Symthecraft");
    Person *three = new Person("Shane", "The dood");

    one->Show();
    one->FormalShow();
    std::cout << std::endl;

    two->Show();
    two->FormalShow();
    std::cout << std::endl;

    three->Show();
    three->FormalShow();
    std::cout << std::endl;

    std::cout << "\n\nI have no idea what the FormalShow() is suppose to do\n\n";

    return 0;
}