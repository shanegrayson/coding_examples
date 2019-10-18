/*
 * chpater_1_15.c
 *
 *  Created on: Mar 26, 2019
 *      Author: Shane
 */

#include <stdio.h>

#define UPPER	300	//upper limit for temp conversion
#define LOWER	0	//lower limit for temp conversion
#define STEP	20	//set size for temp conversion

void chapter_1_15() {
	float fahr;

	printf("CELS\tFAHR\n");
	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
	{
		printf("%3.1f\t%3.1f\n", (5.0 / 9.0) * (fahr - 32), fahr);
	}
}
