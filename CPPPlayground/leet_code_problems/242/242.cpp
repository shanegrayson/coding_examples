/*
 * Leet Code Problem 242
 * Challenge level: Easy
 */

/*
 * My process of solving this problem:
 * Step 1: Find a way to sort the users array inputs.
 * Step 2: Compare each value of the array.
 */

#include <iostream>

using namespace std;

const int MAX = 30;

/*
 * This is part of the sorting algo sort().
 */
void swap(char * px, char * py)
{
    char temp;
    temp = *px;
    *px = *py;
    *py = temp;
}

/*
 * Bubble sort algorithm I found at
 * https://www.geeksforgeeks.org/bubble-sort/
 * I modified it a bit to account for char type
 * instead of int types.
 */
void sort(char * arr, int n)
{
    int i, j;
    
    for (i = 0; i < n-1 && arr[i] != '\0'; i++)
        for (j = 0; j < n-i-1 && arr[j] != '\0'; j++)
            if (arr[j] < arr[j+1])
                swap(&arr[j], &arr[j+1]);
}

/*
 * Just a simple function to print
 * Could've just used 'cout <<'.
 */
void print(char * arr, int n)
{
    for (int i = 0; i < n && arr[i] != '\0'; i++)
        cout << arr[i];
    cout << endl;
}

/*
 * Function used to check if two chrarceter arrays
 * are an anagram of each other.
 * The main conditions here are that we can:
 * 1. traverse each array fully if the arrays are both full,
 * 2. leave the loop if we hit the end of one of the arrays,
 * 3. check the condition of each array that they are both at end or not,
 * 4. returning an int of 0 or 1 for comparison in main().
 */
int anagram(char * arr1, char * arr2, int n)
{
    int i;
    for (i = 0; i < n-1 && (arr1[i] != '\0' && arr2[i] != '\0'); i++)
        if (arr1[i] != arr2[i])
            return 0;

    if (arr1[i] != '\0' || arr2[i] != '\0')
        return 0;
    else
        return 1;
}

/*
 * Driver program.
 * 1. Gets input from user about an anagram and a testing phrase,
 * 2. Lets the user know if the phrases are anagrams.
 */
int main(void)
{
    cout << "Please enter a phrase for anagram testing: " << endl;
    char phrase[MAX];
    cin.getline(phrase, MAX);

    cout << "New ordered phrase is: " << endl;
    sort(phrase, MAX);
    print(phrase, MAX);
    cout << endl;

    cout << "Now enter the anagram testing: " << endl;
    char ana[MAX];
    cin.getline(ana, MAX);

    cout << "New ordered phrase is: " << endl;
    sort(ana, MAX);
    print(ana, MAX);
    cout << endl;

    cout << "Compareing: '" << ana << "' and '" << phrase << endl; 

    if (anagram(phrase, ana, MAX))
        cout << "It's an anagram!" << endl;
    else
        cout << "It's not an anagram :( " << endl;

    return 0;
}
