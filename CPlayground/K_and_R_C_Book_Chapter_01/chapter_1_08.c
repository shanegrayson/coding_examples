/*
 * chapter_1_8.c
 *
 *  Created on: Mar 23, 2019
 *      Author: Shane
 */


#include <stdio.h>
#include <string.h>

void chapter_1_08(char *array) {
	int i, ta, bl, nl;
	unsigned int n = strlen(array);

	i = ta = bl = nl = 0;

	for (i = 0; i < n; i++) {
		if (array[i] == '\t') {
			ta++;
		}

		if (array[i] == ' ') {
			bl++;
		}

		if (array[i] == '\n') {
			nl++;
		}
		printf("%c", array[i]);
	}
	printf("\n");
	printf("TAB: %d\nBLANKS: %d\nNEW LINES: %d\n", ta, bl, nl);
}
