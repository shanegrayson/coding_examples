/*
 * chapter_1_4.c
 *
 *  Created on: Mar 23, 2019
 *      Author: Shane
 */


#include <stdio.h>

void chapter_1_04() {
	float fahr, cels;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;

	printf("CELS\tFAHR\n");
	cels = lower;
	while (cels <= upper)
	{
		fahr = ((cels * 9.0) / 5.0) + 32.0;
		printf("%3.1f\t%3.1f\n", cels, fahr);
		cels = cels + step;
	}
}
