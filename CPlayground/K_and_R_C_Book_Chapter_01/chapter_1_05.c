/*
 * chapter_1._5.c
 *
 *  Created on: Mar 23, 2019
 *      Author: Shane
 */

#define UPPER	300	//upper limit for temp conversion
#define LOWER	0	//lower limit for temp conversion
#define STEP	20	//set size for temp conversion

#include <stdio.h>

void chapter_1_05() {
	float fahr;

	printf("CELS\tFAHR\n");
	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
	{
		printf("%3.1f\t%3.1f\n", (5.0 / 9.0) * (fahr - 32), fahr);
	}

}
