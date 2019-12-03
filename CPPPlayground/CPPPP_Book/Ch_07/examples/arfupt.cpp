/*
 * Chapter 7: arfupt - pg 368-369
 */

#include <iostream>

const double * f1(const double ar[], int n);
const double * f2(const double [], int);
const double * f3(const double *, int);

int main(void)
{
    using namespace std;

    double av[3] = { 1112.3, 1542.6, 2227.9 };

    //pointer to a function
    const double *(*p1)(const double *, int) = f1;
    auto p2 = f2;
    cout << "Using pointers to functions:\n";
    cout << "Address\tValue\n";
    cout << (*p1)(av, 3) << "\t" << *(*p1)(av, 3) << endl;
    cout << p2(av, 3) << "\t" << *p2(av, 3) << endl;

    //pa an array of pointers
    const double *(*pa[3])(const double *, int) = { f1, f2, f3 };
    auto pb = pa;
    cout << "\nUsing an array of pointers to functions:\n";
    cout << "Address\tValue\n";
    for (int i = 0; i < 3; i++)
        cout << pa[i](av, 3) << "\t" << *pa[i](av, 3) << endl;

    cout << "\nUsing a pointer to a pointer to a function:\n";
    cout << "Address\tValue\n";
    for (int i = 0; i < 3; i++)
        cout << pa[i](av, 3) << "\t" << *pb[i](av, 3) << endl;

    //pointer to an array of function pointers
    cout << "\nUsing pointers to an array of pointers:\n";
    cout << "Address\tValue\n";
    auto pc = &pa;
    cout << (*pc)[0](av, 3) << "\t" << *(*pc)[0](av, 3) << endl;

    //hard wat to declare pd
    const double *(*(*pd)[3])(const double *, int) = &pa;
    const double * pdb = (*pd)[1](av, 3);
    cout << pdb << "\t" << *pdb << endl;

    //altrernative notation
    cout << (*(*pd)[2])(av, 3) << "\t" << *(*(*pd)[2])(av, 3) << endl;

    return 0;
}

const double * f1(const double ar[], int n)
{
    return ar;
}

const double * f2(const double ar[], int n)
{
    return ar + 1;
}

const double * f3(const double * ar, int n)
{
    return ar + 2;
}
