/*
 * chapter1_23.c
 *
 *  Created on: Mar 28, 2019
 *      Author: Shane
 */

#include <stdio.h>
#include <string.h>

void chapter_1_23(char *array) {
	unsigned int n = strlen(array);
	int i;
	char lc;

	i = lc = 0;

	printf("%s", array);

	/* Removes comments from a C program */
	lc = array[0];
	while (i < n) {
		if (array[i] == '/' && lc != '/') {
			if ((array[i+1] == '*' || array[i+1] == '/') &&
					array[i+1] != '\0') {
				;
			} else {
				printf("%c", array[i]);
			}
		} else if (lc == '/') {
			if (array[i] == '*') { /* this removes these kinds of comments */
				while (array[i] != '/' || lc != '*') {
					lc = array[i];
					i++;
				}
				lc = array[i];
			}
			if (array[i] == '/') { // this removes these kinds of comments
				while (array[i] != '\n') {
					lc = array[i];
					i++;
				}
			}
		} else {
			printf("%c", array[i]);
		}

		lc = array[i];
		i++;
	}
}
