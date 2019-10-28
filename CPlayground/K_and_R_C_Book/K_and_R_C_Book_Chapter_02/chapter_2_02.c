/*
 * chapter_2_02.c
 *
 *  Created on: Mar 28, 2019
 *      Author: Shane
 */


#include <stdio.h>
#include <string.h>

void chapter_2_02(char *array) {
	unsigned int n = strlen(array);
	int i;

	enum loop { NO, YES };
	enum loop okloop = YES;

	i = 0;

	while (okloop == YES) {
		if (i >= n) {
			okloop = NO;
		} else if (array[i] == 'i') {
			okloop = NO;
		}
		printf("%c", array[i]);
		i++;
	}
	printf("\n");
}
