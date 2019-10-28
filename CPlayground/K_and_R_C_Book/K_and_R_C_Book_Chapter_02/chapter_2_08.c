/*
 * chapter-2_08.c
 *
 *  Created on: Sep 18, 2019
 *      Author: Shane
 */

#include <stdio.h>

int wordlength(void) {
	int i;
	unsigned v = (unsigned) ~0;

	for (i = 1; (v = v >> 1) > 0; i++)
		;
	return i;
}

void chapter_2_08(unsigned x, int n) {
	int wordlength(void);
	int rbit;

	while (n-- > 0) {
		rbit = (x & 1) << (wordlength() - 1);
		x = x | rbit;
	}
	printf("%d\n", x);
}

