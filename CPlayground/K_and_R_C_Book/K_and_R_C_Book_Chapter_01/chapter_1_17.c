/*
 * chapter_1_17.c
 *
 *  Created on: Mar 26, 2019
 *      Author: Shane
 */

#include <stdio.h>
#include <string.h>

#define MIN_PRINT	20

void chapter_1_17(char *array) {
	unsigned int n;
	int i;

	n = strlen(array);
	i = 0;

	if (n >= MIN_PRINT) {
		while (i < n) {
			printf("%c", array[i]);
			i++;
		}
		printf("\n");
	} else {
		printf("Statement is less than %d\n", MIN_PRINT);
	}
}
