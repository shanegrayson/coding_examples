/*
 * Chapter 4: Programming Exercise 1 - pg 192
 */

#include <iostream>

/*
 * I am sure there is an easier method for what I choose
 * But I choose to use a structure to practice more with
 * OOP like structs and Pointer
 */
struct student
{
    char first_name[100];
    char last_name[100];
    char grade[4];
    int age;
};

int main(void)
{
    using namespace std;

    //Need to use `new` to dynamically allocate the memory
    student * s1 = new student;

    //We use the `->` for reference the structure member since we use a pointer
    cout << "What is your first name? ";
    cin.getline(s1->first_name, 100);
    cout << endl;

    //We need to use the .getline member function to avoid skipping queued input
    cout << "What is your last name? ";
    cin.getline(s1->last_name, 100);
    cout << endl;
 
    cout << "What letter grade do you deserve? ";
    cin.getline(s1->grade, 4);
    cout << endl;
 
    cout << "What is your age? ";
    (cin >> s1->age).get();
    cout << endl;

    cout << "Your name is:\t" << s1->last_name << ", " << s1->first_name << endl;
    cout << "Your grade is:\t" << s1->grade << endl;
    cout << "Your age is:\t" << s1->age << endl;

    //Need to delete and release any dynamically allocated memory
    delete s1;

    return 0;
}
