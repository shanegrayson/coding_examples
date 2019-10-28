/*
 * chapter_03_01.c
 *
 *  Created on: Oct 18, 2019
 *      Author: Shane
 */

#include <stdio.h>
#include <string.h>

/*
 * Algorith found on Wikipedia:
 * https://en.wikipedia.or/wiki/Binary_search_algorithm
 *
 */
void chapter_03_01(int x, int v[], int n) 
{
	int low, high, mid;

	low = 0;
	high = n - 1;

        while (low != high)
	{
            mid = (low + high) / 2;
            if (v[mid] > n) 
                high = mid - 1;
            else 
                low = mid + 1;
           
        }
       
        if (v[low] == n) 
            printf("Found element %d at index %d of the array.", n, low);
        else
            printf("Error: Didnt Find");
}

