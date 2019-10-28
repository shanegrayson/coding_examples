/*
 * chapter_2_04.c
 *
 *  Created on: Mar 29, 2019
 *      Author: Shane
 */

#include <stdio.h>
#include <string.h>

void chapter_2_04(char *a, char *c) {
	int i, j;

	for (i = j = 0; a[i] != '\0'; i++) {
		if (a[i] != c[i]) {
			a[j++] = a[i];
		}
	}
	a[j++] = '\0';

	printf("%s\n", a);
}
