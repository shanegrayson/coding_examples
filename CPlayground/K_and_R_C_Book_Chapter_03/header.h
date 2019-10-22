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
#include "chapter_03_04.c"
#include "chapter_03_05.c"
#include "chapter_03_06.c"

int ordered_array[] = { 1, 2, 3, 4, 5, 6 };
char string_02_01[] = "Here spaces.";
char string_02_02[] = "Here[SPC]spaces.";
char string_03_01[] = "a-z";
char string_03_02[] = "";
char string_03_03[] = "a-g-t";
char string_03_04[] = "";
char string_03_05[] = "a-z0-9";
char string_03_06[] = "";
char string_04_01[] = "Just going to skip these last 3 problem.";
char string_05_01[] = "They make no sense in what they are asking.";
char string_06_01[] = "And the answer isn't helping at all :/.";

void chapter_03_01(int, int[], int);
void chapter_03_02(char *array);
void chapter_03_03(char *array1, char *array2);
void chapter_03_04(int, char *array);
void chapter_03_05(int, char *array);
void chapter_03_06(int, char *array);

#endif /* HEADER_H_ */
