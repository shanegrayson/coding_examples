/*
 * chapter_1_24.c
 *
 *  Created on: Mar 28, 2019
 *      Author: Shane
 */


#include <stdio.h>
#include <string.h>

void chapter_1_24(char *array) {
	unsigned int n = strlen(array);
	int i, save, check, pL, pR, qL, qR;

	i = save = check = pL = pR = qL = qR = 0;

	while (i < n) {
		/* Checks syntax of {} */
		if (array[i] == '{') {
			pL++;
		}
		if (array[i] == '}') {
			pR++;
		}

		/* Checks syntax of {} */
		if (array[i] == '\"') {
			qL++;
		}
		if (array[i] == '\"') {
			qR++;
		}

		printf("%c", array[i]);
		i++;
	} //end while
	printf("\n");

	if (pL != pR) {
		printf("Syntax Error: missing { or }\n");
	} else {
		printf("Syntax Checks: no missing {}\n");
	}

	if (qL != qR) {
		printf("Syntax Error: missing \"\n");
	} else {
		printf("Syntax Checks: no missing \"\n");
	}
} //end main
