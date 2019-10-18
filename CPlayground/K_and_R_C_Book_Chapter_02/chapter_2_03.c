/*
 * chapter_2_03.c
 *
 *  Created on: Mar 28, 2019
 *      Author: Shane
 */


#include <stdio.h>
#include <string.h>

int power(int base, int exp);

/* converts hex to dec */
void chapter_2_03(char *array) {
	unsigned int n = strlen(array);
	int i, decLower, decUpper, isL, isU, exp;

	decLower = decUpper = isL = isU = exp = 0;
	i = 2;

	if (array[1] == 'x') {
		isL = 1;
		while (i < n) {
			if (array[i] >= 0+'0' && array[i] <= 9+'0') {
				decLower = decLower + ((array[i]-'0') * power(16, exp));
				i++;
				exp++;
			} else if (array[i] >= 'a' && array[i] <= 'f') {
				decLower = decLower + ((array[i]-'a'+10) * power(16, exp));
				i++;
				exp++;
			} else {
				printf("ERROR\n");
				break;
			}
		}
	} else if (array[1] == 'X') {
		isU = 1;
		while (i < n) {
			if (array[i] >= 0+'0' && array[i] <= 9+'0') {
				decUpper = decUpper + ((array[i]-'0') * power(16, exp));
				i++;
				exp++;
			} else if (array[i] >= 'A' && array[i] <= 'F') {
				decUpper = decUpper + ((array[i]-'A'+10) * power(16, exp));
				i++;
				exp++;
			} else {
				printf("ERROR\n");
				break;
			}
		}
	} else {
		printf("ERROR\n");
	}

	if (isL) printf("decLower: %d\n", decLower);
	if (isU) printf("decUpper: %d\n", decUpper);
}

int power(int base, int exp) {
	int i, num;

	i = 0;
	num = 1;

	if (exp == 0) {
		return 1;
	} else {
		while (i < exp) {
			num = num * base;
			i++;
		}
		return num;
	}
}
