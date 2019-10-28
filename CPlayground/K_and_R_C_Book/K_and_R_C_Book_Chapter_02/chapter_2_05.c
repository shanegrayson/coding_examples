/*
 * chapter_2_05.c
 *
 *  Created on: Mar 30, 2019
 *      Author: Shane
 */


#include <stdio.h>
#include <string.h>

/* counts instances of a string in another string */
void chapter_2_05(char *a, char *c) {
	unsigned int n = strlen(c);
	char temp = c[n-1];
	int i, j, count;

	for (i = j = count = 0; a[i] != '\0'; i++) {
		if (a[i] == c[j]) {
			while (a[++i] == c[++j]) {
				if (c[j] == temp) {
					count++;
					j = 0;
				}
			}
			j = 0;
		}
	}

	printf("%s\n", a);
	printf("%s\n", c);
	printf("count: %d\n", count);
}
