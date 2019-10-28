/*
 * chapter_1_11.c
 *
 *  Created on: Mar 24, 2019
 *      Author: Shane
 */

#include <stdio.h>
#include <string.h>

#define IN	1
#define OUT	0

void chapter_1_11(char *array) {
	unsigned int n = strlen(array);
	int i, c, nc, nl, nw, state;

	i = c = nl = nc = nw = 0;
	state = OUT;

	while (i < n) {
		++nc;

		if (array[i] == '\n') {
			++nl;
		}

		if (array[i] == '\n' || array[i] == ' ' || array[i] == '\t') {
			state = OUT;
		}

		else if (state == OUT) {
			state = IN;
			++nw;
		}

		i++;
	}
	printf("%d %d %d\n", nl, nw, nc);
}
