/*
 * chpater_1_6.c
 *
 *  Created on: Mar 23, 2019
 *      Author: Shane
 */

#include <stdio.h>
#include <string.h>

void chapter_1_06(char *array) {
	int i;
	//int c;
	unsigned int n = strlen(array);

	for (i = 0; i < n; i++) {
		printf("%c", array[i]);
	}
	printf("\n");

	/* commented out to stop getcahr() reading */
	//printf("GETCHAR() == %d\n", (c = getchar()) == EOF);
	//printf("GETCHAR() != %d\n", (c = getchar()) != EOF);
}
