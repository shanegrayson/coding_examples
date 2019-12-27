/*
 * Chapter 8: Exercise 7: mod814.cpp - pg. 446
 */

#include <iostream>

using namespace std;

template <typename T>
void ShowArray(T arr[], int n);

template <typename T>
void ShowArray(T * arr[], int n);

template <typename T>
T SumArray(T arr[], int n);

template <typename T>
T SumArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amount;
};

int main(void)
{
    int things[6] = {13, 31, 103, 301, 310, 130};

    struct debts mr_E[3] =
    {
        {"Ima", 2400.0},
        {"Uma", 1300.0},
        {"Iby", 1800.0}
    };

    double * pd[3];

    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;

    cout << "Listing Mr. E's counts of things:" << endl;
    ShowArray(things, 6);
    cout << "Sum of things is: " << SumArray(things, 6) << endl;

    cout << "Listing Mr. E's debts:" << endl;
    ShowArray(pd, 3);
    cout << "Sum of debts: " << SumArray(pd, 3) << endl;

    return 0;
}

template <typename T>
T SumArray(T arr[], int n)
{
    T sum = (T)0.0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

template <typename T>
T SumArray(T * arr[], int n)
{
    T temp;
    T sum = (T)0.0;
    for (int i = 0; i < n; i++)
    {
        temp = *arr[i];
        sum += temp;
    }
    return sum;
}

template <typename T>
void ShowArray(T arr[], int n)
{
    cout << "Template A:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

template <typename T>
void ShowArray(T * arr[], int n)
{
    cout << "Template B:" << endl;
    for (int i = 0; i < n; i++)
        cout << *arr[i] << " ";
    cout << endl;
}
