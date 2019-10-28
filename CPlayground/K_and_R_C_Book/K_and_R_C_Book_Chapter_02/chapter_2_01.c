/*
 * chapter_2_01.c
 *
 *  Created on: Mar 27, 2019
 *      Author: Shane
 */


#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <float.h>

void chapter_2_01(char *array) {
	printf("CHAR MIN: %d\n", CHAR_MIN);
	printf("CHAR MAX: %d\n", CHAR_MAX);
	printf("CHAR UNSIGNED: %d\n", UCHAR_MAX);
	printf("SHORT MIN: %d\n", SHRT_MIN);
	printf("SHORT MAX: %d\n", SHRT_MAX);
	printf("SHORT UNSIGNED: %d\n", USHRT_MAX);
	printf("INT MIN: %d\n", INT_MIN);
	printf("INT MAX: %d\n", INT_MAX);
	printf("INT UNSIGNED: 0x%X\n", UINT_MAX);
	printf("LONG MIN: %ld\n", LONG_MIN);
	printf("LONG MAX: %ld\n", LONG_MAX);
	printf("LONG UNSIGNED: %lu\n", ULONG_MAX);
	printf("MANTESTA: %d\n", FLT_MANT_DIG);
	printf("DEC DIGITS: %d\n", FLT_DIG);
	printf("MIN EXPONENT: %d\n", FLT_MIN_EXP);
	printf("MAX EXPONENT: %d\n", FLT_MAX_EXP);
	printf("MANTESTA: %d\n", DBL_MANT_DIG);
	printf("DEC DIGITS: %d\n", DBL_DIG);
	printf("MIN EXPONENT: %d\n", DBL_MIN_EXP);
	printf("MAX EXPONENT: %d\n", DBL_MAX_EXP);
	printf("MANTESTA: %d\n", LDBL_MANT_DIG);
	printf("DEC DIGITS: %d\n", LDBL_DIG);
	printf("MIN EXPONENT: %d\n", LDBL_MIN_EXP);
	printf("MAX EXPONENT: %d\n", LDBL_MAX_EXP);
}
