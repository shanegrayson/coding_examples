/*
 * chapter_2_10.c
 *
 *  Created on: Sep 18, 2019
 *      Author: Shane
 */

#include <stdio.h>

/* Makes a capital letter small */
void chapter_2_10(int c) {
	int j = c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c;
	printf("%c\n", j);
}
