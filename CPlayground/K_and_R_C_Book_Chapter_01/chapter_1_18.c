/*
 * chapter_1_18.c
 *
 *  Created on: Mar 26, 2019
 *      Author: Shane
 */

#include <stdio.h>
#include <string.h>

void chapter_1_18(char *array) {
	unsigned int n = strlen(array);
	int i, j, trace, lc;
	char temp_array[n];

	i = j = trace = lc = 0;

	lc = array[0];
	while (i < n) {
		if (array[i] != ' ') {
			if (lc != ' ')
				temp_array[i-trace] = array[i];
			if (lc == ' ')
				temp_array[i-trace] = array[i];
		}

		if (array[i] == ' ') {
			if (lc != ' ')
				temp_array[i-trace] = array[i];
			if (lc == ' ')
				trace++;
		}

		lc = array[i];
		i++;
	}
	printf("%s\n", array);
	printf("%s\n", temp_array);
}
