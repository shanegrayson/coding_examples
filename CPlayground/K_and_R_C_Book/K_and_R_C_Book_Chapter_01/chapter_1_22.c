/*
 * chapter_1_22.c
 *
 *  Created on: Mar 28, 2019
 *      Author: Shane
 */


#include <stdio.h>
#include <string.h>

#define MAXLINES	15

void chapter_1_22(char *array) {
	unsigned int n = strlen(array);
	int i, lc;

	i = lc = 0;

	printf("%s", array);

	while (i < n) {
		if (lc % 15 == 0) {
			printf("\n");
			printf("%c", array[i]);
		} else {
			printf("%c", array[i]);
		}
		lc++;
		i++;
	}
	printf("\n");
}
