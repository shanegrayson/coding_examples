/*
 * Chapter 7: Exercise 9 - pg 375-377
 * Practice on writing functions and structures
 */

#include <iostream>

using namespace std;

const int SLEN = 30;

struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);

void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main(void)
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;

    while (cin.get() != '\n')
        continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);

    for (int i = 0; i < entered; i++)
    {
        cout << "Entered " << i << endl;
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }

    display3(ptr_stu, entered);

    cout << "Done!\n";

    delete [] ptr_stu;

    return 0;
}

int getinfo(student pa[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Enter full name: ";
        cin.get(pa[i].fullname, SLEN).get();

        cout << "Enter hobby: ";
        cin.get(pa[i].hobby, SLEN).get();

        cout << "Enter OOP level: ";
        cin >> pa[i].ooplevel;
        cin.get();
    }

    return i;    
}

void display1(student st)
{
    cout << "Name:\t\t" << st.fullname << endl;
    cout << "Hobby:\t\t" << st.hobby << endl;
    cout << "OOP Level:\t\t" << st.ooplevel << endl;
}

void display2(const student * ps)
{
    cout << "Name:\t\t" << ps->fullname << endl;
    cout << "Hobby:\t\t" << ps->hobby << endl;
    cout << "OOP Level:\t\t" << ps->ooplevel << endl;
}


void display3(const student pa[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Name:\t\t" << pa[i].fullname << endl;
        cout << "Hobby:\t\t" << pa[i].hobby << endl;
        cout << "OOP Level:\t\t" << pa[i].ooplevel << endl;
    }
}

