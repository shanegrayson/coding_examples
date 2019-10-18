/*
 * chapter_1_12.c
 *
 *  Created on: Mar 24, 2019
 *      Author: Shane
 */


#include <stdio.h>
#include <string.h>

#define IN	1
#define OUT	0

void chapter_1_12(char *array) {
	unsigned int n = strlen(array);
	int i;

	i = 0;

	while (i < n) {
		if (array[i] == ' ' || array[i] == '\t') {
			array[i] = '\n';
		}
		printf("%c", array[i]);
		i++;
	}

}
