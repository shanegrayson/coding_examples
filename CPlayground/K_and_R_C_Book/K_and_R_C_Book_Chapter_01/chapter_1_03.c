/*
 * chapter_1_3.c
 *
 *  Created on: Mar 23, 2019
 *      Author: Shane
 */


#include <stdio.h>

void chapter_1_03() {
	float fahr, cels;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;

	printf("FAHR\tCELS\n");
	fahr = lower;
	while (fahr <= upper)
	{
		cels = (5.0 / 9.0) * (fahr - 32);
		printf("%3.1f\t%3.1f\n", fahr, cels);
		fahr = fahr + step;
	}
}
