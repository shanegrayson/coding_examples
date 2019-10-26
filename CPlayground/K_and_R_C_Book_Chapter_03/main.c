/*
 * main.c
 *
 *  Created on: Oct 18, 2019
 *      Author: Shane
 */


#include "header.h"

int main() 
{
    printf("Running: chapter_03_01()\n");
    chapter_03_01(2, ordered_array, 5);
    printf("\n\n");

    printf("Running: chapter_03_02()\n");
    chapter_03_02(string_02_01);
    printf("\n");
    chapter_03_02(string_02_02);
    printf("\n\n");

    printf("Running: chapter_03_03()\n");
    chapter_03_03(string_03_01, string_03_02);
    chapter_03_03(string_03_03, string_03_04);
    chapter_03_03(string_03_05, string_03_06);
    printf("\n\n");
    
    printf("Running: chapter_03_04()\n");
    chapter_03_04(100, string_04_01);
    printf("\n\n");
    
    printf("Running: chapter_03_05()\n");
    chapter_03_05(100, string_05_01);
    printf("\n\n");

    printf("Running: chapter_03_06()\n");
    chapter_03_06(100, string_06_01);
    printf("\n\n");

    return 0;
}
