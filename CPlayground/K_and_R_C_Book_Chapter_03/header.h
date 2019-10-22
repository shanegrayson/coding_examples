/*
 * header.h
 *
 *  Created on: Oct 18, 2019
 *      Author: Shane
 */

#ifndef HEADER_H_
#define HEADER_H_


#include <stdio.h>
#include <string.h>
#include "chapter_03_01.c"
#include "chapter_03_02.c"
#include "chapter_03_03.c"

int ordered_array[] = { 1, 2, 3, 4, 5, 6 };
char string_02_01[] = "Here spaces.";
char string_02_02[] = "Here[SPC]spaces.";
char string_03_01[] = "a-z";
char string_03_02[] = "";
char string_03_03[] = "a-g-t";
char string_03_04[] = "";
char string_03_05[] = "a-z0-9";
char string_03_06[] = "";

void chapter_03_01(int, int[], int);
void chapter_03_02(char *array);
void chapter_03_03(char *array1, char *array2);

#endif /* HEADER_H_ */
