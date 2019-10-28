/*
 * chapter_03_03.c
 *
 *  Created on: Oct 18, 2019
 *      Author: Shane
 */

/*
 * Function to take a short hand for letter length, example a-z, a-d-k, or a-z0-9
 * and out put the expanded version like abcdef...xyz or abcd, defghijk
 * we make the assumption that it is an ordered string
 */
void chapter_03_03(char *short_hand, char *expanded)
{
    int SH_LENGTH = strlen(short_hand);
    int i, j;
    int count_dashes = 0;
    
    /*
     * Count '-' and make a new array
     * And pritns what is being changed.
     */
    printf("Short Hand:\t"); 
    for (i = 0; i < SH_LENGTH; i++) {
       if (short_hand[i] == '-')
           count_dashes++;
       printf("%c", short_hand[i]);
    } //end for
    printf("\n");

    char new_array[SH_LENGTH - count_dashes];

    /*
     * Creates new Arrays without the '-'
     */
    for (i = 0, j = 0; i < SH_LENGTH; i++, j++) {
        if (short_hand[i] == '-') {
            i++;
        }
        new_array[j] = short_hand[i];
    } //end for
    new_array[j+1] = '\0';

    /*
     * For loop that checks the current and next elements in the
     * new array. Calulcates the distance from one character from
     * another through the ASCII table and prints them.
     */
    int current, next, start, end, distance;
    for (current = 0, next = 1; new_array[next] != '\0'; current++, next++) {
        start = new_array[current];
        end = new_array[next];

        if (start == 'z' || 'Z' && end == 0)
            continue;
        
        for (start; start <= end; start++)
            printf("%c", start);
        printf("\n");
    } //end for

} //end main()
