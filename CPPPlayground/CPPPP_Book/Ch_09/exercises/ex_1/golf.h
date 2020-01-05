/**********************************************************
 * Chapter 9: 
 * Exercise 1: golf.h
 * Author: Shane Grayson
 * Created: 01/04/2020
 * Type: Header file
 **********************************************************/
#ifndef GOLF_H_
#define GOLF_H_

/*
 * Constant length of string for Golfer names
 */
const int LEN = 40;

/*
 * Golf struct that resembles a golfer and his handicap.
 */
struct golf
{
    char fullName[LEN];
    int handicap;
};

/*
 * Prototypes for Golfer program.
 */
int setGolf(golf &g);
void setGolf(golf &g, const char *name, int hc);
void handicap(golf &g, int hc);
void showGolf(const golf &g);

#endif