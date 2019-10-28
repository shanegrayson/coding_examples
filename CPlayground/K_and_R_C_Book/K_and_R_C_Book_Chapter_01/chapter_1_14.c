/*
 * chapter_1_14.c
 *
 *  Created on: Mar 26, 2019
 *      Author: Shane
 */

#include <stdio.h>
#include <string.h>

#define ALPHABET 26

void chapter_1_14(char *array) {
	unsigned int n;
	int i, k, j, m;
	int lower[ALPHABET], upper[ALPHABET];

	n = strlen(array);
	i = k = j = m = 0;

	/* Fills arrays with 0 to avoid garbage values */
	while (m < ALPHABET) {
		lower[m] = 0;
		upper[m] = 0;
		m++;
	}

	/* Increments array elements in relation to ASCII table */
	while (i < n+1) {
		if (array[i] > 64 && array[i] < 91) {
			upper[array[i]-65] = upper[array[i]-65] + 1;
		}
		else if (array[i] > 96 && array[i] < 123) {
			lower[array[i]-97] = lower[array[i]-97] + 1;
		}
		else {
			;
		}
		i++;
	}

	/* Prints characters that are only used in the char array */
	while (k < (ALPHABET)) {
		if (upper[k] != ' ' && upper[k] != '\n' && upper[k] != '\t'
				&& upper[k] != '\0') {
			printf("Letter %c: %d\n", k + 65, upper[k]);
		} else {
			;
		}
		k++;
	}

	/* Prints characters that are only used in the char array */
	while (j < (ALPHABET)) {
		if (lower[j] != ' ' && lower[j] != '\n' && lower[j] != '\t'
				&& lower[j] != '\0') {
			printf("Letter %c: %d\n", j + 97, lower[j]);
		} else {
			;
		}
		j++;
	}
}
