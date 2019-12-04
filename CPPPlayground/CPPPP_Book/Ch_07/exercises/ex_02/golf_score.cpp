/*
 * Chapter 7: Exercise 2 - pg 374
 * Golf Scores
 */

#include <iostream>

using namespace std;

const int Size = 9;

void input(int * arr, int hole_num, int score);
void display(const int * start, const int * end);
double avg(const int * start, const int * end);

int main(void)
{
    int front_nine[Size];
    int score, i;
    double answer;

    cout << "Please enter your score, per hole, for the front nine"
        "(enter 0 to quit): " << endl;

    /*
     * I choose to loop in main here because
     * I did not want to have to declare a global
     * array
     */
    for (i = 0; i < Size; i++)
    {
        cout << "Hole #" << i + 1 << ": ";
        cin >> score;

        if (score == 0)
            while (i < Size)
                input(front_nine, i++, 0);
        else
            input(front_nine, i, score);
    } 

    display(front_nine, front_nine + Size);

    answer = avg(front_nine, front_nine + Size);

    cout << "Your average score for the front nine is " << answer << endl;
    cout << "Thank you for playing at Red Ridge Golf Course!" << endl;

    return 0;
}

/*
 * For this function I did not declare the * arr const
 * because I wanted to manipulate the data.
 */
void input(int * arr, int hole_num, int score)
{
    arr[hole_num] = score;
}

/*
 * This fucntion I do want data manipulation to occur,
 * so I added the const modifier to stop that from occuring.
 * I also needed to have a poitner to the start and end
 * of the array and then assign a point in the function 
 * to move through the array memory units and get the data.
 */
void display(const int * start, const int * end)
{
    const int * pt;
    int i = 1;

    for (pt = start; pt < end; pt++, i++)
        cout << "Hole #" << i << "'s score entered is: "
            << *pt << endl;
}

// Same concept as the display function.
double avg(const int * start, const int * end)
{
    double avg = 0.0;
    const int * pt;

    for (pt = start; pt < end; pt++)
    {
        avg += *pt;
    }

    return avg / Size;
}

