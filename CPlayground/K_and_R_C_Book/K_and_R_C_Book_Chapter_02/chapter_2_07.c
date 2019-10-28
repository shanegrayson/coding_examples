/*
 * chapter-2_07.c
 *
 *  Created on: Mar 30, 2019
 *      Author: Shane
 */


#include <stdio.h>

void chapter_2_07(unsigned x, int p, int n) {
	printf("hello\n");
	printf("%d, %d, %d\n", x, p, n);
	unsigned int j = x ^ (~(~0 << n ) << ( p + 1 - n));
	printf("%x\n", j);
}
