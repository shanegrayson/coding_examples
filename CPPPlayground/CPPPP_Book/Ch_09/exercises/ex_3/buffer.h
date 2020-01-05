/**********************************************************
 * Chapter 9:
 * Exercise 3: buffer.h
 * Author: Shane Grayson
 * Created: 01/05/2020
 * Type: Header file
 **********************************************************/
#ifndef BUFFER_H_
#define BUFFER_H_

const int BUF = 64;
const int SIZE = 20;
char buffer[BUF];

struct chaff
{
    char dross[SIZE];
    int slag;
};

#endif