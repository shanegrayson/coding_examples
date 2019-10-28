/*
 * chapter_1_21.c
 *
 *  Created on: Mar 28, 2019
 *      Author: Shane
 */


#include <stdio.h>
#include <string.h>

void chapter_1_21(char *array) {
	unsigned int n = strlen(array);
	int i;

	i = 0;

	printf("%s\n", array);

	while (i < n) {
		if (array[i] == ' ') {
			printf("\t");
		} else {
			printf("%c", array[i]);
		}
		i++;
	}
	printf("\n");
}
