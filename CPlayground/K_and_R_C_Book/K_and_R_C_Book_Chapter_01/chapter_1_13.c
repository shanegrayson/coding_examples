/*
 * chapter_1_13.c
 *
 *  Created on: Mar 24, 2019
 *      Author: Shane
 */

#include <stdio.h>
#include <string.h>

/* Prints a histogram of word lengths in a character array */
void chapter_1_13(char *array) {
	unsigned int n, w_l;
	int i, j, k;

	i = j = k = w_l = 0;
	n = strlen(array);

	int hist_array[n];

	while (k < n) {
		hist_array[k] = 0;
		k++;
	}

	while (i <= n) {
		if (array[i] == '\n' || array[i] == ' ' || array[i] == '\t' ||
				array[i] == '\0') {
			hist_array[w_l]++;
			w_l = 0;
		} else {
			w_l++;
		}

		i++;
	}

	printf("W_L\n");
	while (j < n) {
		int m;

		m = 0;

		if (hist_array[j] == 0) {
			;
		} else {
			printf("%d ", j);
			while (m < hist_array[j]) {
				printf("-");
				m++;
			}
			printf("\n");
		}
		j++;
	}
}
