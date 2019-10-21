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

int ordered_array[] = { 1, 2, 3, 4, 5, 6 };
char string_02_01[] = "Here spaces.";
char string_02_02[] = "Here[SPC]spaces.";

void chapter_03_01(int, int[], int);
void chapter_03_02(char *array);

#endif /* HEADER_H_ */
