/*
 * chapter_2_06.c
 *
 *  Created on: Mar 30, 2019
 *      Author: Shane
 */

#include <stdio.h>

/* shift bits or something, answer from book */
/* I understand what is happening, but book just breezed through it */
void chapter_2_06(unsigned x, int p, int n, unsigned y) {
	unsigned z = (x & ~(~(~0 << n) << (p+1-n))) |
			(y & ~(~0 << n)) << (p+1-n);
	printf("%d\n", z);
}
