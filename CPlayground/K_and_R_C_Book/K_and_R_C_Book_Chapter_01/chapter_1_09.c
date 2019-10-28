/*
 * chapter_1_9.c
 *
 *  Created on: Mar 24, 2019
 *      Author: Shane
 */


#include <stdio.h>
#include <string.h>

void chapter_1_09(char *array) {
	int i, lc;
	unsigned int n = strlen(array);

	i = lc = 0;

	for (i = 0; i < n; i++) {
		if (lc != ' ') {
			printf("%c", array[i]);
		}

		if (lc == ' ') {
			if (array[i] != ' ') {
				printf("%c", array[i]);
			}
		}
		lc = array[i];
	}

}
