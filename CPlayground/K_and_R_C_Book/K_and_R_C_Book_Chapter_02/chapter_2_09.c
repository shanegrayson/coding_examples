/*
 * chapter-2_09.c
 *
 *  Created on: Sep 18, 2019
 *      Author: Shane
 */

#include <stdio.h>

void chapter_2_09(unsigned x) {
	int b;

	for (b = 0; x != 0; x &= x - 1)
			++b;
	printf("%d\n", b);
}
