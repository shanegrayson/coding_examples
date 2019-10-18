/*
 * chapter_1_10.c
 *
 *  Created on: Mar 24, 2019
 *      Author: Shane
 */


#include <stdio.h>
#include <string.h>

void chapter_1_10(char *array) {
	unsigned int n = strlen(array);
	int i;

	for (i = 0; i < n; i++) {
		if (array[i] == '\t') {
			printf("%c%c", '\\', 't');
		} else {
			printf("%c", array[i]);
		}
	}
	printf("\n");
}
