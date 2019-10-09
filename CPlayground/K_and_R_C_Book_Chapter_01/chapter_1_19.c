/*
 * chapter_1_19.c
 *
 *  Created on: Mar 26, 2019
 *      Author: Shane
 */

#include <stdio.h>
#include <string.h>

void chapter_1_19(char *array) {
	int n = strlen(array);
	int m = strlen(array);
	int i, k;
	char temp_array[n];

	i = k = 0;

	while (i < n) {
		temp_array[i] = 0;
		i++;
	}

	while (k <= n) {
		temp_array[k] = array[m-1];
		k++;
		m--;
	}
	temp_array[n] = '\0';

	printf("%s\n", array);
	printf("%s\n", temp_array);
}
