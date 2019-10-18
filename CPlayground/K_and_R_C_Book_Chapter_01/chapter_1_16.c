/*
 * chapter_1_16.c
 *
 *  Created on: Mar 26, 2019
 *      Author: Shane
 */

/*
 * This is over complicated at the moment since I am already using
 * Functions and the book is not taking this into consideration.
 * They mainly use EOF which terminates with a -1
 * So I plan on skipping this atm and coming back to it later.
 */

#include <stdio.h>
#include <string.h>

#define MAXLINE	100

int getline_1(char s[], int lim, char t[], int a);
void copy(char to[], char from[]);

void chapter_1_16(char *array) {
	int len, max, next, i;
	char line[MAXLINE], longest[MAXLINE];

	max = next = i = 0;
	while ((len = getline_1(line, MAXLINE, array, next)) > 0) {
		if (len > max) {
			next = len;
			max = len;
			copy(longest, line);
		} else if (len == max) {
			break;
		}
	}
	if (max > 0) {
		printf("%s", longest);
	}
}

int getline_1(char s[], int lim, char *array, int next) {
	int i;

	for (i = next; i < lim - 1 && array[i] != '\n' && array[i] != '\0'; i++) {
		s[i] = array[i];
	}

	if (array[i] == '\n') {
		s[i] = array[i];
		++i;
	}

	s[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0') {
		i++;
	}
}
