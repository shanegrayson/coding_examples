/**********************************************************
 * Chapter 9:
 * Exercise 2: static.cpp
 * Author: Shane Grayson
 * Created: 01/05/2020
 * Type: Main driver file
 **********************************************************/

#include <iostream>
#include <string>

/*
 * Needed to use using declarations because they
 * were causing problems with std::string namespace
 */
using std::cin;
using std::cout;
using std::endl;

/*
 * Just needed to chante char * to std::string type
 */
void strcount(const std::string str);

/*
 * Driver function
 */
int main(void)
{
    std::string input;

    /*
     * Needed to use getline(cin, std::string) function because
     * the normal cin >> std::string was not reading the "\n" character
     */
    cout << "Enter a line:" << endl;
    getline(cin, input);

    /*
     * Needed to use a member funciton found int he string class
     * for the comparison operator.
     */
    while (input.compare(""))
    {
        /*
         * Was able to remove a lot of unnesscary code now that we were
         * using std::string.
         */
        strcount(input);
        cout << "Enter the next line (empty to quit): " << endl;
        getline(cin, input);
    }
    cout << "Bye." << endl;

    return 0;
}

/*
 * As mentioned in the prototpe comment, just needed to change
 * the *char to std::string
 */
void strcount(const std::string str)
{
    static int total = 0;
    int count = 0;

    /*
     * Was not able to find a good method to traverse char by char from a
     * std::string from https://stackoverflow.com/questions/9438209/for-every-character-in-string
     * answered by R. Martinho Fernandes. I am a bit confused by the std::string::size_type i = 0
     * but I guess this is needed for the comparison in the for loop. I tried with just a typical
     * int variable type and it worked too, so I am not too sure WHY they use that.
     */
    for (std::string::size_type i = 0; i < str.size(); ++i)
        count++;
    total += count;

    cout << count << " characters." << endl;
    cout << total << " characters total." << endl;
}
