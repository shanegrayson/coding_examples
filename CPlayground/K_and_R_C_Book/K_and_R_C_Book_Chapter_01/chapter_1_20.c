/*
 * chapter_1_20.c
 *
 *  Created on: Mar 28, 2019
 *      Author: Shane
 */


#include <stdio.h>
#include <string.h>

void chapter_1_20(char *array) {
	unsigned int n = strlen(array);
	int i;

	i = 0;

	printf("%s\n", array);

	/* Replaces the output of tabs with spaces */
	while (i < n) {
		if (array[i] == '\t') {
			printf(" ");
		} else {
			printf("%c", array[i]);
		}
		i++;
	}
	printf("\n");
}
