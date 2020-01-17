/*
 * Author: Shane Grayson
 * Random Programming Question: 
 *  Counts of distinct consecutive sub-string of length two using C++ STL
 * Notes: Problem can be found at:
 *  https://www.geeksforgeeks.org/counts-distinct-consecutive-sub-string-length-two-using-c-stl/
 *  They used maps. I have never used maps :/
 */

#include "distinct_string.h"

using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    system("CLS"); //used to clear CLI;

    char string1[] = "xyz";
    dis_string(&string1[0]);

    char string2[] = "abcab";
    dis_string(&string2[0]);

    char string3[] = "hello ll ll ll";
    dis_string(&string3[0]);

    return 0;
}

void dis_string(const char *str)
{
    int nsLen = strlen(str);
    char testCh[2];

    /*
     * The algorithm takes in two characters at a time
     * and stores them in 2 seperate arrays.
     * It then traverses the array 2 checking each char.
     * Since this will go through the entire array using
     * 2 loops, I assume worse case would be O(n^2)
     */
    int i, j, count;
    i = j = count = 0;
    while (i < nsLen)
    {
        if (str[i+1] == '\0')
            return;

        testCh[0] = str[i];
        testCh[1] = str[i+1];

        while (str[j+1] != '\0')
        {
            if (testCh[0] == str[j] && testCh[1] == str[j+1])
                count++;
            j++;
        }
        i++;
        j = i;

        cout << testCh[0] << testCh[1] << "-" << count << endl;
        count = 0;
    }
}